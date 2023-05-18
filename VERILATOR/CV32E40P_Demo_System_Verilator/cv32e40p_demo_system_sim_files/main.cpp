// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "verilated_toplevel.h"
#include "verilator_memutil.h"
#include "verilator_sim_ctrl.h"
#include "cv32e40p_demo_system.h"

#include <vector>
#include <iostream>

int main(int argc, char **argv) {
  DemoSystem demo_system(
      "TOP.cv32e40p_demo_system.u_ram.u_ram",
      1024 * 1024);
      
  demo_system.Main(argc, argv);
	
  return 0;
}
