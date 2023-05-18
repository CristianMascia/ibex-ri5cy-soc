// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_demo_system__Syms.h"
#include "Vibex_demo_system.h"



// FUNCTIONS
Vibex_demo_system__Syms::Vibex_demo_system__Syms(Vibex_demo_system* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_ibex_demo_system.configure(this, name(), "ibex_demo_system", "ibex_demo_system", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_demo_system__u_ram__u_ram.configure(this, name(), "ibex_demo_system.u_ram.u_ram", "u_ram", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_demo_system__u_ram__u_ram__unnamedblk3.configure(this, name(), "ibex_demo_system.u_ram.u_ram.unnamedblk3", "unnamedblk3", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_demo_system__u_top__u_ibex_core__if_stage_i.configure(this, name(), "ibex_demo_system.u_top.u_ibex_core.if_stage_i", "if_stage_i", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ibex_demo_system.exportInsert(__Vfinal, "mhpmcounter_get", (void*)(&Vibex_demo_system::__Vdpiexp_ibex_demo_system__DOT__mhpmcounter_get_TOP));
        __Vscope_ibex_demo_system__u_ram__u_ram.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vibex_demo_system::__Vdpiexp_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__simutil_get_mem_TOP));
        __Vscope_ibex_demo_system__u_ram__u_ram.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vibex_demo_system::__Vdpiexp_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__simutil_memload_TOP));
        __Vscope_ibex_demo_system__u_ram__u_ram.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vibex_demo_system::__Vdpiexp_ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__simutil_set_mem_TOP));
        __Vscope_ibex_demo_system__u_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vibex_demo_system::__Vdpiexp_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP));
        __Vscope_ibex_demo_system__u_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vibex_demo_system::__Vdpiexp_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP));
    }
}
