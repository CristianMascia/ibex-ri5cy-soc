#include <numeric>
#include <sstream>
#include <string>
#include <vector>
#include <utility>

#include <svdpi.h>

extern "C" {
extern unsigned long long mhpmcounter_get(int index);
}

#include "cv32e40p_pcounts.h"

// see mhpmcounter_incr signals in rtl/cv32e40p_cs_registers.sv for details

const std::vector<std::pair<std::string,short>> cv32e40p_counters = {
    std::pair<std::string,short>("Cycles",0), // Number of cycles
    std::pair<std::string,short>("Instructions Retired",2), // Number of instructions retired
    std::pair<std::string,short>("LD Stall",3), // Number of load use hazards
    std::pair<std::string,short>("JMP Stall",4), // Number of jump register hazards
    std::pair<std::string,short>("Instructions Miss",5), // Cycles waiting for instruction fethces, excluding jumps and branches
    std::pair<std::string,short>("LD",6), // Number of load instructions
    std::pair<std::string,short>("ST",7), // Number of store instructions
    std::pair<std::string,short>("JUMP(unconditional)",8), // Number of jumps (unconditional)
    std::pair<std::string,short>("BRANCH(conditional)",9), // Number of branches (conditional)
    std::pair<std::string,short>("BRANCH Taken",10), // Number of branches taken (conditional)
    std::pair<std::string,short>("Pipe Stall",11) // Cycles from stalled pipeline
    };


std::string cv32e40p_pcount_string(bool csv) {
  char seperator = csv ? ',' : ':';
  std::string::size_type longest_name_length;

  if (!csv) {
    longest_name_length = 0;
    for (const std::pair<std::string,short> &counter_name : cv32e40p_counters) {
      longest_name_length = std::max(longest_name_length, counter_name.first.length());
    }

    // Add 1 to always get at least once space after the seperator
    longest_name_length++;
  }

  std::stringstream pcount_ss;

  for (int i = 0; i < cv32e40p_counters.size(); ++i) {
    pcount_ss << cv32e40p_counters[i].first << seperator;

    if (!csv) {
      int padding = longest_name_length - cv32e40p_counters[i].first.length();

      for (int j = 0; j < padding; ++j)
        pcount_ss << ' ';
    }

    pcount_ss << mhpmcounter_get(cv32e40p_counters[i].second) << std::endl;
  }

  return pcount_ss.str();
}
