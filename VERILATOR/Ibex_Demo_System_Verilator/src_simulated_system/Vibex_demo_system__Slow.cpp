// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_demo_system.h for the primary calling header

#include "Vibex_demo_system.h"
#include "Vibex_demo_system__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*0:0*/ Vibex_demo_system::__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
CData/*0:0*/ Vibex_demo_system::__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
CData/*0:0*/ Vibex_demo_system::__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
CData/*0:0*/ Vibex_demo_system::__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
CData/*0:0*/ Vibex_demo_system::__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
CData/*0:0*/ Vibex_demo_system::__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
CData/*0:0*/ Vibex_demo_system::__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1[128];
CData/*0:0*/ Vibex_demo_system::__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2[128];
CData/*0:0*/ Vibex_demo_system::__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3[128];
CData/*0:0*/ Vibex_demo_system::__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[128];
CData/*0:0*/ Vibex_demo_system::__Vtable3_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[128];
CData/*0:0*/ Vibex_demo_system::__Vtable4_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[512];
CData/*0:0*/ Vibex_demo_system::__Vtable5_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[128];
CData/*3:0*/ Vibex_demo_system::__Vtable6_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be[32];
QData/*63:0*/ Vibex_demo_system::__Vtable7_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata[32];
CData/*0:0*/ Vibex_demo_system::__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select[32];
CData/*0:0*/ Vibex_demo_system::__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select[32];
CData/*0:0*/ Vibex_demo_system::__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[32];
CData/*0:0*/ Vibex_demo_system::__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[32];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n[16];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr[16];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr[16];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr[16];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[16];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[16];
CData/*0:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[16];
CData/*3:0*/ Vibex_demo_system::__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[16];

VL_CTOR_IMP(Vibex_demo_system) {
    Vibex_demo_system__Syms* __restrict vlSymsp = __VlSymsp = new Vibex_demo_system__Syms(this, name());
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vibex_demo_system::__Vconfigure(Vibex_demo_system__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vibex_demo_system::~Vibex_demo_system() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vibex_demo_system::_final_TOP(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_final_TOP\n"); );
    // Variables
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_FCLOSE_I(vlTOPp->ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd); vlTOPp->ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd = 0;
}

void Vibex_demo_system::_initial__TOP__1(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_initial__TOP__1\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    // Body
    __Vtemp1[0U] = 0x3d253062U;
    __Vtemp1[1U] = 0x61746873U;
    __Vtemp1[2U] = 0x656d5f70U;
    __Vtemp1[3U] = 0x6f775f6dU;
    __Vtemp1[4U] = 0x7368U;
    (void)VL_VALUEPLUSARGS_INI(1,VL_CVT_PACK_STR_NW(5, __Vtemp1),
                               vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__unnamedblk3__DOT__show_mem_paths);if (VL_UNLIKELY(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__unnamedblk3__DOT__show_mem_paths)) {
        VL_WRITEF("%Nibex_demo_system.u_ram.u_ram.unnamedblk3\n",
                  vlSymsp->name());
    }
    vlTOPp->ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish = 0U;
    vlTOPp->ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd = VL_FOPEN_NN(
                                                                               std::string("ibex_demo_system.log")
                                                                               , 
                                                                               std::string("w"));
}

void Vibex_demo_system::_settle__TOP__2(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_settle__TOP__2\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vtableidx8;
    CData/*3:0*/ __Vtableidx9;
    // Body
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mhpmcounter_next);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = (0xfdU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = (0xfbU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = (0xc7U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = (0xfeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffffbU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffff7U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffefU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffdfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffffbfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffff7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffeffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffdffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffffbffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffefffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffdfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffffbfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffff7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffeffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffdffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfffbffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfff7ffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffefffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffdfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xffbfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xff7fffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfeffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfdffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xfbffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xf7ffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xefffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xdfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0xbfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (0x7fffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned = 0ULL;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
        = (0x212380ULL | (0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
        = (0xffffff00U & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask);
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
        = (0xffff00ffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask);
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
        = (0xff00ffffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask);
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
        = (0xffffffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask);
    __Vtableidx8 = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select 
        = vlTOPp->__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select
        [__Vtableidx8];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select 
        = vlTOPp->__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select
        [__Vtableidx8];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select 
        = vlTOPp->__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select
        [__Vtableidx8];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select 
        = vlTOPp->__Vtable8_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select
        [__Vtableidx8];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[3U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3U] 
        = (1U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [3U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4U] 
        = (2U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [4U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5U] 
        = (4U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [5U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6U] 
        = (8U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [6U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x10U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [7U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x20U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [8U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x40U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [9U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xaU] 
        = (0x80U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xaU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xbU] 
        = (0x100U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xbU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xcU] 
        = (0x200U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xcU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] 
        = (0x400U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xdU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] 
        = (0x800U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xeU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] 
        = (0x1000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0xfU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] 
        = (0x2000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x10U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] 
        = (0x4000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x11U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] 
        = (0x8000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x12U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] 
        = (0x10000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x13U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] 
        = (0x20000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x14U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] 
        = (0x40000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x15U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] 
        = (0x80000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x16U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] 
        = (0x100000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x17U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] 
        = (0x200000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x18U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] 
        = (0x400000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x19U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] 
        = (0x800000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1aU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] 
        = (0x1000000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1bU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] 
        = (0x2000000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1cU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] 
        = (0x4000000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1dU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] 
        = (0x8000000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1eU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] 
        = (0x10000000U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
           [0x1fU]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xdU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xeU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xfU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x10U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x11U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x12U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x13U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x14U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x15U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x16U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x17U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x18U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x19U] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1aU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1bU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1cU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1dU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1eU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0x1fU] = 0ULL;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = (0xffffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter);
    vlTOPp->ibex_demo_system__DOT__device_rdata[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_rdata[6U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = 0U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[0U] = 0x100000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[0U] = 0xffff0000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[1U] = 0x80000000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[1U] = 0xfffff000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[2U] = 0x80003000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[2U] = 0xfffff000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[3U] = 0x80001000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[3U] = 0xfffff000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[4U] = 0x80002000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[4U] = 0xfffff000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[5U] = 0x80004000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[5U] = 0xfffffc00U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[6U] = 0x20000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[6U] = 0xfffffc00U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[7U] = 0x1a110000U;
    vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[7U] = 0xffff0000U;
    vlTOPp->ibex_demo_system__DOT__device_err[7U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_err[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_err[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_err[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_err[3U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_err[5U] = 0U;
    vlTOPp->ibex_demo_system__DOT__device_err[6U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__en_latch) 
           & (IData)(vlTOPp->clk_sys_i));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp 
        = (0x3fffffffcULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_d 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_d 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
        = ((0x3ffffffffULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req) 
           | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
              << 0x22U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
        = ((0x1ff00000000ULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
        = ((0x1fcffffffffULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req) 
           | ((QData)((IData)(((3U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))
                                ? 2U : 1U))) << 0x20U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid = 1U;
            }
        }
    }
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__grayval 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__grayval) 
                 >> 1U));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp 
        = ((5U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp) 
                  >> 1U) ^ (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__grayval)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp 
        = ((6U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp_sub 
        = (7U & (((IData)(4U) - (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp)) 
                 - (IData)(1U)));
    if ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__grayval))) {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp_sub;
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__Vfuncout 
            = (4U | (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__Vfuncout));
    } else {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__dec_tmp;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_combi 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__40__Vfuncout;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q) 
           == (4U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__grayval 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__grayval) 
                 >> 1U));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp 
        = ((5U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp) 
                  >> 1U) ^ (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__grayval)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp 
        = ((6U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp_sub 
        = (7U & (((IData)(4U) - (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp)) 
                 - (IData)(1U)));
    if ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__grayval))) {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp_sub;
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__Vfuncout 
            = (4U | (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__Vfuncout));
    } else {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__dec_tmp;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__45__Vfuncout;
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                        >> 7U)) << 7U));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                        >> 7U)) << 7U));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                        >> 7U)) << 7U));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                        >> 7U)) << 7U));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                        >> 7U)) << 7U));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt 
        = (0x80U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                        >> 7U)) << 7U));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count_at_limit 
        = (1U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt 
        = (2U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                     >> 1U)) << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt 
        = (2U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                     >> 1U)) << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_d 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q)))) {
            if ((7U != (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q))) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q)));
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d = 0U;
        }
    }
    vlTOPp->uart_tx_o = 0U;
    vlTOPp->uart_tx_o = (1U & ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))
                                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q) 
                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q))
                                : (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q)))) {
            if ((7U != (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q))) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d 
                    = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q)));
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d = 0U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x10U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x10U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x11U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x11U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x12U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x12U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x13U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x13U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x14U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x14U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x15U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x15U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x16U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x16U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_d 
        = (1U & ((0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                     >> 0x17U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_d 
        = ((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                    >> 0x17U)) == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
            | (0x1f4U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q))));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__grayval 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__grayval) 
                 >> 1U));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp 
        = ((5U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp) 
                  >> 1U) ^ (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__grayval)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp 
        = ((6U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT____Vlvbound1));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp_sub 
        = (7U & (((IData)(4U) - (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp)) 
                 - (IData)(1U)));
    if ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__grayval))) {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp_sub;
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__Vfuncout 
            = (4U | (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__Vfuncout));
    } else {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__dec_tmp;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_combi 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__gray2dec__44__Vfuncout;
    vlTOPp->pwm_o = ((0xffeU & (IData)(vlTOPp->pwm_o)) 
                     | (IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o));
    vlTOPp->pwm_o = ((0xffdU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o) 
                        << 1U));
    vlTOPp->pwm_o = ((0xffbU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o) 
                        << 2U));
    vlTOPp->pwm_o = ((0xff7U & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o) 
                        << 3U));
    vlTOPp->pwm_o = ((0xfefU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o) 
                        << 4U));
    vlTOPp->pwm_o = ((0xfdfU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o) 
                        << 5U));
    vlTOPp->pwm_o = ((0xfbfU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o) 
                        << 6U));
    vlTOPp->pwm_o = ((0xf7fU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o) 
                        << 7U));
    vlTOPp->pwm_o = ((0xeffU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o) 
                        << 8U));
    vlTOPp->pwm_o = ((0xdffU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o) 
                        << 9U));
    vlTOPp->pwm_o = ((0xbffU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o) 
                        << 0xaU));
    vlTOPp->pwm_o = ((0x7ffU & (IData)(vlTOPp->pwm_o)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o) 
                        << 0xbU));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror = 0U;
    if (((3U < (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror = 3U;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror_valid = 0U;
    if (((3U < (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror_valid = 1U;
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_next_byte = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_valid = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_q))) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_valid = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 0U;
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy 
        = (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U) | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U] = 0x517U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U] = 0xc55513U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U] = 0xc51513U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x13U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x13U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x13U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x13U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U] = 0x7b302573U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x100073U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU] = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU] = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU] = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU] = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU] = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU] = 0U;
    if ((0U == (0xffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                         >> 0x18U)))) {
        if ((((3U > (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                           >> 0x14U))) & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0x11U)) 
             & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                >> 0x10U))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
            if ((0U != (3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0xeU)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            } else {
                if ((((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                       >> 0xcU) & (~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 5U))) & (0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                    vlTOPp->__Vfunc_load__16__size 
                        = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                 >> 0x14U));
                    vlTOPp->__Vfunc_load__16__Vfuncout 
                        = (0x38050403U | ((IData)(vlTOPp->__Vfunc_load__16__size) 
                                          << 0xcU));
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                        = vlTOPp->__Vfunc_load__16__Vfuncout;
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                } else {
                    if ((0x1000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                        vlTOPp->__Vfunc_load__20__dest 
                            = (0x1fU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                        vlTOPp->__Vfunc_load__20__size 
                            = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_load__20__Vfuncout 
                            = (0x38050003U | (((IData)(vlTOPp->__Vfunc_load__20__size) 
                                               << 0xcU) 
                                              | ((IData)(vlTOPp->__Vfunc_load__20__dest) 
                                                 << 7U)));
                        vlTOPp->__Vfunc_float_load__19__dest 
                            = (0x1fU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                        vlTOPp->__Vfunc_float_load__19__size 
                            = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_float_load__19__Vfuncout 
                            = (0x38050007U | (((IData)(vlTOPp->__Vfunc_float_load__19__size) 
                                               << 0xcU) 
                                              | ((IData)(vlTOPp->__Vfunc_float_load__19__dest) 
                                                 << 7U)));
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                            = ((0x20U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)
                                ? vlTOPp->__Vfunc_float_load__19__Vfuncout
                                : vlTOPp->__Vfunc_load__20__Vfuncout);
                    } else {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                        vlTOPp->__Vfunc_load__22__size 
                            = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_load__22__Vfuncout 
                            = (0x38050403U | ((IData)(vlTOPp->__Vfunc_load__22__size) 
                                              << 0xcU));
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                            = vlTOPp->__Vfunc_load__22__Vfuncout;
                        vlTOPp->__Vfunc_csrw__23__csr 
                            = (0xfffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                        vlTOPp->__Vfunc_csrw__23__Vfuncout 
                            = (0x41073U | ((IData)(vlTOPp->__Vfunc_csrw__23__csr) 
                                           << 0x14U));
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                            = vlTOPp->__Vfunc_csrw__23__Vfuncout;
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                    }
                }
            }
        } else {
            if ((((3U > (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                               >> 0x14U))) & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x11U)) 
                 & (~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                       >> 0x10U)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
                if ((0U != (3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                  >> 0xeU)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                } else {
                    if ((((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                           >> 0xcU) & (~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                          >> 5U))) 
                         & (0xaU == (0x1fU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                        vlTOPp->__Vfunc_store__29__size 
                            = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                     >> 0x14U));
                        vlTOPp->__Vfunc_store__29__Vfuncout 
                            = (0x38850023U | ((IData)(vlTOPp->__Vfunc_store__29__size) 
                                              << 0xcU));
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                            = vlTOPp->__Vfunc_store__29__Vfuncout;
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                    } else {
                        if ((0x1000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                            vlTOPp->__Vfunc_store__32__src 
                                = (0x1fU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                            vlTOPp->__Vfunc_store__32__size 
                                = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_store__32__Vfuncout 
                                = (0x38050023U | (((IData)(vlTOPp->__Vfunc_store__32__src) 
                                                   << 0x14U) 
                                                  | ((IData)(vlTOPp->__Vfunc_store__32__size) 
                                                     << 0xcU)));
                            vlTOPp->__Vfunc_float_store__31__src 
                                = (0x1fU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                            vlTOPp->__Vfunc_float_store__31__size 
                                = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_float_store__31__Vfuncout 
                                = (0x38050027U | (((IData)(vlTOPp->__Vfunc_float_store__31__src) 
                                                   << 0x14U) 
                                                  | ((IData)(vlTOPp->__Vfunc_float_store__31__size) 
                                                     << 0xcU)));
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                                = ((0x20U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)
                                    ? vlTOPp->__Vfunc_float_store__31__Vfuncout
                                    : vlTOPp->__Vfunc_store__32__Vfuncout);
                        } else {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                            vlTOPp->__Vfunc_csrr__34__csr 
                                = (0xfffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q);
                            vlTOPp->__Vfunc_csrr__34__Vfuncout 
                                = (0x2473U | ((IData)(vlTOPp->__Vfunc_csrr__34__csr) 
                                              << 0x14U));
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                                = vlTOPp->__Vfunc_csrr__34__Vfuncout;
                            vlTOPp->__Vfunc_store__35__size 
                                = (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_store__35__Vfuncout 
                                = (0x38850023U | ((IData)(vlTOPp->__Vfunc_store__35__size) 
                                                  << 0xcU));
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                                = vlTOPp->__Vfunc_store__35__Vfuncout;
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                        }
                    }
                }
            } else {
                if ((1U & ((3U <= (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U))) 
                           | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                              >> 0x13U)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                }
            }
        }
        if ((1U & ((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                    >> 0x12U) & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x13U;
        }
    } else {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage
        [(3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q))];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (2U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__grayval 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1 
        = (1U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__grayval) 
                 >> 1U));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp 
        = ((5U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1 
        = (1U & (((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp) 
                  >> 1U) ^ (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__grayval)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp 
        = ((6U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT____Vlvbound1));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp_sub 
        = (7U & (((IData)(4U) - (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp)) 
                 - (IData)(1U)));
    if ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__grayval))) {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp_sub;
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__Vfuncout 
            = (4U | (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__Vfuncout));
    } else {
        vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__Vfuncout 
            = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__dec_tmp;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__gray2dec__41__Vfuncout;
    vlTOPp->ibex_demo_system__DOT__device_rdata[0U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o;
    vlTOPp->ibex_demo_system__DOT__device_rdata[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rdata_q;
    vlTOPp->ibex_demo_system__DOT__device_rdata[4U] 
        = vlTOPp->ibex_demo_system__DOT__u_timer__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
        = ((0xffc00U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        << 4U)) | (0x3ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x10U)));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xfeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xfdU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xfbU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xf7U & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q) 
              << 3U));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xefU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q) 
              << 4U));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xdfU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q) 
              << 5U));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0xbfU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q) 
              << 6U));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc 
        = ((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q) 
              << 7U));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlTOPp->ibex_demo_system__DOT__host_wdata[1U] = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q);
    vlTOPp->__Vtableidx7 = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata 
        = vlTOPp->__Vtable7_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata
        [vlTOPp->__Vtableidx7];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                  >> 0x13U)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask 
            = ((0x40000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                ? 0xfU : ((0x20000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                           ? ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                              | ((IData)(3U) << (2U 
                                                 & ((IData)(
                                                            (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                             >> 1U)) 
                                                    << 1U))))
                           : ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                              | ((IData)(1U) << (3U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))))));
    }
    vlTOPp->ibex_demo_system__DOT__host_addr[1U] = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 1U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 1U;
            }
        }
    }
    if (((3U < (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__device_err[4U] = vlTOPp->ibex_demo_system__DOT__u_timer__DOT__error_q;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[0U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[1U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[2U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[5U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[6U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[4U] 
        = vlTOPp->ibex_demo_system__DOT__u_timer__DOT__rvalid_q;
    vlTOPp->ibex_demo_system__DOT__device_rvalid[7U] 
        = vlTOPp->ibex_demo_system__DOT__dbg_slave_rvalid;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (4U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d 
        = ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d)) 
           | (3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                    >> 2U)));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg 
        = ((1U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_start 
        = (((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_q) 
                >> 1U)) & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_q) 
                           >> 2U)) & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter) 
           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[2U] = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlTOPp->ibex_demo_system__DOT__rst_core_n = ((IData)(vlTOPp->rst_sys_ni) 
                                                 & (~ 
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                     >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_d 
        = ((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
            ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_d 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q)));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q)))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d 
                = ((0x80U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_q) 
                             << 5U)) | (0x7fU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q) 
                                                 >> 1U)));
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d = 0U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = (3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q) 
           == (4U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = 1U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = 0U;
        } else {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int 
                = (1U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U)) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)) 
           | (2U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                    << 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
                = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_sub 
        = (7U & (((IData)(4U) - (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval))) 
                 - (IData)(1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_in 
        = ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval))
            ? (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_sub)
            : (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_in 
        = (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_in));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__Vfuncout 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_in;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__Vfuncout 
        = (7U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__Vfuncout) 
                 ^ ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval_in) 
                    >> 1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__Vfuncout 
        = ((3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__Vfuncout)) 
           | (4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__decval)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_d 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__42__Vfuncout;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_sub 
        = (7U & (((IData)(4U) - (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval))) 
                 - (IData)(1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_in 
        = ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval))
            ? (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_sub)
            : (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_in 
        = (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_in));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__Vfuncout 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_in;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__Vfuncout 
        = (7U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__Vfuncout) 
                 ^ ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval_in) 
                    >> 1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__Vfuncout 
        = ((3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__Vfuncout)) 
           | (4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__decval)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_d 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__47__Vfuncout;
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos 
        = ((1U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((6U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                    >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((5U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)) 
           | (2U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                    >> 1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_sub 
        = (7U & (((IData)(4U) - (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval))) 
                 - (IData)(1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_in 
        = ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval))
            ? (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_sub)
            : (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_in 
        = (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_in));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__Vfuncout 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_in;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__Vfuncout 
        = (7U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__Vfuncout) 
                 ^ ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval_in) 
                    >> 1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__Vfuncout 
        = ((3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__Vfuncout)) 
           | (4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__decval)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_d 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__g_full_gray_conversion__DOT__dec2gray__43__Vfuncout;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_sub 
        = (7U & (((IData)(4U) - (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval))) 
                 - (IData)(1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_in 
        = ((4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval))
            ? (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_sub)
            : (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_in 
        = (3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_in));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__Vfuncout 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_in;
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__Vfuncout 
        = (7U & ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__Vfuncout) 
                 ^ ((IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval_in) 
                    >> 1U)));
    vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__Vfuncout 
        = ((3U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__Vfuncout)) 
           | (4U & (IData)(vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__decval)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_d 
        = vlTOPp->__Vfunc_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__g_full_gray_conversion__DOT__dec2gray__46__Vfuncout;
    __Vtableidx9 = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
        = vlTOPp->__Vtable9_ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d
        [__Vtableidx9];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((6U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((5U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (2U & (((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         >> 1U)) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                    << 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = ((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
           | (4U & (((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         >> 2U)) << 2U) & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           << 1U))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
                } else {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id 
                            = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                    }
                }
            }
        }
    }
    vlTOPp->spi_sck_o = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)) 
                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
    vlTOPp->spi_tx_o = 1U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        vlTOPp->spi_tx_o = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q) 
                                  | ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                                     >> 7U)));
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            vlTOPp->spi_tx_o = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__byte_data_o = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__byte_data_o 
                = vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d 
        = vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            if ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
                vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d 
                    = (7U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q) 
                             - (IData)(1U)));
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d = 7U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[3U] 
        = (IData)((((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)) 
                    << 0x20U) | (QData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                 << 1U)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[4U] 
        = (IData)(((((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)) 
                     << 0x20U) | (QData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  << 1U)))) 
                   >> 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__core_instr_rvalid) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((0xeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | (0xffU == (0xffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((0xdU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                          >> 8U)))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((0xbU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                          >> 0x10U)))) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((7U & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                          >> 0x18U)))) 
              << 3U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((0xeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | (0xffU == (0xffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((0xdU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                          >> 8U)))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((0xbU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                          >> 0x10U)))) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask 
        = ((7U & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask 
                                          >> 0x18U)))) 
              << 3U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[3U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[4U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[5U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[6U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[7U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [7U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[3U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[4U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[5U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[6U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[7U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
        [7U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[3U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[4U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[5U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[6U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[7U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [7U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[3U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[4U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[5U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[6U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[7U] 
        = vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
        [7U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
           == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
             & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_valid)) 
            & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full)) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp 
        = ((3ULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp) 
           | ((QData)((IData)(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                ? 0U : (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                >> 
                                                (0x20U 
                                                 & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 5U))))))) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid 
        = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q)))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
                = (0x7fU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q) 
                            >> 1U));
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d 
                = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                    ? 0U : (0xffU & (((0U == (0x18U 
                                              & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 << 3U)))
                                       ? 0U : (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                               ((IData)(1U) 
                                                + (0x1fU 
                                                   & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      >> 2U)))] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U))))) 
                                     | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                        (0x1fU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                  >> 2U))] 
                                        >> (0x18U & 
                                            ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             << 3U))))));
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid 
        = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid 
        = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
        = vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q)))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
                = (0xfeU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q) 
                            << 1U));
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d 
                = ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                    ? 0U : ((0x3f7U >= (0x3f8U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                  << 3U)))
                             ? (0xffU & (((0U == (0x18U 
                                                  & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 3U)))
                                           ? 0U : (
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                         | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                            (0x1fU 
                                             & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                >> 2U))] 
                                            >> (0x18U 
                                                & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   << 3U)))))
                             : 0U));
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready 
        = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
           == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
        = (0x7fffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                      >> 5U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted;
    if ((1U > (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
            = (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
               >> (0x1fU & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0) 
                            << 5U)));
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
        = (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq = 0U;
    if ((0U >= (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1 
            = (1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1fU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                   | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound1) 
                      << (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)));
        }
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2 
            = (1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                     >> 0x1eU));
        if (VL_LIKELY((0U >= (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq 
                = (((~ ((IData)(1U) << (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                    & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq)) 
                   | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT____Vlvbound2) 
                      << (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)));
        }
    }
    vlTOPp->ibex_demo_system__DOT__device_rdata[1U] 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
            ? (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)
            : ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                ? (0xffU & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                            >> 0x10U)) : (IData)(vlTOPp->gp_o)));
    vlTOPp->ibex_demo_system__DOT__device_rdata[5U] 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__read_status_q)
            ? (((0U == ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                         ? 0x7fU : (0x7fU & (((1U & 
                                               ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                >> 7U)) 
                                              == (1U 
                                                  & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 7U)))
                                              ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                              : (((IData)(0x7fU) 
                                                  - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                 + (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                << 1U) | (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full))
            : 0U);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q)
            ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata
            : vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q);
    vlTOPp->ibex_demo_system__DOT__host_we[1U] = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be 
                    = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be 
                    = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid 
        = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlTOPp->ibex_demo_system__DOT__host_req[1U] = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req;
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[2U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[3U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[4U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[5U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[6U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[7U] 
        = vlTOPp->ibex_demo_system__DOT__device_err
        [7U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[2U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[3U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[4U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[5U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[6U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[7U] 
        = vlTOPp->ibex_demo_system__DOT__device_rvalid
        [7U];
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_d 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 0U;
        } else {
            if ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q))) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_d 
                = ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_q))
                    ? 0U : 2U);
        } else {
            if (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_start) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_d = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_d 
        = ((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
            ? 0U : ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_start)
                     ? 0xd9U : (0x1ffU & ((IData)(1U) 
                                          + (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mhpmcounter_next 
        = ((0xffffff0000000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mhpmcounter_next) 
           | (0xffffffffffULL & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0xaU] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
              & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                  << 1U) == vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                 [0U])));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
           | (0xfffffffeU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                             & (((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U) == vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                 [1U]) << 1U))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0xfU))];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0x14U))];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    if ((0U == (0xfffU 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                    } else {
                                        if ((1U == 
                                             (0xfffU 
                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                                        } else {
                                            if ((0x302U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                            } else {
                                                if (
                                                    (0x7b2U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                                                } else {
                                                    if (
                                                        (0x105U 
                                                         == 
                                                         (0xfffU 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                                    } else {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (((0U != (0x1fU 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0xfU))) 
                                         | (0U != (0x1fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 7U))))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xeU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                    }
                                    if ((1U == (3U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                                        } else {
                                            if ((3U 
                                                 == 
                                                 (3U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU)))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                                            } else {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        }
                                    }
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                }
                                if ((0U != (7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xeU)) 
                                             & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xdU)));
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                if ((5U == ((4U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x18U)) 
                                            | (3U & 
                                               (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU))))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                } else {
                                    if ((0x80000000U 
                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    } else {
                                        if ((0x40000000U 
                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                                = (1U 
                                                   & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x1dU) 
                                                      | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                          >> 0x1cU) 
                                                         | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1bU) 
                                                            | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                >> 0x1aU) 
                                                               | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                   >> 0x19U) 
                                                                  | ((0x4000U 
                                                                      & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (~ 
                                                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                          >> 0xcU)))
                                                                      : 
                                                                     ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                       >> 0xdU) 
                                                                      | (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                         >> 0xcU)))))))));
                                        } else {
                                            if ((0x20000000U 
                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            } else {
                                                if (
                                                    (0x10000000U 
                                                     & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                } else {
                                                    if (
                                                        (0x8000000U 
                                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                    } else {
                                                        if (
                                                            (0x4000000U 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                                        } else {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                }
                                if ((0U == (3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                        } else {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                    = (1U & ((0x4000U 
                                              & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                              ? ((~ 
                                                  (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x1aU) 
                                                       | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1fU) 
                                                          | ((0x40000000U 
                                                              & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                              ? 
                                                             ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x1dU) 
                                                              | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU) 
                                                                 | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x1bU) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                           >> 0x19U))))))
                                                              : 
                                                             ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                               >> 0x1dU) 
                                                              | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU) 
                                                                 | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x1bU) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                           >> 0x19U)))))))))))
                                              : ((~ 
                                                  (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xdU)) 
                                                 & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xcU) 
                                                    & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x1fU) 
                                                       | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 0x1eU) 
                                                          | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1dU) 
                                                             | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                 >> 0x1cU) 
                                                                | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                    >> 0x1bU) 
                                                                   | (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                          >> 0x19U))))))))))));
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                if ((0U == (7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval = 1U;
                                        }
                                    } else {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                    }
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                                    = (1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xeU)));
                                if ((0U == (3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                                } else {
                                    if ((1U == (3U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                                    } else {
                                        if ((2U == 
                                             (3U & 
                                              (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0xcU)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                                            if ((0x4000U 
                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                            }
                                        } else {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? 0x1cU
                                                : 0x1aU)
                                            : ((0x1000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? 0x1bU
                                                : 0x19U));
                                } else {
                                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xdU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? 0x1eU
                                                : 0x1dU);
                                    }
                                }
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x1aU)))) {
                                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1fU)))) {
                                        if ((0x40000000U 
                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x19U)))) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                             >> 0xdU)))) {
                                                                        if (
                                                                            (1U 
                                                                             & (~ 
                                                                                (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                                >> 0xcU)))) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1dU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1cU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1bU)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                 >> 0x1aU)))) {
                                                            if (
                                                                (0x2000000U 
                                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                if (
                                                                    (0x4000U 
                                                                     & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (
                                                                        (0x2000U 
                                                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    } else {
                                                                        if (
                                                                            (0x1000U 
                                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        } else {
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                                    = 
                                                                    ((0x4000U 
                                                                      & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                        ? 4U
                                                                        : 3U)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                        ? 9U
                                                                        : 2U))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                        ? 0x2cU
                                                                        : 0x2bU)
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                                        ? 0xaU
                                                                        : 0U)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xeU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    } else {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                            = ((0x1000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? 4U
                                                : 3U);
                                    } else {
                                        if ((0x1000U 
                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1bU)))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                                            } else {
                                                if (
                                                    (8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1bU)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                }
                                            }
                                        } else {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                                        }
                                    }
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                        = ((0x2000U 
                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x1000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? 0x2cU
                                                : 0x2bU)
                                            : ((0x1000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? 0xaU
                                                : 0U));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    if ((1U == (7U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0xcU)))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = (0xfU & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                       >> 1U));
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d 
            = (0xfU & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q) 
                       >> 1U));
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d = 5U;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d 
            = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d 
                        = (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                            >> 0x22U)));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = 1U;
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (0x7fffffffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                                  >> 1U));
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d = 1U;
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d 
                = (0x7fffffffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q 
                                  >> 1U));
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d = 0U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                = (0x1071U | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q) 
                              << 0xaU));
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                = (0x7fffffffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                  >> 1U));
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q;
    if (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
         & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
    }
    if (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) 
         & ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)) 
            | (2U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy = 1U;
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 3U;
    }
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr) 
          & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
             >> 0x10U)) & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | (0xfffffffcU & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                              << 2U) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((6U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((5U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (2U & ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                      << 1U) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = ((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed)) 
           | (4U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                        << 2U) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [3U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [2U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr
        [3U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 4U;
                }
            } else {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 0U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 2U;
                }
            } else {
                if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                    if ((1U == (3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 1U;
                    } else {
                        if ((2U == (3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)))) {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d = 3U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                        = (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                   [(3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))] 
                                   >> 2U));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q)))) {
                if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) 
                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr)) 
                     & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d 
                        = (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                   >> 2U));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid) 
            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk))) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_d 
        = vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_d 
                = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid)
                    ? 1U : 0U);
        } else {
            if ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q))) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 2U;
        } else {
            if (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_d = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid) 
            & ((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d 
        = vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 0U;
        } else {
            if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q))) {
                vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 3U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 2U;
        } else {
            if (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid) {
                vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid) 
            & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)))) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (1U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((0x7fU 
                                              & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))) 
                                             - (IData)(4U)))));
                }
            } else {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x18U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((0x17U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                                                = (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(0x10U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((0x10U 
                                                          | (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                                        >> 0x22U)))) 
                                                         - (IData)(0x10U))))) 
                                                   & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                      >> 
                                                      ((IData)(0x10U) 
                                                       + 
                                                       (0x1fU 
                                                        & ((0x10U 
                                                            | (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                                          >> 0x22U)))) 
                                                           - (IData)(0x10U))))));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if (((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                          >> 0x22U)))) 
                 & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                        = (1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                 >> (0xfU & ((0x7fU 
                                              & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))) 
                                             - (IData)(4U)))));
                }
            } else {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d = 1U;
                                    }
                                } else {
                                    if ((0x18U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d 
                                                = (
                                                   (0x1fU 
                                                    >= 
                                                    ((IData)(0x10U) 
                                                     + 
                                                     (0x1fU 
                                                      & ((0x10U 
                                                          | (0xfU 
                                                             & (IData)(
                                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                                        >> 0x22U)))) 
                                                         - (IData)(0x10U))))) 
                                                   & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                      >> 
                                                      ((IData)(0x10U) 
                                                       + 
                                                       (0x1fU 
                                                        & ((0x10U 
                                                            | (0xfU 
                                                               & (IData)(
                                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                                          >> 0x22U)))) 
                                                           - (IData)(0x10U))))));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))))))) {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                            = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
        = (0xffff0fffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d);
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))))))) {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d = 0U;
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xfffff000U 
                                                    & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int)));
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                = (
                                                   (0xffffU 
                                                    & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d) 
                                                   | (0xff0000U 
                                                      & ((IData)(
                                                                 (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                                  >> 0x10U)) 
                                                         << 0x10U)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U] 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U];
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))))))) {
                if ((0x10U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x11U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x12U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x16U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x17U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((0x18U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy)))) {
                                            VL_ASSIGNSEL_WIII(32,
                                                              (0xe0U 
                                                               & ((IData)(
                                                                          (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                                           >> 0x22U)) 
                                                                  << 5U)), vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d, (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (1U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if (((((((((0x40U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U)))))) {
                if ((0x40U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x13U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x34U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x35U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x38U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((0x39U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if ((0x3aU 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                            if ((1U 
                                                 & ((0U 
                                                     != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                    | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                       >> 0x16U)))) {
                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                    = 
                                                    (0x400000U 
                                                     | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x3dU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                }
            }
        }
    }
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = (0x400000U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                } else {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                        = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int);
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs;
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = ((0xffbfffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                           | (0x400000U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                           & ((~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x16U)) 
                                              << 0x16U))));
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                        = ((0xffff8fffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
                           | (0x7000U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         & ((~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                >> 0xcU)) 
                                            << 0xcU))));
                }
            } else {
                if ((0x39U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                               | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                  >> 0x16U)))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                            = (0x400000U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                    }
                } else {
                    if ((0x3aU == (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((1U & ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                   | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                      >> 0x16U)))) {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                = (0x400000U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                        }
                    } else {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((1U & ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                       | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                          >> 0x16U)))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                    = (0x400000U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                            }
                        } else {
                            if ((0x3dU == (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((1U & ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                           | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x16U)))) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                        = (0x400000U 
                                           | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror_valid) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
            = ((0xffff8fffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
               | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror) 
                  << 0xcU));
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x20000000U | (0x1fffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = ((0xffdfffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d) 
           | ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
              << 0x15U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x400U | (0xfffff01fU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0xffffffefU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0xfffffff7U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (4U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0xfffffffdU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0xfffffffeU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
        = (0x40000U | (0xfff1ffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = (((~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk)) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0x39U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid 
                            = (0U == (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xcU)));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (1U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x18U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x17U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if (((((((((0x40U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U)))))) {
                if ((0x40U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x13U != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x34U != (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((0x35U != (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((0x38U != (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if ((0x39U != (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if ((0x3aU 
                                             != (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((0U 
                                                      != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                     | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                        >> 0x16U))))) {
                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid 
                                                    = 
                                                    (0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                         >> 0xcU)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0x39U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x3aU != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid 
                                    = (0U == (7U & 
                                              (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0xcU)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
        = (0x3ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                     >> 0xaU));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
           | (0U != vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
    if ((1U > (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
            = (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
               >> (0x1fU & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1) 
                            << 5U)));
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            if ((1U & (~ ((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                          & (5U >= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))))))) {
                if ((0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                        = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int);
                    if ((0x10000000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
                            = ((~ ((IData)(1U) << (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                               & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
                    }
                }
            }
        }
    }
    if ((2U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned 
            = (1U | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned));
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfbffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xdfffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffff7U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xfffffffbU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xf7ffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xffffffcfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
        = (0xefffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    if ((1U & ((~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                   >> 0x1eU)) & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                 >> 0x1eU)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack = 1U;
    }
    if (((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
          >> 0x1eU) & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
            = (0xbfffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlTOPp->ibex_demo_system__DOT__dbg_slave_rdata 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
            ? (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux 
                       >> 0x20U)) : (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux));
    vlTOPp->ibex_demo_system__DOT__host_be[1U] = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__interrupt_q) 
            << 0x10U) | (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid));
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[0U] 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_resp)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[1U] 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_resp)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[1U] 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp]);
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                              >> 0x10U) : (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                                           >> 0x10U)));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc));
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc);
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
            = (0xffffU & ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                           ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                              >> 0x10U) : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                  >> 0x1fU) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U) & ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                             ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                                   >> 0x1fU)) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc 
                                                    >> 0x1fU)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
        = (1U & ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                  ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                     & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                         >> 1U) & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                   >> 0x1fU))) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                                                  & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                                      >> 1U) 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                        >> 0x1fU)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                  >> 0x1fU) & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                               >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->ibex_demo_system__DOT__host_we[0U] = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
          | (3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) 
         & (0U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xfU))))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
            ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? 0U : ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                         ? 0U : 3U)) : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                         ? 2U : 1U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
        } else {
            if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        } else {
            if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
            ? 1U : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec));
    vlTOPp->__Vtableidx5 = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = vlTOPp->__Vtable5_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left
        [vlTOPp->__Vtableidx5];
    vlTOPp->__Vtableidx3 = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = vlTOPp->__Vtable3_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed
        [vlTOPp->__Vtableidx3];
    vlTOPp->__Vtableidx2 = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = vlTOPp->__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1
        [vlTOPp->__Vtableidx2];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = vlTOPp->__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2
        [vlTOPp->__Vtableidx2];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = vlTOPp->__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3
        [vlTOPp->__Vtableidx2];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlTOPp->__Vtable2_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate
        [vlTOPp->__Vtableidx2];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
            ? 6U : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
            if (((0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                    = (((QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                        << 0x22U) | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                     << 2U));
            } else {
                if (((3U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q)) 
                     | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                        = (3ULL | (((QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q)) 
                                    << 0x22U) | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q)) 
                                                 << 2U)));
                }
            }
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr) {
        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d 
                = (0xffffffffffULL & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                      >> 1U));
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7eU == (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
        = (0x1fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                    >> 0xfU));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
           | (0U != vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
    if ((1U > (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
            = (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
               >> (0x1fU & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2) 
                            << 5U)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
    vlTOPp->ibex_demo_system__DOT__core_instr_rdata 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__core_instr_sel_dbg)
            ? vlTOPp->ibex_demo_system__DOT__dbg_slave_rdata
            : vlTOPp->ibex_demo_system__DOT__mem_instr_rdata);
    vlTOPp->ibex_demo_system__DOT__device_rdata[7U] 
        = vlTOPp->ibex_demo_system__DOT__dbg_slave_rdata;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
        = (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
           & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlTOPp->ibex_demo_system__DOT__host_err[0U] = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_err_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__host_err[1U] = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_err_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__host_rvalid[0U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__host_rvalid[1U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
                  [0U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
                  [1U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_we[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_we[1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
                } else {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
                    } else {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 3U;
                        } else {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 4U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 1U;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = (((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
            | (2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))) 
           | (3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                             << 5U) | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                        << 4U) | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                                   << 3U) 
                                                  | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                                      << 2U) 
                                                     | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                                         << 1U) 
                                                        | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = vlTOPp->__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = vlTOPp->__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = vlTOPp->__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = vlTOPp->__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = vlTOPp->__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = vlTOPp->__Vtable1_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio
        [vlTOPp->__Vtableidx1];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
            } else {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid 
        = (1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)) 
                 | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : ((0xfff00000U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1fU)))) 
                                               << 0x14U)) 
                                           | ((0xff000U 
                                               & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                              | ((0x800U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 0x14U)))))))
            : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                    : ((0xffffe000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xdU)) | 
                       ((0x1000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x13U)) | ((0x800U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                           >> 7U)))))))
                : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0xfe0U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 7U))))
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U))))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
           | (0U != vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = vlTOPp->ibex_demo_system__DOT__core_instr_rdata;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlTOPp->ibex_demo_system__DOT__core_instr_rdata);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlTOPp->ibex_demo_system__DOT__core_instr_rdata);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlTOPp->ibex_demo_system__DOT__core_instr_rdata);
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[2U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [2U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[3U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [3U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[4U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [4U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[5U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [5U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[6U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [6U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[7U] 
        = vlTOPp->ibex_demo_system__DOT__device_rdata
        [7U];
    if ((1U & (~ (IData)(vlTOPp->clk_sys_i)))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__en_latch 
            = (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                      | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                     | (0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = 1U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ ((((0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs) 
                                    | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xeU;
    }
    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xdU;
    }
    if ((0x1000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xcU;
    }
    if ((0x800U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xbU;
    }
    if ((0x400U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xaU;
    }
    if ((0x200U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x100U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x80U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x40U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x20U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x10U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
             & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                   >> 2U))) & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))) 
           & ((0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs) 
              & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                  >> 5U) | (0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
            | vlTOPp->ibex_demo_system__DOT__host_err
            [0U]) | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs 
        = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [1U]) {
                    if ((0x10000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs 
                            = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                               + ((IData)(1U) << (7U 
                                                  & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U))));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [1U]) {
                    if ((0x10000U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs 
                            = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q) 
                               + ((IData)(1U) << (7U 
                                                  & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                     >> 0x11U))));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & vlTOPp->ibex_demo_system__DOT__host_rvalid
           [0U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = (((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)) 
           & vlTOPp->ibex_demo_system__DOT__host_rvalid
           [0U]);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = ((vlTOPp->ibex_demo_system__DOT__host_rvalid
            [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                        [2U];
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                        [2U];
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                        [2U];
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = vlTOPp->ibex_demo_system__DOT__host_err
                        [0U];
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = (vlTOPp->ibex_demo_system__DOT__host_err
                           [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
        [0U];
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U))))));
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
        } else {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                    ? (QData)((IData)((0xffffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U] 
                                                          >> 0x10U)))))
                    : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                   [0U]);
        }
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
            = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U] 
                                                      >> 0x10U)))))
                : 0ULL);
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))) 
                   << 1U));
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))) 
                                                  << 1U)))
                : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))) 
                                                  << 1U))));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id)
                                    : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id);
                        } else {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                    = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                        ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                        : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id);
                            } else {
                                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                                = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                        } else {
                                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval 
                                                    = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 1U;
                    }
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__host_req[0U] = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out) 
                                                   & (~ 
                                                      vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                                      [2U]));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw 
                                = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1fU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (2U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1dU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffffbU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (4U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x1bU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffff7U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (8U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                    >> 0x19U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffefU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x17U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffdfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x15U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffffbfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x13U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffff7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                       >> 0x11U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffeffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xfU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffdffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xdU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffffbffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 0xbU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                        >> 9U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffefffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 7U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffdfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 5U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffffbfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 3U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffff7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                         >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffeffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffdffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 3U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfffbffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 5U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfff7ffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                          << 7U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffefffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x100000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 9U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffdfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x200000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xbU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xffbfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x400000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xdU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xff7fffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x800000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                           << 0xfU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfeffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x1000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x11U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfdffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x2000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x13U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xfbffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x4000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x15U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xf7ffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x8000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            << 0x17U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xefffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x10000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x19U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xdfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x20000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1bU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0xbfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x40000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1dU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((0x7fffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev) 
           | (0x80000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             << 0x1fU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (2U | (0xfffffff0U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0x80U | vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffffdfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfff7ffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x80000U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                           >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x13U)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffbffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x40000U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q) 
                           >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x12U)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffdffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x20000U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x11U)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffeffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x10000U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                           >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                          << 0x10U)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffdfffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = (0xffffefffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus);
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffff7fffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0U < vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel) 
              << 0xfU));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xffffbfffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | ((0U < vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel) 
              << 0xeU));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffdffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x200U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 9U)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffeffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x100U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                         >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart)) 
                        << 8U)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x800U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xbU)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
        = ((0xfffffbffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus) 
           | (0x400U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                            >> (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                        << 0xaU)));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs = 0U;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (2U | (0xfffffff0U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = (0x8000000U | (0xe0ffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xffffefffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) 
              << 0xcU));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
        = ((0xfffff8ffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q) 
              << 8U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data = 0U;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (1U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((((((((((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                   | (0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x11U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x12U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U))))) 
                | (0x16U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))) 
               | (0x18U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U))))) 
              | (0x17U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) 
             | ((0x20U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U)))) 
                & (0x27U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                              >> 0x22U))))))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                = (((4U <= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                             >> 0x22U)))) 
                    & (5U >= (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U)))))
                    ? (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                               >> (0x20U & ((IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)) 
                                            << 5U))))
                    : ((0x10U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U))))
                        ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q
                        : ((0x11U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))
                            ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus
                            : ((0x12U == (0x7fU & (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                           >> 0x22U))))
                                ? (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                           >> (0x3fU 
                                               & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart) 
                                                  << 5U))))
                                : ((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))
                                    ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs
                                    : ((0x18U == (0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                             >> 0x22U))))
                                        ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q
                                        : ((0x17U == 
                                            (0x7fU 
                                             & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))
                                            ? 0U : 
                                           vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                           (7U & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U)))])))))));
        } else {
            if (((((((((0x40U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U)))) 
                       | (0x13U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | (0x34U == (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) 
                     | (0x35U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                   >> 0x22U))))) 
                    | (0x38U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                  >> 0x22U))))) 
                   | (0x39U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                 >> 0x22U))))) 
                  | (0x3aU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) 
                 | (0x3cU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                               >> 0x22U)))))) {
                if ((0x40U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0;
                } else {
                    if ((0x13U == (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                            = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1;
                    } else {
                        if ((0x34U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2;
                        } else {
                            if ((0x35U == (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                    = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3;
                            } else {
                                if ((0x38U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q;
                                } else {
                                    if ((0x39U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                            = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q);
                                    } else {
                                        if ((0x3aU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                                = (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                           >> 0x20U));
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((0U 
                                                      != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                                     | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                        >> 0x16U))))) {
                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                                                    = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x3dU == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data 
                            = (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                                       >> 0x20U));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
        = ((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                ? ((0xffff0000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U)))
                : ((0xffff0000U & (vlTOPp->ibex_demo_system__DOT__core_instr_rdata 
                                   << 0x10U)) | (0xffffU 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                    >> 0x10U))))
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                         >> 0x10U))) & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)));
    if (vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_resp) {
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[0U] = 0U;
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[1U] 
            = vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i
            [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp];
    } else {
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[0U] 
            = vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i
            [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp];
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[1U] = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs))
                                ? (0x30U | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
                                : ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 1U;
                        } else {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 2U;
                            } else {
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause 
                                        = ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                            ? 0xbU : 8U);
                                } else {
                                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 3U;
                                        }
                                    } else {
                                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 7U;
                                        } else {
                                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause = 5U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                 & vlTOPp->ibex_demo_system__DOT__host_rvalid
                 [0U]) & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
        = (QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs));
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0x39U == (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                  | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                     >> 0x16U))))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                            = ((0xffffffff00000000ULL 
                                & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int)));
                    }
                } else {
                    if ((0x3aU == (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                      | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                         >> 0x16U))))) {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d 
                                = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d) 
                                   | ((QData)((IData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int))) 
                                      << 0x20U));
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & vlTOPp->ibex_demo_system__DOT__host_err
               [0U]) | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q))) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
            ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
        [0U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (0x3ffffffffULL & ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                              ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))
                                  : ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35,35,35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))))
                              : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                  ? ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35,35,35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))
                                  : ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35,35,35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))));
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_req[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_req[1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
            ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we)
            : 0U);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
               | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
            : (((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
                : (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt)) 
           | (0x1fU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                        ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b
                        : (- vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access)
            ? (0xfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)
            : 0U);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                   ? (1ULL | ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                              << 2U))
                                   : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                       ? (1ULL | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 3U))
                                       : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                           ? (1ULL 
                                              | ((QData)((IData)(
                                                                 (0x1fffffffU 
                                                                  & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                 << 4U))
                                           : (1ULL 
                                              | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))))) 
                             + (0x1ffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                    << 1U))))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12003U | ((0xc000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x18U)) 
                                           | ((0x2000000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1c00000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x1013U | ((0x1f00000U 
                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x40063U | ((0xf0000000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          >> 0xcU)))) 
                                           << 0x1cU)) 
                                       | ((0xc000000U 
                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x17U)) 
                                             | ((0x38000U 
                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 8U)) 
                                                | ((0x1000U 
                                                    & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 1U)) 
                                                   | ((0xc00U 
                                                       & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                      | ((0x300U 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 5U)) 
                                                         | (0x80U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 5U))))))))));
                } else {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x6fU | ((0x80000000U 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))));
                    } else {
                        if ((0x800U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 0xcU)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                        = ((0x40U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                            ? ((0x20U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x847433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x846433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                            : ((0x20U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                                ? (0x844433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                                : (0x40840433U 
                                                   | ((0x700000U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0x12U)) 
                                                      | ((0x38000U 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 8U)) 
                                                         | (0x380U 
                                                            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                    = (0x47413U | (
                                                   (0xfc000000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 0xcU)))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 0xdU)) 
                                                      | ((0x1f00000U 
                                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                             << 0x12U)) 
                                                         | ((0x38000U 
                                                             & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                << 8U)) 
                                                            | (0x380U 
                                                               & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                            }
                        } else {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x45413U | ((0x40000000U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                               | ((0x1f00000U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | (0x380U 
                                                        & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x37U | ((0xfffe0000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x11U)) 
                                        | ((0x1f000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xaU)) 
                                           | (0xf80U 
                                              & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                        if ((2U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                                = (0x10113U | ((0xe0000000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                  >> 0xcU)))) 
                                                   << 0x1dU)) 
                                               | ((0x18000000U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x18U)) 
                                                  | ((0x4000000U 
                                                      & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                            << 0x17U)) 
                                                        | (0x1000000U 
                                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0x12U)))))));
                        }
                    } else {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | (0xf80U 
                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                            ? (0x6fU | ((0x80000000U 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U)) 
                                        | ((0x40000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x16U)) 
                                           | ((0x30000000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x13U)) 
                                              | ((0x8000000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x4000000U 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x13U)) 
                                                    | ((0x2000000U 
                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 0x17U)) 
                                                       | ((0x1000000U 
                                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 0xdU)) 
                                                          | ((0xe00000U 
                                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 0x12U)) 
                                                             | ((0x1ff000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                                >> 0xcU)))) 
                                                                    << 0xcU)) 
                                                                | (0x80U 
                                                                   & ((~ 
                                                                       (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                        >> 0xfU)) 
                                                                      << 7U))))))))))))
                            : (0x13U | ((0xfc000000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           >> 0xcU)))) 
                                            << 0x1aU)) 
                                        | ((0x2000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU)) 
                                           | ((0x1f00000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x12U)) 
                                              | ((0xf8000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))));
                }
            }
        } else {
            if ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x842023U | ((0x4000000U 
                                             & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x15U)) 
                                            | ((0x2000000U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | ((0x700000U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                      << 0x12U)) 
                                                  | ((0x38000U 
                                                      & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         << 8U)) 
                                                     | ((0xc00U 
                                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                                        | (0x200U 
                                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                              << 3U))))))));
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x42403U | ((0x4000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x3800000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x400000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x10U)) 
                                                 | ((0x38000U 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 8U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 5U)))))));
                    }
                } else {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x10413U | ((0x3c000000U 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x3000000U 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x800000U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0x400000U 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x10U)) 
                                                    | (0x380U 
                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                          << 5U)))))));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 0xcU)))) {
                            if ((0U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 2U)))) {
                                if ((0U == (0x1fU & 
                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 7U)))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                } else {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0x1000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    } else {
        if ((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        if ((0x800U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x400U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                if ((0x1000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                }
                            }
                        } else {
                            if ((0x1000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0U == ((0x20U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              >> 7U)) 
                                    | (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                >> 2U))))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        } else {
            if ((0x8000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((0x4000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((0x2000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else {
                        if ((0U == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 5U)))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                      ? ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                           >> 1U) & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                      : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
                      ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid)
                      : (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)))));
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlTOPp->ibex_demo_system__DOT__host_rdata[0U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__host_rdata[1U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
    } else {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
        } else {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                    = (3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             >> 2U));
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec 
        = (0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause));
    if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec = 0x1fU;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
            ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                ? 0x1a110808U : 0x1a110800U) : ((1U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                                                 ? 
                                                ((0xffffff00U 
                                                  & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                 | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec) 
                                                    << 2U))
                                                 : 
                                                (0xffffff00U 
                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    if (vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [1U]) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 1U;
    }
    if (vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [0U]) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump 
                            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch 
                            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 0U;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                    }
                } else {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                        } else {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                            }
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                    }
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1fU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (2U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1dU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffffbU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (4U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x1bU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff7U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (8U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                    >> 0x19U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffefU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x17U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffdfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x15U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffbfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x13U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffff7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                       >> 0x11U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffeffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xfU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffdffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xdU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffbffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0xbU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 9U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffefffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 7U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffdfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 5U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffbfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 3U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffeffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffdffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 3U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffbffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 5U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfff7ffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          << 7U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffefffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x100000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 9U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffdfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x200000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xbU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffbfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x400000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xdU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff7fffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x800000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 0xfU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfeffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x1000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x11U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfdffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x2000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x13U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfbffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x4000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x15U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf7ffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x8000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0x17U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xefffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x10000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x19U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xdfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x20000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1bU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xbfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x40000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1dU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x7fffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | (0x80000000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x1fU)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((0x800U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                      ? 0U
                                                      : 0x16U);
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = (IData)((
                                                   vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                   [
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))] 
                                                   >> 0x20U));
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                       [
                                                       (0x1fU 
                                                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))] 
                                                       >> 0x20U));
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                           [
                                                           (0x1fU 
                                                            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))] 
                                                           >> 0x20U));
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = (IData)(
                                                              (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                               [
                                                               (0x1fU 
                                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))] 
                                                               >> 0x20U));
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = (IData)(
                                                                  (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                                   [
                                                                   (0x1fU 
                                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))] 
                                                                   >> 0x20U));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                  [
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))]);
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (IData)(
                                                      vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                      [
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))]);
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (IData)(
                                                          vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                          [
                                                          (0x1fU 
                                                           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))]);
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = (IData)(
                                                              vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                              [
                                                              (0x1fU 
                                                               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))]);
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = (IData)(
                                                                  vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                                                  [
                                                                  (0x1fU 
                                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))]);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                    = 
                                                    ((1U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                      ? 0U
                                                      : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                     : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                     : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 0U
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                                    [vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    (0x28001048U 
                                                     | (4U 
                                                        & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                            >> (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                           << 2U)))
                                                     : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                            ? ((4U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xfU]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xeU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xdU]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xcU]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xbU]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0xaU])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [9U]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [8U])))
                                            : ((4U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [7U]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [6U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [5U]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [4U]))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [3U]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [1U]
                                                     : 
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                                    [0U]))));
                                } else {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xfU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [0xeU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [0xdU] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [0xcU])))
                                                     : 
                                                    ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xbU] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [0xaU] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [9U] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [8U]))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? 
                                                    ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [7U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [6U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [5U] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [4U])))
                                                     : 
                                                    ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [3U] 
                                                      << 0x18U) 
                                                     | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                         [2U] 
                                                         << 0x10U) 
                                                        | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                            [1U] 
                                                            << 8U) 
                                                           | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                           [0U])))));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 0xeU)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 9U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               >> 4U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                                     : 
                                                    ((0x80000000U 
                                                      & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                          << 0x1aU) 
                                                         | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                                            << 0x19U))) 
                                                     | ((((0x40U 
                                                           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))
                                                           ? 0x3ffffffU
                                                           : 0U) 
                                                         << 5U) 
                                                        | (0x1fU 
                                                           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                     ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                                     : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                        [(0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))];
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                            [(0x1fU 
                                              & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))];
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                                [(0x1fU 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))];
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                                                        [
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))];
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                                                } else {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 0xeU)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 9U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffff7ffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x800U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               >> 4U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0x8000ffffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x7fff0000U 
                                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                                               << 0x10U)));
                                                }
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                                                } else {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffffff7U 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (8U 
                                                            & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               >> 2U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffff7fU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x80U 
                                                            & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 3U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffffe7ffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x1800U 
                                                            & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 9U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xfffdffffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x20000U 
                                                            & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 0x10U)));
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                        = 
                                                        ((0xffdfffffU 
                                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                                         | (0x200000U 
                                                            & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                               << 0x15U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x800U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
        if ((0x400U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        } else {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        }
    } else {
        if ((0x400U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        }
                                    }
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                                        = (1U & ((8U 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                  ? 
                                                 (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                   >> 2U) 
                                                  | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))
                                                  : 
                                                 ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 2U)));
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr 
                    = (1U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                 >> 8U)) | ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                >> 7U)) 
                                            | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                >> 6U) 
                                               | ((~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 5U)) 
                                                  | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                      >> 4U) 
                                                     | ((~ 
                                                         ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                          >> 3U)) 
                                                        | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                            >> 2U) 
                                                           | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                               >> 1U) 
                                                              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))))))))));
            }
        } else {
            if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            } else {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            } else {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            } else {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    } else {
                                        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                                }
                                            }
                                        } else {
                                            if ((2U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        }
    }
    if (((((((((((((((((((((0x3a0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)) 
                           | (0x3a1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                          | (0x3a2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                         | (0x3a3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                        | (0x3b0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                       | (0x3b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                      | (0x3b2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                     | (0x3b3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                    | (0x3b4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                   | (0x3b5U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                  | (0x3b6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                 | (0x3b7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
                | (0x3b8U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
               | (0x3b9U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
              | (0x3baU == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
             | (0x3bbU == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
            | (0x3bcU == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
           | (0x3bdU == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
          | (0x3beU == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
         | (0x3bfU == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc);
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
        = ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
            ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U)) : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                         ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                             ? ((1U 
                                                 == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                                                 ? 4U
                                                 : 3U)
                                             : 3U) : 
                                        ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                                          ? 2U : ((2U 
                                                   == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                                   ? 
                                                  (((~ 
                                                     ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)
                                                   : 
                                                  (((~ 
                                                     ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                                      >> 1U)) 
                                                    & (0U 
                                                       == (IData)(
                                                                  (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                   >> 1U))))
                                                    ? 6U
                                                    : 1U)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | ((1U 
                                                   == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                  & (3U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                 >> 1U))))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                  [1U]);
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc);
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))));
    vlTOPp->ibex_demo_system__DOT__host_wdata[0U] = 
        ((1U & (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                        >> 2U))) ? ((1U & (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U)))
                                     ? ((0xff000000U 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                            << 0x18U)) 
                                        | (0xffffffU 
                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                              >> 8U)))
                                     : ((0xffff0000U 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                            << 0x10U)) 
                                        | (0xffffU 
                                           & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                              >> 0x10U))))
          : ((1U & (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                            >> 1U))) ? ((0xffffff00U 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                            << 8U)) 
                                        | (0xffU & 
                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                            >> 0x18U)))
              : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc));
    vlTOPp->__Vtableidx6 = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                             << 4U) | ((0xcU & ((IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U)) 
                                                << 2U)) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = vlTOPp->__Vtable6_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be
        [vlTOPp->__Vtableidx6];
    vlTOPp->__Vtableidx4 = ((0x100U & (((0x80000000U 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            ^ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                         ? ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             >> 0x1fU) 
                                            ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                         : (~ (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 0x20U)))) 
                                       << 8U)) | ((
                                                   (0U 
                                                    == (IData)(
                                                               (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U))) 
                                                   << 7U) 
                                                  | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = vlTOPp->__Vtable4_ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result
        [vlTOPp->__Vtableidx4];
    vlTOPp->ibex_demo_system__DOT__host_addr[0U] = 
        (0xfffffffcU & ((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 3U)) << 2U));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q;
    if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready) 
          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk))) 
         & (2U == (3U & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                 >> 0x20U)))))) {
        if ((1U & (~ (((((((((4U <= (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U)))) 
                             & (5U >= (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                            | (0x10U == (0x7fU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) 
                           | (0x11U == (0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U))))) 
                          | (0x12U == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) 
                         | (0x16U == (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))) 
                        | (0x17U == (0x7fU & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x22U))))) 
                       | (0x18U == (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U))))) 
                      | ((0x20U <= (0x7fU & (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                     >> 0x22U)))) 
                         & (0x27U >= (0x7fU & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                       >> 0x22U))))))))) {
            if ((0x38U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                            >> 0x22U))))) {
                if ((0x39U != (0x7fU & (IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                >> 0x22U))))) {
                    if ((0x3aU != (0x7fU & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U))))) {
                        if ((0x3cU == (0x7fU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                        >> 0x22U))))) {
                            if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                          | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                    = ((0xffffffff00000000ULL 
                                        & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                       | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int)));
                            }
                        } else {
                            if ((0x3dU == (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                if ((1U & (~ ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)) 
                                              | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x16U))))) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
                                        = ((0xffffffffULL 
                                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d) 
                                           | ((QData)((IData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int))) 
                                              << 0x20U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__host_rvalid[1U]) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d 
            = (QData)((IData)(vlTOPp->ibex_demo_system__DOT__host_rdata
                              [1U]));
    }
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      >> 0x1fU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                     [0U] 
                                                     >> 0x18U)))
                    : (0xffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                [0U] >> 0x18U))) : 
               ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                 ? ((0xffffff00U & ((- (IData)((1U 
                                                & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                   [0U] 
                                                   >> 0x17U)))) 
                                    << 8U)) | (0xffU 
                                               & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                  [0U] 
                                                  >> 0x10U)))
                 : (0xffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                             [0U] >> 0x10U))));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      >> 7U)))) 
                                       << 0x10U)) | 
                       ((0xff00U & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                    [0U] << 8U)) | 
                        (0xffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                  >> 0x10U)))) : ((0xff00U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U))))
                : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      >> 0x1fU)))) 
                                       << 0x10U)) | 
                       (0xffffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                   [0U] >> 0x10U)))
                    : (0xffffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                  [0U] >> 0x10U))));
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      >> 0xfU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                     [0U] 
                                                     >> 8U)))
                    : (0xffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                [0U] >> 8U))) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                                     [0U] 
                                                                     >> 7U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlTOPp->ibex_demo_system__DOT__host_rdata
                                                     [0U]))
                                                  : 
                                                 (0xffU 
                                                  & vlTOPp->ibex_demo_system__DOT__host_rdata
                                                  [0U])));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                    ? ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      >> 0x17U)))) 
                                       << 0x10U)) | 
                       (0xffffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                   [0U] >> 8U))) : 
                   (0xffffU & (vlTOPp->ibex_demo_system__DOT__host_rdata
                               [0U] >> 8U))) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                 ? 
                                                ((0xffff0000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                                    [0U] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & vlTOPp->ibex_demo_system__DOT__host_rdata
                                                    [0U]))
                                                 : 
                                                (0xffffU 
                                                 & vlTOPp->ibex_demo_system__DOT__host_rdata
                                                 [0U])));
    }
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
        = vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int) 
            & ((~ (IData)((3U == (3U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                         >> 1U) | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))) 
               | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))) 
           & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                 >> 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
            ? (0xfffffffeU & ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                               ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                   ? 0x100080U : ((1U 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                   ? 0x100080U
                                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                               : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                   ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                       ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                       : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                   : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                       ? (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))
                                       : 0x100080U))))
            : 0U);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
                | ((3U == (3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                 >> 0xaU))) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
               | ((3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                         >> 8U)) > (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))) 
              | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1U] 
        = (QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                      [0U]);
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_wdata
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_wdata
        [1U];
    vlTOPp->ibex_demo_system__DOT__host_be[0U] = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                            = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                        = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)
                                  ? (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 1U) | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                  : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec)));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)))))));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                }
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                            = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_addr[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_addr[1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext
                : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xffffff00U & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                           [0U] << 8U)) 
                           | (0xffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x10U))) : 
                       ((0xffff0000U & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                        [0U] << 0x10U)) 
                        | (0xffffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 8U)))) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                    ? 
                                                   ((0xff000000U 
                                                     & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                        [0U] 
                                                        << 0x18U)) 
                                                    | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                                    : 
                                                   vlTOPp->ibex_demo_system__DOT__host_rdata
                                                   [0U]))));
    vlTOPp->ibex_demo_system__DOT__host_gnt[0U] = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__host_gnt[1U] = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
        = (0x7fffffffU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                           ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                              >> 1U) : (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        + ((2U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                  << 1U)) 
                                           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
             ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
             : (0xfffffffcU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
        = ((0x20000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                        << 0xeU)) | ((0x10000U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 9U)) 
                                     | ((0x8000U & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          << 4U)) | 
                                        (0x7fffU & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x10U)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
                    = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                    = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id;
            }
        }
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
                = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        } else {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                    = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata 
        = ((0x3fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata)) 
           | (0xc0U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)) 
           | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
               | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
                  & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) 
              | ((3U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                 & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                    | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
        [0U];
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                             ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))
                            ? (QData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                           [0U]) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                    [0U])) : ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = (((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                        << 1U) | (QData)((IData)((1U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                                     >> (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = (QData)((IData)((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                             >> 0x1fU))));
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                    = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? 0x3ffffffffULL : (QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc)));
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
            }
        }
    }
}
