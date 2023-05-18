#include <cassert>
#include <fstream>
#include <iostream>

#include "Vcv32e40p_demo_system__Syms.h"
#include "cv32e40p_pcounts.h"
#include "cv32e40p_demo_system.h"
#include "verilated_toplevel.h"
#include "verilator_memutil.h"
#include "verilator_sim_ctrl.h"

#include <sstream>
#include <iomanip>

DemoSystem::DemoSystem(const char *ram_hier_path, int ram_size_words)
    : _ram(ram_hier_path, ram_size_words, 4) {}

int DemoSystem::Main(int argc, char **argv) {
  bool exit_app;
  int ret_code = Setup(argc, argv, exit_app);

  if (exit_app) {
    return ret_code;
  }

  Run();

  if (!Finish()) {
    return 1;
  }

  return 0;
}


int DemoSystem::Setup(int argc, char **argv, bool &exit_app) {
  VerilatorSimCtrl &simctrl = VerilatorSimCtrl::GetInstance();

  simctrl.SetTop(&_top, &_top.clk_sys_i, &_top.rst_sys_ni,
                 VerilatorSimCtrlFlags::ResetPolarityNegative);

  _memutil.RegisterMemoryArea("ram", 0x0, &_ram);
  simctrl.RegisterExtension(&_memutil);

  exit_app = false;
  return simctrl.ParseCommandArgs(argc, argv, exit_app);
}

void DemoSystem::Run() {
  VerilatorSimCtrl &simctrl = VerilatorSimCtrl::GetInstance();

		
  std::cout << "Simulation of CV32E40P Demo System" << std::endl
            << "==============================" << std::endl
            << std::endl;

  simctrl.RunSimulation();
}

bool DemoSystem::Finish() {
  VerilatorSimCtrl &simctrl = VerilatorSimCtrl::GetInstance();

  if (!simctrl.WasSimulationSuccessful()) {
    return false;
  }

  // Set the scope to the root scope, the cv32e40p_pcount_string function otherwise
  // doesn't know the scope itself. Could be moved to cv32e40p_pcount_string, but
  // would require a way to set the scope name from here, similar to MemUtil.
  svSetScope(svGetScopeFromName("TOP.cv32e40p_demo_system"));

  std::cout << "\nPerformance Counters" << std::endl
            << "====================" << std::endl;
  std::cout << cv32e40p_pcount_string(false);

  std::ofstream pcount_csv("cv32e40p_demo_system_pcount.csv");
  pcount_csv << cv32e40p_pcount_string(true);

  return true;
}
