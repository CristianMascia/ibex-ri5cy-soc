// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI EXPORTS
    // DPI export at system_verilog_files/src/ibex_demo_system.sv:487:41
    extern unsigned long long mhpmcounter_get(int index);
    // DPI export at system_verilog_files/inc//prim_util_memload.svh:54:16
    extern int simutil_get_mem(int index, svBitVecVal* val);
    // DPI export at system_verilog_files/src//ibex_if_stage.sv:369:28
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at system_verilog_files/src//ibex_if_stage.sv:372:28
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);
    // DPI export at system_verilog_files/inc//prim_util_memload.svh:27:8
    extern void simutil_memload(const char* file);
    // DPI export at system_verilog_files/inc//prim_util_memload.svh:36:16
    extern int simutil_set_mem(int index, const svBitVecVal* val);
    
#ifdef __cplusplus
}
#endif
