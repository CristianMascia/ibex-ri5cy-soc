#ifndef CV32E40P_PCOUNTS_H_
#define CV32E40P_PCOUNTS_H_

#include <cstdint>
#include <string>
#include <vector>

extern const std::vector<std::pair<std::string,short>> cv32e40p_counters;

/**
 * Returns a formatted string of performance counter values
 *
 * In CV32E40P the performance counters are held in the mhpmcounter flops in
 * cv32e40p_cs_registers. In a verilator simulation the signal type of the
 * mhpmcounter array should be compatible with the type of pcounts here and so
 * can be passed in directly to this function.
 *
 * There are two options for string formatting, csv or pretty-print. Both
 * produce one counter name and value per line. csv just separates them with a
 * comma and no further formatting. pretty-print uses a colon and aligns the
 * values.
 *
 * csv (csv == true):
 * countername1, 1234
 * longercountername1, 43980
 * ...
 *
 * pretty-print (csv == false):
 * countername1:       1234
 * longercountername1: 43980
 * ...
 *
 * @param csv Choose csv or pretty-print formatting
 * @return String of formatted performance counter values, newline at end
 */
std::string cv32e40p_pcount_string(bool csv);

#endif  // CV32E40P_PCOUNTS_H_
