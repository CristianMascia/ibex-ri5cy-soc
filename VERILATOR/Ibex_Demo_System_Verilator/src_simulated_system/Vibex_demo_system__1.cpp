// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_demo_system.h for the primary calling header

#include "Vibex_demo_system.h"
#include "Vibex_demo_system__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vibex_demo_system::_combo__TOP__18(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_combo__TOP__18\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->clk_sys_i)))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__en_latch 
            = (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                      | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                     | (0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)));
    }
    vlTOPp->ibex_demo_system__DOT__rst_core_n = ((IData)(vlTOPp->rst_sys_ni) 
                                                 & (~ 
                                                    (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                     >> 1U)));
}

VL_INLINE_OPT void Vibex_demo_system::_multiclk__TOP__19(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_multiclk__TOP__19\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_we[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_we[1U];
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
            ? (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_req[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_req[1U];
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
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_wdata
        [0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_wdata
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_addr[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_addr[1U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[0U] 
        = vlTOPp->ibex_demo_system__DOT__host_be[0U];
    vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[1U] 
        = vlTOPp->ibex_demo_system__DOT__host_be[1U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((0U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((1U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffffbU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((2U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffff7U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((3U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 3U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffffefU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((4U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 4U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffffdfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((5U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 5U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffffbfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((6U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 6U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffff7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((7U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 7U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffeffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((8U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 8U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffdffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((9U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 9U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffbffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0xaU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0xaU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0xbU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0xbU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffefffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0xcU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0xcU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffdfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0xdU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0xdU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffbfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0xeU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0xeU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffff7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0xfU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0xfU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffeffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x10U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x10U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffdffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x11U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x11U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffbffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x12U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x12U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfff7ffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x13U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x13U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffefffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x14U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x14U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffdfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x15U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x15U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffbfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x16U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x16U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xff7fffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x17U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x17U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfeffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x18U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x18U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfdffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x19U == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x19U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfbffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x1aU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x1aU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xf7ffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x1bU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x1bU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xefffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x1cU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x1cU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xdfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x1dU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x1dU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xbfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x1eU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x1eU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x7fffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((0x1fU == (0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 7U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
              << 0x1fU));
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match)) 
              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
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
    vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    if (vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [1U]) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 1U;
    }
    if (vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [0U]) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req = 0U;
    }
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)
            : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex);
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id 
        = ((((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
               & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                  & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                     | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)))) 
              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump)) 
            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch)) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[0U] = 0U;
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[1U] = 0U;
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
        = vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
        [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req];
    vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 0U;
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 2U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [3U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [3U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 3U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [4U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [4U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 4U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [5U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [5U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 5U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [6U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [6U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 6U;
    }
    if (((vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
          [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req] 
          & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [7U]) == vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [7U])) {
        vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req = 7U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb 
        = (((- (IData)((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
            & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
            [0U]) | ((- (IData)((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we) 
                                       >> 1U)))) & 
                     vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux
                     [1U]));
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
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done 
        = (((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id))) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
    vlTOPp->ibex_demo_system__DOT__host_gnt[0U] = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__host_gnt[1U] = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o
        [1U];
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[0U] 
        = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[1U] 
        = ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[2U] 
        = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[3U] 
        = ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[4U] 
        = ((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[5U] 
        = ((5U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[6U] 
        = ((6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[7U] 
        = ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[0U] 
        = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[1U] 
        = ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[2U] 
        = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[3U] 
        = ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[4U] 
        = ((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[5U] 
        = ((5U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[6U] 
        = ((6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[7U] 
        = ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[0U] 
        = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[1U] 
        = ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[2U] 
        = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[3U] 
        = ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[4U] 
        = ((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[5U] 
        = ((5U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[6U] 
        = ((6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[7U] 
        = ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req))
            ? vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]
            : 0U);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[0U] 
        = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[1U] 
        = ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[2U] 
        = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[3U] 
        = ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[4U] 
        = ((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[5U] 
        = ((5U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[6U] 
        = ((6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[7U] 
        = ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[0U] 
        = ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[1U] 
        = ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[2U] 
        = ((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[3U] 
        = ((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[4U] 
        = ((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[5U] 
        = ((5U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[6U] 
        = ((6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[7U] 
        = ((7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req)) 
           & vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i
           [vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req]);
    vlTOPp->ibex_demo_system__DOT__mem_instr_req = 
        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
         & ((0xfffffffcU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                            & vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
                            [0U])) == vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
            [0U]));
    vlTOPp->ibex_demo_system__DOT__dbg_instr_req = 
        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
         & ((0xfffffffcU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                            & vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask
                            [7U])) == vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base
            [7U]));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb 
        = (((((((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
             & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done)) 
           & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid) 
                 & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err) 
                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            } else {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if (vlTOPp->ibex_demo_system__DOT__host_gnt
                        [0U]) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            } else {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                }
            } else {
                if ((vlTOPp->ibex_demo_system__DOT__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = (vlTOPp->ibex_demo_system__DOT__host_gnt
                           [0U] ? 0U : 3U);
                } else {
                    if (vlTOPp->ibex_demo_system__DOT__host_gnt
                        [0U]) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                }
            } else {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                        = (vlTOPp->ibex_demo_system__DOT__host_gnt
                           [0U] ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                    ? 2U : 0U) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                                                   ? 1U
                                                   : 3U));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else {
                if ((vlTOPp->ibex_demo_system__DOT__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                        = (1U & (~ vlTOPp->ibex_demo_system__DOT__host_gnt
                                 [0U]));
                } else {
                    if (vlTOPp->ibex_demo_system__DOT__host_gnt
                        [0U]) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                    }
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
                }
            } else {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if (vlTOPp->ibex_demo_system__DOT__host_gnt
                        [0U]) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [0U]) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ vlTOPp->ibex_demo_system__DOT__host_err
                                 [0U]));
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
                }
            } else {
                if ((vlTOPp->ibex_demo_system__DOT__host_rvalid
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (vlTOPp->ibex_demo_system__DOT__host_gnt
                           [0U] & (~ (vlTOPp->ibex_demo_system__DOT__host_err
                                      [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlTOPp->ibex_demo_system__DOT__host_gnt
                     [0U] | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                }
            } else {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) {
                    if (vlTOPp->ibex_demo_system__DOT__host_gnt
                        [0U]) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q;
    if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
            } else {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [1U]) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                if (vlTOPp->ibex_demo_system__DOT__host_rvalid
                    [1U]) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
                }
            } else {
                if (vlTOPp->ibex_demo_system__DOT__host_gnt
                    [1U]) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 4U;
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                if (vlTOPp->ibex_demo_system__DOT__host_gnt
                    [1U]) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 3U;
                }
            } else {
                if (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid) 
                     & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                        >> 0x14U))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
                }
                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 2U;
                }
                if (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid) 
                     & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                        >> 0xfU))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 1U;
                }
            }
        }
    }
    if (((3U < (7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                      >> 0x11U))) & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d = 0U;
    }
    vlTOPp->ibex_demo_system__DOT__device_wdata[0U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[1U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[2U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[3U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[4U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [4U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[5U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [5U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[6U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [6U];
    vlTOPp->ibex_demo_system__DOT__device_wdata[7U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o
        [7U];
    vlTOPp->ibex_demo_system__DOT__device_be[0U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__device_be[1U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__device_be[2U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__device_be[3U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__device_be[4U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [4U];
    vlTOPp->ibex_demo_system__DOT__device_be[5U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [5U];
    vlTOPp->ibex_demo_system__DOT__device_be[6U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [6U];
    vlTOPp->ibex_demo_system__DOT__device_be[7U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o
        [7U];
    vlTOPp->ibex_demo_system__DOT__device_addr[0U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__device_addr[1U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__device_addr[2U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__device_addr[3U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__device_addr[4U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [4U];
    vlTOPp->ibex_demo_system__DOT__device_addr[5U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [5U];
    vlTOPp->ibex_demo_system__DOT__device_addr[6U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [6U];
    vlTOPp->ibex_demo_system__DOT__device_addr[7U] 
        = vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o
        [7U];
    vlTOPp->ibex_demo_system__DOT__device_we[0U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__device_we[1U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__device_we[2U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__device_we[3U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__device_we[4U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [4U];
    vlTOPp->ibex_demo_system__DOT__device_we[5U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [5U];
    vlTOPp->ibex_demo_system__DOT__device_we[6U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [6U];
    vlTOPp->ibex_demo_system__DOT__device_we[7U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o
        [7U];
    vlTOPp->ibex_demo_system__DOT__device_req[0U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [0U];
    vlTOPp->ibex_demo_system__DOT__device_req[1U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [1U];
    vlTOPp->ibex_demo_system__DOT__device_req[2U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [2U];
    vlTOPp->ibex_demo_system__DOT__device_req[3U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [3U];
    vlTOPp->ibex_demo_system__DOT__device_req[4U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [4U];
    vlTOPp->ibex_demo_system__DOT__device_req[5U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [5U];
    vlTOPp->ibex_demo_system__DOT__device_req[6U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [6U];
    vlTOPp->ibex_demo_system__DOT__device_req[7U] = 
        vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o
        [7U];
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 0U;
    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
         & ((1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
            | (2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op))))) {
        if (((((0x300U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U))) | 
               (0x304U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U)))) | 
              (0x747U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x14U)))) | 
             (0x1dU == (0x7fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0x19U))))) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    } else {
        if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
             & (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)))) {
            if (((((0x7b0U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))) 
                   | (0x7b1U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)))) 
                  | (0x7b2U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) 
                 | (0x7b3U == (0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_o_d 
        = ((0xff00U & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_o_d)) 
           | (0xffU & ((1U & vlTOPp->ibex_demo_system__DOT__device_be
                        [1U]) ? vlTOPp->ibex_demo_system__DOT__device_wdata
                       [1U] : (IData)(vlTOPp->gp_o))));
    vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_o_d 
        = ((0xffU & (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_o_d)) 
           | (0xff00U & (((2U & vlTOPp->ibex_demo_system__DOT__device_be
                           [1U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                    [1U] >> 8U) : ((IData)(vlTOPp->gp_o) 
                                                   >> 8U)) 
                         << 8U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffffff00U & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_demo_system__DOT__device_be
                        [4U]) ? vlTOPp->ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffffff00U & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_demo_system__DOT__device_be
                        [4U]) ? vlTOPp->ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                       >> 0x20U)))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffffff00U & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_demo_system__DOT__device_be
                        [4U]) ? vlTOPp->ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffffff00U & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xffU & ((1U & vlTOPp->ibex_demo_system__DOT__device_be
                        [4U]) ? vlTOPp->ibex_demo_system__DOT__device_wdata
                       [4U] : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                       >> 0x20U)))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_demo_system__DOT__device_be
                           [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                           >> 8U))) 
                         << 8U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_demo_system__DOT__device_be
                           [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_demo_system__DOT__device_be
                           [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 8U))) 
                         << 8U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffff00ffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff00U & (((2U & vlTOPp->ibex_demo_system__DOT__device_be
                           [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                    [4U] >> 8U) : (IData)(
                                                          (vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x28U))) 
                         << 8U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_demo_system__DOT__device_be
                             [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_demo_system__DOT__device_be
                             [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_demo_system__DOT__device_be
                             [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                        >> 0x10U))) 
                           << 0x10U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xff00ffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff0000U & (((4U & vlTOPp->ibex_demo_system__DOT__device_be
                             [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                      [4U] >> 0x10U)
                             : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                        >> 0x30U))) 
                           << 0x10U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata 
        = ((0xffffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_demo_system__DOT__device_be
                               [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                          >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata 
        = ((0xffffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_demo_system__DOT__device_be
                               [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                          >> 0x38U))) 
                             << 0x18U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata 
        = ((0xffffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_demo_system__DOT__device_be
                               [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                          >> 0x18U))) 
                             << 0x18U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata 
        = ((0xffffffU & vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata) 
           | (0xff000000U & (((8U & vlTOPp->ibex_demo_system__DOT__device_be
                               [4U]) ? (vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [4U] >> 0x18U)
                               : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                          >> 0x38U))) 
                             << 0x18U)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xffffff00U & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xffU & (- (IData)((1U & vlTOPp->ibex_demo_system__DOT__device_be
                                  [0U])))));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xffff00ffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xff00U & ((- (IData)((1U & (vlTOPp->ibex_demo_system__DOT__device_be
                                           [0U] >> 1U)))) 
                         << 8U)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xff00ffffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xff0000U & ((- (IData)((1U & (vlTOPp->ibex_demo_system__DOT__device_be
                                             [0U] >> 2U)))) 
                           << 0x10U)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
        = ((0xffffffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask) 
           | (0xff000000U & ((- (IData)((1U & (vlTOPp->ibex_demo_system__DOT__device_be
                                               [0U] 
                                               >> 3U)))) 
                             << 0x18U)));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                [4U]))) {
        if ((4U != (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                    [4U]))) {
            if ((8U != (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                        [4U]))) {
                if ((0xcU != (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                              [4U]))) {
                    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__rdata_d 
        = ((0U == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                   [4U])) ? (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q)
            : ((4U == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                       [4U])) ? (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                         >> 0x20U))
                : ((8U == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                           [4U])) ? (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)
                    : ((0xcU == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                                 [4U])) ? (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x20U))
                        : 0U))));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d = 0U;
    if (vlTOPp->ibex_demo_system__DOT__device_req[3U]) {
        vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d = 1U;
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rdata_d = 0U;
    if (vlTOPp->ibex_demo_system__DOT__device_req[3U]) {
        if ((1U & (vlTOPp->ibex_demo_system__DOT__device_be
                   [3U] & (~ vlTOPp->ibex_demo_system__DOT__device_we
                           [3U])))) {
            vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rdata_d 
                = ((0U == (0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                           [3U])) ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0U : (0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))))
                    : ((4U == (0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                               [3U])) ? 0U : ((8U == 
                                               (0xfffU 
                                                & vlTOPp->ibex_demo_system__DOT__device_addr
                                                [3U]))
                                               ? (((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid))))
                                               : 0U)));
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((vlTOPp->ibex_demo_system__DOT__device_req
              [5U] & (0U == (0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                             [5U]))) & vlTOPp->ibex_demo_system__DOT__device_we
             [5U]) & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                      & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((((4U == (0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                     [3U])) & ((vlTOPp->ibex_demo_system__DOT__device_req
                                [3U] & vlTOPp->ibex_demo_system__DOT__device_be
                                [3U]) & vlTOPp->ibex_demo_system__DOT__device_we
                               [3U])) & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)))) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = 0U;
    if (vlTOPp->ibex_demo_system__DOT__device_req[3U]) {
        if ((1U & (vlTOPp->ibex_demo_system__DOT__device_be
                   [3U] & (~ vlTOPp->ibex_demo_system__DOT__device_we
                           [3U])))) {
            if ((0U == (0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                        [3U]))) {
                vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__core_instr_gnt = 
        ((IData)(vlTOPp->ibex_demo_system__DOT__mem_instr_req) 
         | ((IData)(vlTOPp->ibex_demo_system__DOT__dbg_instr_req) 
            & (~ vlTOPp->ibex_demo_system__DOT__device_req
               [7U])));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we 
        = (vlTOPp->ibex_demo_system__DOT__device_req
           [4U] & vlTOPp->ibex_demo_system__DOT__device_we
           [4U]);
    vlTOPp->ibex_demo_system__DOT__dbg_slave_req = 
        (vlTOPp->ibex_demo_system__DOT__device_req[7U] 
         | (IData)(vlTOPp->ibex_demo_system__DOT__dbg_instr_req));
    vlTOPp->ibex_demo_system__DOT__dbg_slave_we = (
                                                   vlTOPp->ibex_demo_system__DOT__device_req
                                                   [7U] 
                                                   & vlTOPp->ibex_demo_system__DOT__device_we
                                                   [7U]);
    vlTOPp->ibex_demo_system__DOT__dbg_slave_addr = 
        (vlTOPp->ibex_demo_system__DOT__device_req[7U]
          ? vlTOPp->ibex_demo_system__DOT__device_addr
         [7U] : (0xfffffffcU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 1U;
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we)) 
           | ((((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0x7a1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we)) 
           | ((((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (0x7a2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we)) 
           | (((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q) 
                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
               & (0x7a1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we)) 
           | (((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q) 
                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int)) 
                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
               & (0x7a2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffff7U 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffefU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffbffU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffffdffU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q) 
                      << 6U));
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            ((0x20U 
                                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                 << 2U)) 
                                                             | ((0x10U 
                                                                 & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U)) 
                                                                | ((0xcU 
                                                                    & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                       >> 9U)) 
                                                                   | ((2U 
                                                                       & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                          >> 0x10U)) 
                                                                      | (1U 
                                                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                            >> 0x15U))))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0x33U 
                                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
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
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = (0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x2fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | (0x10U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 1U)));
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x33U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q) 
                          << 2U));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | (0x20U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   << 1U)));
                if ((3U != (3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                  >> 2U)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x3dU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                }
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = ((0x2fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                           | (0x10U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                       << 2U)));
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = ((0x33U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                           | (0xcU & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                      << 2U)));
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x10U | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                        = (0x33U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
        = (((3U == (3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                          >> 0x1eU))) << 6U) | (((2U 
                                                  == 
                                                  (3U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 0x1eU))) 
                                                 << 5U) 
                                                | (0x1fU 
                                                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 0U;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                                                            = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata;
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
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
    }
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause;
                if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                               >> 5U) | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                         >> 6U))))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                        = (0x40U | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    if ((0x40U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o = 1U;
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                            = (0x80U | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    }
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                    = (0xbfU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((0x80U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                = (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                    = 
                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                     | ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                        = 
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                         | ((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                            = 
                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                                             | ((IData)(1U) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                    if ((0x100U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                    } else {
                                        if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                = (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                        } else {
                                            if ((4U 
                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                    = 
                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                     | ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                            } else {
                                                if (
                                                    (2U 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))) {
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                        = 
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                         | ((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
                                                } else {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))) {
                                                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                            = 
                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                                             | ((IData)(1U) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))));
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
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
            | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err) 
               | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err))) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush) 
                 & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask 
        = ((0xeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask)) 
           | (0xffU == (0xffU & vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask)));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask 
        = ((0xdU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
                                          >> 8U)))) 
              << 1U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask 
        = ((0xbU & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
                                          >> 0x10U)))) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask 
        = ((7U & (IData)(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask)) 
           | ((IData)((0xffU == (0xffU & (vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask 
                                          >> 0x18U)))) 
              << 3U));
    vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7eU == (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (0x7fU == (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                     & (IData)(vlTOPp->ibex_demo_system__DOT__core_instr_gnt)) 
                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)) 
           | (2U & (((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlTOPp->ibex_demo_system__DOT__core_instr_gnt)) 
                      & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                     << 1U) | (0xfffffffeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (1U & (((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                       & (IData)(vlTOPp->ibex_demo_system__DOT__core_instr_gnt)) 
                      & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                     | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))) 
                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)) 
           | (2U & (((((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                         & (IData)(vlTOPp->ibex_demo_system__DOT__core_instr_gnt)) 
                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d)) 
                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                      << 1U) | (0xfffffffeU & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                                << 1U) 
                                               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
                    | (0xfffffffeU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_d 
        = (((QData)((IData)((((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                              & (4U == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                                        [4U]))) ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata
                              : (IData)(((1ULL + vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q) 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                          & (0U == 
                                             (0x3ffU 
                                              & vlTOPp->ibex_demo_system__DOT__device_addr
                                              [4U])))
                                          ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata
                                          : ((IData)(1U) 
                                             + (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q))))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
           & (8U == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                     [4U])));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
           & (0xcU == (0x3ffU & vlTOPp->ibex_demo_system__DOT__device_addr
                       [4U])));
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                        if ((0x10cU != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i = 4U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                    = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       | ((IData)(1U) << (1U & vlTOPp->ibex_demo_system__DOT__device_wdata
                                          [7U])));
            } else {
                if ((0x104U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    if ((0x108U == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                            = ((~ ((IData)(1U) << (1U 
                                                   & vlTOPp->ibex_demo_system__DOT__device_wdata
                                                   [7U]))) 
                               & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q;
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
            = ((~ ((IData)(1U) << (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
    }
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    if ((0x108U == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned 
                            = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned) 
                               | ((IData)(1U) << (1U 
                                                  & vlTOPp->ibex_demo_system__DOT__device_wdata
                                                  [7U])));
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__dbg_slave_we)))) {
            if ((0x300U == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq) 
                           >> (1U & vlTOPp->ibex_demo_system__DOT__device_wdata
                               [7U])))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x5040006fULL;
                }
                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = ((((0U == (0xffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x18U))) 
                             & (~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                   >> 0x11U))) & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                  >> 0x12U))
                            ? 0x600006fULL : 0x380006fULL);
                }
            } else {
                if (((0x380U <= (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                     & (0x387U >= (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                        = (((QData)((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                             >> (0x20U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (vlTOPp->ibex_demo_system__DOT__dbg_slave_addr 
                                                      >> 3U)) 
                                                    << 5U))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                         >> 
                                                         (0x20U 
                                                          & (vlTOPp->ibex_demo_system__DOT__dbg_slave_addr 
                                                             << 2U))))));
                } else {
                    if (((0x360U <= (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                         & (0x37fU >= (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                            = (((QData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                ((IData)(1U) 
                                                 + 
                                                 (6U 
                                                  & (((vlTOPp->ibex_demo_system__DOT__dbg_slave_addr 
                                                       >> 3U) 
                                                      - (IData)(4U)) 
                                                     << 1U)))])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                            (6U 
                                                             & (((vlTOPp->ibex_demo_system__DOT__dbg_slave_addr 
                                                                  >> 3U) 
                                                                 - (IData)(4U)) 
                                                                << 1U))])));
                    } else {
                        if (((0x338U <= (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                             & (0x35fU >= (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                = (((QData)((IData)(
                                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                    ((IData)(1U) 
                                                     + 
                                                     (0xeU 
                                                      & (((vlTOPp->ibex_demo_system__DOT__dbg_slave_addr 
                                                           >> 3U) 
                                                          - (IData)(7U)) 
                                                         << 1U)))])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                                (0xeU 
                                                                 & (((vlTOPp->ibex_demo_system__DOT__dbg_slave_addr 
                                                                      >> 3U) 
                                                                     - (IData)(7U)) 
                                                                    << 1U))])));
                        } else {
                            if (((0x400U <= (0xfffU 
                                             & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                                 & (0x7ffU >= (0xfffU 
                                               & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                                if ((0U == (0xfffU 
                                            & ((0xff8U 
                                                & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr) 
                                               - (IData)(0x400U))))) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                        = (((~ (0xffULL 
                                                << 
                                                (8U 
                                                 & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                                                    << 3U)))) 
                                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata) 
                                           | ((QData)((IData)(
                                                              (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go)))) 
                                              << (8U 
                                                  & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel 
                                                     << 3U))));
                                }
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                    = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid = 0U;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                        if ((0x10cU != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                        if ((0x10cU != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                            if (((0x380U <= (0xfffU 
                                             & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)) 
                                 & (0x387U >= (0xfffU 
                                               & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr)))) {
                                if ((1U & vlTOPp->ibex_demo_system__DOT__device_be
                                     [7U])) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffffffffff00ULL 
                                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | (IData)((IData)(
                                                             (0xffU 
                                                              & vlTOPp->ibex_demo_system__DOT__device_wdata
                                                              [7U]))));
                                }
                                if ((2U & vlTOPp->ibex_demo_system__DOT__device_be
                                     [7U])) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffffffff00ffULL 
                                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlTOPp->ibex_demo_system__DOT__device_wdata
                                                                  [7U] 
                                                                  >> 8U)))) 
                                              << 8U));
                                }
                                if ((4U & vlTOPp->ibex_demo_system__DOT__device_be
                                     [7U])) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffffff00ffffULL 
                                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlTOPp->ibex_demo_system__DOT__device_wdata
                                                                  [7U] 
                                                                  >> 0x10U)))) 
                                              << 0x10U));
                                }
                                if ((8U & vlTOPp->ibex_demo_system__DOT__device_be
                                     [7U])) {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                        = ((0xffffffff00ffffffULL 
                                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                           | ((QData)((IData)(
                                                              (0xffU 
                                                               & (vlTOPp->ibex_demo_system__DOT__device_wdata
                                                                  [7U] 
                                                                  >> 0x18U)))) 
                                              << 0x18U));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 0U;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((0x104U == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going = 1U;
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                    = ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       | ((IData)(1U) << (1U & vlTOPp->ibex_demo_system__DOT__device_wdata
                                          [7U])));
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
    if (vlTOPp->ibex_demo_system__DOT__dbg_slave_req) {
        if (vlTOPp->ibex_demo_system__DOT__dbg_slave_we) {
            if ((0x100U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                if ((0x104U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                    if ((0x108U != (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                        if ((0x10cU == (0xfffU & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))) {
                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x1ffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                         & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                    if ((1U & (((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                                & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                        } else {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (0x7fU == (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_d 
        = (((QData)((IData)(((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we)
                              ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata
                              : (IData)((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we)
                                          ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata
                                          : (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))));
    vlTOPp->ibex_demo_system__DOT__u_timer__DOT__interrupt_d 
        = (((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
             >= vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
            | (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__interrupt_q)) 
           & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
                 | (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q;
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
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                        = (((~ (0xffffffffULL << (0x20U 
                                                  & ((IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U)) 
                                                     << 5U)))) 
                            & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d) 
                           | ((QData)((IData)((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int))) 
                              << (0x20U & ((IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                    >> 0x22U)) 
                                           << 5U))));
                }
            }
        }
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
            = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q;
    if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if ((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                       >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        } else {
            if ((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                       >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q))) {
            if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
            }
        } else {
            if ((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                  & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                     >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
            }
            if ((1U & (((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq) 
                          >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)) 
                         & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                               >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) 
                        & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
                              >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)))) 
                       & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                          >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))))) {
                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid = 1U;
    }
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
            if ((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                           & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                              >> (1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel))) 
                          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 4U;
                }
            }
        }
    }
    if (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
         & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 2U;
    }
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror = 3U;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                     | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                 | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready 
        = (1U & (((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                  & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if))) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))));
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q;
    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs = 0U;
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
                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
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
                                        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
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
                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                    if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                    }
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
                            if ((0x16U == (0x7fU & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))))) {
                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                    = (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int);
                                if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                    if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                    }
                                } else {
                                    vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
                                        = ((~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 8U)) 
                                           & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q));
                                }
                            } else {
                                if ((0x17U == (0x7fU 
                                               & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                          >> 0x22U))))) {
                                    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                        if ((0U == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                            vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                        }
                                    }
                                } else {
                                    if ((0x18U == (0x7fU 
                                                   & (IData)(
                                                             (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                              >> 0x22U))))) {
                                        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
                                            }
                                        }
                                    } else {
                                        if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy) {
                                            if ((0U 
                                                 == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q))) {
                                                vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d = 1U;
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
    if (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid) {
        vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d 
            = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror;
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
           & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
             & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready)) 
            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else {
        if ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    if ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                                if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                        if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if ((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                                if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                                }
                            }
                        }
                    }
                    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                         & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                    }
                    if ((1U & (((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                                & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req))) 
                               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))))) {
                        if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                            vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                        } else {
                            if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                            }
                        }
                    }
                } else {
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                    }
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                    }
                    if (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & ((((0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs) 
                                 | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                               | (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                  >> 2U)))) {
                        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                    }
                } else {
                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                }
            } else {
                vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                        ? 4U : 1U);
            }
        }
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffeU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffbU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffff7U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffefU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffdfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffffbfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffff7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffeffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffdffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffbffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffefffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffdfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffffbfffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffff7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffeffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffdffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffbffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfff7ffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffefffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffdfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xffbfffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xff7fffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfeffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfdffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfbffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xf7ffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xefffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xdfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xbfffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0x7fffffffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (0xfffffffdU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr);
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffffbU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
              << 2U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffff7U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid))) 
              << 3U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffefU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))) 
              << 4U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffdfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load) 
              << 5U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffffbfU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store) 
              << 6U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffff7fU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump) 
              << 7U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffeffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch) 
              << 8U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffdffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch) 
              << 9U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffbffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)) 
              << 0xaU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffff7ffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)) 
              << 0xbU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffefffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)) 
              << 0xcU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
            & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw)) 
           & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                      & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))
                ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
                : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                       >> 2U) & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                    >> 2U)))) ? (1ULL 
                                                 + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 3U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((8U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 3U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 3U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 4U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x10U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 4U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 4U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 5U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x20U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 5U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 5U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 6U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x40U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 6U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 6U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 7U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x80U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 7U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 7U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 8U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x100U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 8U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 8U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 9U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x200U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 9U) & 
                                         (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                             >> 9U))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xaU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x400U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xaU) 
                                         & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                               >> 0xaU))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xbU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x800U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xbU) 
                                         & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                               >> 0xbU))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xcU));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | ((QData)((IData)((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter 
                                       >> 0x20U)))) 
              << 0x20U));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
           | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x1000U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffffULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                  << 0x20U));
        vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = ((0xffffffff00000000ULL & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load) 
               | (IData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    }
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = (0xffffffffffULL & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
                               ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load
                               : ((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xcU) 
                                         & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                               >> 0xcU))))
                                   ? (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)
                                   : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((6U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                >> 1U) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
              | (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = ((5U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en)) 
           | ((0x7ffffffeU & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                               >> 1U) & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
                                         << 1U))) | 
              (0xfffffffeU & ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
                                << 1U) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry)) 
                              & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 << 1U)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((6U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                     ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                        >> 1U) : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((5U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (2U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                      ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                         >> 2U) : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                                   >> 1U)) << 1U)));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = ((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped)) 
           | (4U & (((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                     << 2U) & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((6U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((5U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (2U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                       << 1U))));
    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d)) 
           | (4U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
                    & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)) 
                       << 2U))));
}

void Vibex_demo_system::_eval(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_eval\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n)) 
         & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
         | ((~ (IData)(vlTOPp->rst_sys_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_sys_ni)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i)))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    if (((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n)) 
         & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
         | ((~ (IData)(vlTOPp->rst_sys_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_sys_ni)))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
         | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
    }
    if (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk)))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
    }
    if (((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk)) 
         & (IData)(vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk))) {
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n)))) {
        vlTOPp->_multiclk__TOP__14(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
         | ((~ (IData)(vlTOPp->rst_sys_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_sys_ni)))) {
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
    }
    if ((((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
           | ((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
              & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__rst_core_n))) 
          | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_sys_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_sys_ni)))) {
        vlTOPp->_multiclk__TOP__16(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
          & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
         | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk))))) {
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    }
    vlTOPp->_combo__TOP__18(vlSymsp);
    if ((((((IData)(vlTOPp->clk_sys_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_sys_i))) 
           | ((~ (IData)(vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n)) 
              & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__rst_core_n))) 
          | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk) 
             & (~ (IData)(vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk)))) 
         | ((~ (IData)(vlTOPp->rst_sys_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_sys_ni)))) {
        vlTOPp->_multiclk__TOP__19(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n 
        = vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n;
    vlTOPp->__Vclklast__TOP__clk_sys_i = vlTOPp->clk_sys_i;
    vlTOPp->__Vclklast__TOP__rst_sys_ni = vlTOPp->rst_sys_ni;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__ibex_demo_system__DOT__rst_core_n 
        = vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n;
    vlTOPp->__Vclklast__TOP__ibex_demo_system__DOT__u_top__DOT__clk 
        = vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk;
    vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n;
    vlTOPp->__VinpClk__TOP__ibex_demo_system__DOT__rst_core_n 
        = vlTOPp->ibex_demo_system__DOT__rst_core_n;
}

VL_INLINE_OPT QData Vibex_demo_system::_change_request(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_change_request\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vibex_demo_system::_change_request_1(Vibex_demo_system__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_change_request_1\n"); );
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->ibex_demo_system__DOT__rst_core_n ^ vlTOPp->__Vchglast__TOP__ibex_demo_system__DOT__rst_core_n)
         | (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n ^ vlTOPp->__Vchglast__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n));
    VL_DEBUG_IF( if(__req && ((vlTOPp->ibex_demo_system__DOT__rst_core_n ^ vlTOPp->__Vchglast__TOP__ibex_demo_system__DOT__rst_core_n))) VL_DBG_MSGF("        CHANGE: system_verilog_files/src/ibex_demo_system.sv:140: ibex_demo_system.rst_core_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n ^ vlTOPp->__Vchglast__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n))) VL_DBG_MSGF("        CHANGE: system_verilog_files/src//dmi_jtag.sv:50: ibex_demo_system.g_dm_top.u_dm_top.dap.trst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__ibex_demo_system__DOT__rst_core_n 
        = vlTOPp->ibex_demo_system__DOT__rst_core_n;
    vlTOPp->__Vchglast__TOP__ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n 
        = vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vibex_demo_system::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_demo_system::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_sys_i & 0xfeU))) {
        Verilated::overWidthError("clk_sys_i");}
    if (VL_UNLIKELY((rst_sys_ni & 0xfeU))) {
        Verilated::overWidthError("rst_sys_ni");}
    if (VL_UNLIKELY((uart_rx_i & 0xfeU))) {
        Verilated::overWidthError("uart_rx_i");}
    if (VL_UNLIKELY((spi_rx_i & 0xfeU))) {
        Verilated::overWidthError("spi_rx_i");}
}
#endif  // VL_DEBUG
