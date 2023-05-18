// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vibex_demo_system::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vibex_demo_system__Dpi.h"
#include "Vibex_demo_system.h"

#ifndef _VL_DPIDECL_mhpmcounter_get
#define _VL_DPIDECL_mhpmcounter_get
unsigned long long mhpmcounter_get(int index) {
    // DPI export at system_verilog_files/src/ibex_demo_system.sv:487:41
    return Vibex_demo_system::mhpmcounter_get(index);
}
#endif

#ifndef _VL_DPIDECL_simutil_get_mem
#define _VL_DPIDECL_simutil_get_mem
int simutil_get_mem(int index, svBitVecVal* val) {
    // DPI export at system_verilog_files/inc//prim_util_memload.svh:54:16
    return Vibex_demo_system::simutil_get_mem(index, val);
}
#endif

#ifndef _VL_DPIDECL_simutil_get_scramble_key
#define _VL_DPIDECL_simutil_get_scramble_key
int simutil_get_scramble_key(svBitVecVal* val) {
    // DPI export at system_verilog_files/src//ibex_if_stage.sv:369:28
    return Vibex_demo_system::simutil_get_scramble_key(val);
}
#endif

#ifndef _VL_DPIDECL_simutil_get_scramble_nonce
#define _VL_DPIDECL_simutil_get_scramble_nonce
int simutil_get_scramble_nonce(svBitVecVal* nonce) {
    // DPI export at system_verilog_files/src//ibex_if_stage.sv:372:28
    return Vibex_demo_system::simutil_get_scramble_nonce(nonce);
}
#endif

#ifndef _VL_DPIDECL_simutil_memload
#define _VL_DPIDECL_simutil_memload
void simutil_memload(const char* file) {
    // DPI export at system_verilog_files/inc//prim_util_memload.svh:27:8
    return Vibex_demo_system::simutil_memload(file);
}
#endif

#ifndef _VL_DPIDECL_simutil_set_mem
#define _VL_DPIDECL_simutil_set_mem
int simutil_set_mem(int index, const svBitVecVal* val) {
    // DPI export at system_verilog_files/inc//prim_util_memload.svh:36:16
    return Vibex_demo_system::simutil_set_mem(index, val);
}
#endif

