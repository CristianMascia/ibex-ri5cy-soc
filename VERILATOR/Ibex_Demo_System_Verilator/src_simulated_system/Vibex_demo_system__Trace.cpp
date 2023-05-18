// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vibex_demo_system__Syms.h"


void Vibex_demo_system::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vibex_demo_system__Syms* __restrict vlSymsp = static_cast<Vibex_demo_system__Syms*>(userp);
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vibex_demo_system::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vibex_demo_system__Syms* __restrict vlSymsp = static_cast<Vibex_demo_system__Syms*>(userp);
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+4,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+5,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[5]),32);
            tracep->chgIData(oldp+6,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[6]),32);
            tracep->chgIData(oldp+7,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_base[7]),32);
            tracep->chgIData(oldp+8,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+9,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+10,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+11,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+12,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+13,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[5]),32);
            tracep->chgIData(oldp+14,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[6]),32);
            tracep->chgIData(oldp+15,(vlTOPp->ibex_demo_system__DOT__cfg_device_addr_mask[7]),32);
            tracep->chgIData(oldp+16,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+17,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+18,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+19,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[3]),32);
            tracep->chgIData(oldp+20,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[4]),32);
            tracep->chgIData(oldp+21,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[5]),32);
            tracep->chgIData(oldp+22,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[6]),32);
            tracep->chgIData(oldp+23,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[7]),32);
            tracep->chgIData(oldp+24,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+25,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+26,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+27,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[3]),32);
            tracep->chgIData(oldp+28,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[4]),32);
            tracep->chgIData(oldp+29,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[5]),32);
            tracep->chgIData(oldp+30,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[6]),32);
            tracep->chgIData(oldp+31,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[7]),32);
            tracep->chgIData(oldp+32,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[0]),22);
            tracep->chgIData(oldp+33,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_tag_rdata[1]),22);
            tracep->chgQData(oldp+34,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[0]),64);
            tracep->chgQData(oldp+36,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__ic_data_rdata[1]),64);
            tracep->chgIData(oldp+38,(vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[0]),22);
            tracep->chgIData(oldp+39,(vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_tag_rdata_i[1]),22);
            tracep->chgQData(oldp+40,(vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[0]),64);
            tracep->chgQData(oldp+42,(vlTOPp->ibex_demo_system__DOT__u_top__DOT____Vcellinp__u_ibex_core__ic_data_rdata_i[1]),64);
            tracep->chgQData(oldp+44,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+46,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+48,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+50,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
            tracep->chgBit(oldp+52,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [0U] >> 5U))));
            tracep->chgCData(oldp+53,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                             [0U] >> 3U))),2);
            tracep->chgBit(oldp+54,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [0U] >> 2U))));
            tracep->chgBit(oldp+55,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [0U] >> 1U))));
            tracep->chgBit(oldp+56,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U])));
            tracep->chgBit(oldp+57,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [1U] >> 5U))));
            tracep->chgCData(oldp+58,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                             [1U] >> 3U))),2);
            tracep->chgBit(oldp+59,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [1U] >> 2U))));
            tracep->chgBit(oldp+60,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [1U] >> 1U))));
            tracep->chgBit(oldp+61,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U])));
            tracep->chgBit(oldp+62,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [2U] >> 5U))));
            tracep->chgCData(oldp+63,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                             [2U] >> 3U))),2);
            tracep->chgBit(oldp+64,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [2U] >> 2U))));
            tracep->chgBit(oldp+65,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [2U] >> 1U))));
            tracep->chgBit(oldp+66,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U])));
            tracep->chgBit(oldp+67,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [3U] >> 5U))));
            tracep->chgCData(oldp+68,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                             [3U] >> 3U))),2);
            tracep->chgBit(oldp+69,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [3U] >> 2U))));
            tracep->chgBit(oldp+70,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                           [3U] >> 1U))));
            tracep->chgBit(oldp+71,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U])));
            tracep->chgBit(oldp+72,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
            tracep->chgBit(oldp+73,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
            tracep->chgBit(oldp+74,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
            tracep->chgQData(oldp+75,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+77,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+79,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+81,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
            tracep->chgBit(oldp+83,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [0U] >> 5U))));
            tracep->chgCData(oldp+84,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                             [0U] >> 3U))),2);
            tracep->chgBit(oldp+85,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [0U] >> 2U))));
            tracep->chgBit(oldp+86,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [0U] >> 1U))));
            tracep->chgBit(oldp+87,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [0U])));
            tracep->chgBit(oldp+88,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [1U] >> 5U))));
            tracep->chgCData(oldp+89,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                             [1U] >> 3U))),2);
            tracep->chgBit(oldp+90,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [1U] >> 2U))));
            tracep->chgBit(oldp+91,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [1U] >> 1U))));
            tracep->chgBit(oldp+92,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [1U])));
            tracep->chgBit(oldp+93,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [2U] >> 5U))));
            tracep->chgCData(oldp+94,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                             [2U] >> 3U))),2);
            tracep->chgBit(oldp+95,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [2U] >> 2U))));
            tracep->chgBit(oldp+96,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [2U] >> 1U))));
            tracep->chgBit(oldp+97,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [2U])));
            tracep->chgBit(oldp+98,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                           [3U] >> 5U))));
            tracep->chgCData(oldp+99,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                             [3U] >> 3U))),2);
            tracep->chgBit(oldp+100,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [3U] >> 2U))));
            tracep->chgBit(oldp+101,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+102,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U])));
            tracep->chgIData(oldp+103,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[0]),22);
            tracep->chgIData(oldp+104,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_tag_rdata_i[1]),22);
            tracep->chgQData(oldp+105,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[0]),64);
            tracep->chgQData(oldp+107,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__if_stage_i__ic_data_rdata_i[1]),64);
            tracep->chgBit(oldp+109,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                     [0U]));
            tracep->chgBit(oldp+110,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                     [1U]));
            tracep->chgIData(oldp+111,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
            tracep->chgIData(oldp+112,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
            tracep->chgQData(oldp+113,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
            tracep->chgQData(oldp+115,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
            tracep->chgBit(oldp+117,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+118,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
            tracep->chgIData(oldp+119,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
            tracep->chgIData(oldp+120,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0]),32);
            tracep->chgIData(oldp+121,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1]),32);
            tracep->chgIData(oldp+122,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
            tracep->chgBit(oldp+123,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                     [2U]));
            tracep->chgBit(oldp+124,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [0U] >> 5U))));
            tracep->chgCData(oldp+125,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+126,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [0U] >> 2U))));
            tracep->chgBit(oldp+127,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [0U] >> 1U))));
            tracep->chgBit(oldp+128,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [0U])));
            tracep->chgBit(oldp+129,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [1U] >> 5U))));
            tracep->chgCData(oldp+130,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+131,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [1U] >> 2U))));
            tracep->chgBit(oldp+132,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [1U] >> 1U))));
            tracep->chgBit(oldp+133,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [1U])));
            tracep->chgBit(oldp+134,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [2U] >> 5U))));
            tracep->chgCData(oldp+135,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+136,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [2U] >> 2U))));
            tracep->chgBit(oldp+137,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [2U] >> 1U))));
            tracep->chgBit(oldp+138,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [2U])));
            tracep->chgBit(oldp+139,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [3U] >> 5U))));
            tracep->chgCData(oldp+140,((3U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                              [3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+141,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [3U] >> 2U))));
            tracep->chgBit(oldp+142,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                            [3U] >> 1U))));
            tracep->chgBit(oldp+143,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                      [3U])));
            tracep->chgQData(oldp+144,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
            tracep->chgQData(oldp+146,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
            tracep->chgQData(oldp+148,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2]),34);
            tracep->chgQData(oldp+150,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3]),34);
            tracep->chgIData(oldp+152,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+153,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+154,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+155,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+156,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+157,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+158,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+159,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+160,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+161,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+162,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+163,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+164,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+165,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+166,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+167,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+168,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+169,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+170,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+171,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+172,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+173,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+174,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+175,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+176,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+177,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+178,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+179,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+180,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+181,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+182,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+183,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+184,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+185,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+186,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+187,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+188,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+189,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+190,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+191,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+192,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+193,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+194,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+195,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+196,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+197,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+198,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+199,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+200,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+201,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+202,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+203,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+204,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+205,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+206,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+207,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+208,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+209,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+210,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+211,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+212,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+213,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+214,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+215,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgQData(oldp+216,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+218,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+220,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+222,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+224,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+226,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+228,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+230,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+232,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgIData(oldp+234,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_wmask),32);
            tracep->chgCData(oldp+235,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__b_wmask),4);
            tracep->chgBit(oldp+236,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__unnamedblk3__DOT__show_mem_paths));
            tracep->chgCData(oldp+237,((0xffU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+238,((0xfU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+239,((7U & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x11U)))),3);
            tracep->chgBit(oldp+240,((1U & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                    >> 0x10U)))));
            tracep->chgCData(oldp+241,((0xfU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0xcU)))),4);
            tracep->chgSData(oldp+242,((0xfffU & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned))),12);
            tracep->chgCData(oldp+243,((0xffU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+244,((0xfU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+245,((7U & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                      >> 0x31U)))),3);
            tracep->chgBit(oldp+246,((1U & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                    >> 0x30U)))));
            tracep->chgCData(oldp+247,((0xfU & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                        >> 0x2cU)))),4);
            tracep->chgSData(oldp+248,((0xfffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartinfo_aligned 
                                                          >> 0x20U)))),12);
            tracep->chgBit(oldp+249,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__trst_n));
            tracep->chgBit(oldp+250,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_dr));
            tracep->chgBit(oldp+251,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_dr));
            tracep->chgBit(oldp+252,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_dr));
            tracep->chgBit(oldp+253,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_select));
            tracep->chgBit(oldp+254,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_select));
            tracep->chgCData(oldp+255,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
            tracep->chgCData(oldp+256,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
            tracep->chgCData(oldp+257,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
            tracep->chgBit(oldp+258,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir));
            tracep->chgBit(oldp+259,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir));
            tracep->chgBit(oldp+260,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir));
            tracep->chgIData(oldp+261,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
            tracep->chgBit(oldp+262,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select));
            tracep->chgBit(oldp+263,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select));
            tracep->chgBit(oldp+264,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+265,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_d),2);
            tracep->chgCData(oldp+266,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_q),2);
            tracep->chgSData(oldp+267,((0x3fffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                                   >> 0x12U))),14);
            tracep->chgBit(oldp+268,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                            >> 0x11U))));
            tracep->chgBit(oldp+269,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                            >> 0x10U))));
            tracep->chgBit(oldp+270,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                            >> 0xfU))));
            tracep->chgCData(oldp+271,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+272,((3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                              >> 0xaU))),2);
            tracep->chgCData(oldp+273,((0x3fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+274,((0xfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_d)),4);
            tracep->chgSData(oldp+275,((0x3fffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                                   >> 0x12U))),14);
            tracep->chgBit(oldp+276,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+277,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+278,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                            >> 0xfU))));
            tracep->chgCData(oldp+279,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+280,((3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                              >> 0xaU))),2);
            tracep->chgCData(oldp+281,((0x3fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+282,((0xfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q)),4);
            tracep->chgBit(oldp+283,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q))));
            tracep->chgCData(oldp+284,((0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
                                                         >> 0x22U)))),7);
            tracep->chgCData(oldp+285,((3U & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req 
                                                      >> 0x20U)))),2);
            tracep->chgIData(oldp+286,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req)),32);
            tracep->chgBit(oldp+287,((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)))));
            tracep->chgBit(oldp+288,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req_valid));
            tracep->chgCData(oldp+289,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_q),3);
            tracep->chgQData(oldp+290,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_d),41);
            tracep->chgQData(oldp+292,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q),41);
            tracep->chgCData(oldp+294,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_d),7);
            tracep->chgCData(oldp+295,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__address_q),7);
            tracep->chgIData(oldp+296,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_q),32);
            tracep->chgCData(oldp+297,((0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                                         >> 0x22U)))),7);
            tracep->chgIData(oldp+298,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q 
                                                >> 2U))),32);
            tracep->chgCData(oldp+299,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q))),2);
            tracep->chgBit(oldp+300,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__error_dmi_busy));
            tracep->chgBit(oldp+301,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q)));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                             ? (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                             : ((1U 
                                                 == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                 ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                                 : 
                                                ((0x10U 
                                                  == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dtmcs_q
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dr_q)
                                                   : (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
            tracep->chgQData(oldp+303,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__dmi_req),41);
            tracep->chgCData(oldp+305,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk)
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q))))))),3);
            tracep->chgCData(oldp+306,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q),3);
            tracep->chgCData(oldp+307,((7U & ((IData)(1U) 
                                              + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q)))),3);
            tracep->chgCData(oldp+308,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_combi),3);
            tracep->chgCData(oldp+309,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync),3);
            tracep->chgCData(oldp+310,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q),3);
            tracep->chgBit(oldp+311,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q) 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+314,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_q))),2);
            tracep->chgCData(oldp+315,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync_q))),2);
            tracep->chgCData(oldp+316,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq),3);
            tracep->chgCData(oldp+317,((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                         == (4U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))))))),3);
            tracep->chgCData(oldp+318,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q),3);
            tracep->chgCData(oldp+319,((7U & ((IData)(1U) 
                                              + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))),3);
            tracep->chgCData(oldp+320,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi),3);
            tracep->chgCData(oldp+321,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync),3);
            tracep->chgBit(oldp+322,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q)))));
            tracep->chgBit(oldp+323,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q) 
                                            >> 2U))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi) 
                                            >> 2U))));
            tracep->chgCData(oldp+325,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))),2);
            tracep->chgCData(oldp+326,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi))),2);
            tracep->chgCData(oldp+327,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+328,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__interrupt_q));
            tracep->chgBit(oldp+329,(vlTOPp->ibex_demo_system__DOT__host_rvalid[0]));
            tracep->chgBit(oldp+330,(vlTOPp->ibex_demo_system__DOT__host_rvalid[1]));
            tracep->chgBit(oldp+331,(vlTOPp->ibex_demo_system__DOT__device_rvalid[0]));
            tracep->chgBit(oldp+332,(vlTOPp->ibex_demo_system__DOT__device_rvalid[1]));
            tracep->chgBit(oldp+333,(vlTOPp->ibex_demo_system__DOT__device_rvalid[2]));
            tracep->chgBit(oldp+334,(vlTOPp->ibex_demo_system__DOT__device_rvalid[3]));
            tracep->chgBit(oldp+335,(vlTOPp->ibex_demo_system__DOT__device_rvalid[4]));
            tracep->chgBit(oldp+336,(vlTOPp->ibex_demo_system__DOT__device_rvalid[5]));
            tracep->chgBit(oldp+337,(vlTOPp->ibex_demo_system__DOT__device_rvalid[6]));
            tracep->chgBit(oldp+338,(vlTOPp->ibex_demo_system__DOT__device_rvalid[7]));
            tracep->chgBit(oldp+339,(vlTOPp->ibex_demo_system__DOT__core_instr_sel_dbg));
            tracep->chgBit(oldp+340,(vlTOPp->ibex_demo_system__DOT__dbg_slave_rvalid));
            tracep->chgBit(oldp+341,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+342,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[0]));
            tracep->chgBit(oldp+343,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rvalid_o[1]));
            tracep->chgBit(oldp+344,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[0]));
            tracep->chgBit(oldp+345,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[1]));
            tracep->chgBit(oldp+346,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[2]));
            tracep->chgBit(oldp+347,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[3]));
            tracep->chgBit(oldp+348,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[4]));
            tracep->chgBit(oldp+349,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[5]));
            tracep->chgBit(oldp+350,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[6]));
            tracep->chgBit(oldp+351,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rvalid_i[7]));
            tracep->chgBit(oldp+352,(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_resp));
            tracep->chgCData(oldp+353,(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_resp),3);
            tracep->chgBit(oldp+354,(vlTOPp->ibex_demo_system__DOT__host_rvalid
                                     [0U]));
            tracep->chgBit(oldp+355,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_ram__a_rvalid_o));
            tracep->chgBit(oldp+356,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__b_rvalid_o));
            tracep->chgBit(oldp+357,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_gpio__device_rvalid_o));
            tracep->chgCData(oldp+358,((0xffU & vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q)),8);
            tracep->chgCData(oldp+359,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+360,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+361,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc),8);
            tracep->chgBit(oldp+362,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q));
            tracep->chgBit(oldp+363,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q));
            tracep->chgBit(oldp+364,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+365,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+366,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x10U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+367,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+368,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x10U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__0__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+369,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+370,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+371,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x11U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+372,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+373,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x11U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__1__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+374,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x12U))));
            tracep->chgBit(oldp+375,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+376,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x12U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+377,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+378,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x12U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__2__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+379,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x13U))));
            tracep->chgBit(oldp+380,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+381,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x13U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+382,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+383,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x13U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__3__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+384,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+385,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+386,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x14U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+387,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+388,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x14U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__4__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+389,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x15U))));
            tracep->chgBit(oldp+390,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+391,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x15U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+392,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+393,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x15U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__5__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+394,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x16U))));
            tracep->chgBit(oldp+395,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+396,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x16U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+397,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+398,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x16U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__6__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+399,((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                            >> 0x17U))));
            tracep->chgBit(oldp+400,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q));
            tracep->chgSData(oldp+401,(((((1U & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                 >> 0x17U)) 
                                          == (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q)) 
                                         | (0x1f4U 
                                            <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q)))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q))))),9);
            tracep->chgSData(oldp+402,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q),9);
            tracep->chgBit(oldp+403,((1U & ((0x1f4U 
                                             <= (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__cnt_q))
                                             ? (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x17U)
                                             : (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__genblk1__BRA__7__KET____DOT__dbnc__DOT__btn_q)))));
            tracep->chgBit(oldp+404,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_pwm__device_rvalid_o));
            tracep->chgCData(oldp+405,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+406,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+407,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+408,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+409,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+410,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+411,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+412,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+413,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+414,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+415,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+416,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+417,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+418,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+419,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+420,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+421,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+422,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+423,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+424,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+425,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+426,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__pulse_width_q),8);
            tracep->chgCData(oldp+427,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__counter_q),8);
            tracep->chgCData(oldp+428,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__pulse_width_q),8);
            tracep->chgBit(oldp+429,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__0__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+430,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__0__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+431,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__1__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+432,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__1__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+433,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__2__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+434,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__2__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+435,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__3__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+436,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__3__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+437,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__4__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+438,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__4__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+439,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__5__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+440,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__5__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+441,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__6__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+442,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__6__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+443,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__7__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+444,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__7__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+445,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__8__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+446,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__8__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+447,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__9__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+448,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__9__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+449,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__10__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+450,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__10__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+451,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT____Vcellout__gen_pwm__BRA__11__KET____DOT__u_pwm__modulated_o));
            tracep->chgCData(oldp+452,(vlTOPp->ibex_demo_system__DOT__u_pwm__DOT__gen_pwm__BRA__11__KET____DOT__u_pwm__DOT__counter),8);
            tracep->chgBit(oldp+453,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rvalid_q));
            tracep->chgIData(oldp+454,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rdata_q),32);
            tracep->chgCData(oldp+455,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_q),2);
            tracep->chgCData(oldp+456,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_q),3);
            tracep->chgCData(oldp+457,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_bit_counter_d),3);
            tracep->chgCData(oldp+458,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_q),3);
            tracep->chgBit(oldp+459,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_valid));
            tracep->chgSData(oldp+460,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q),9);
            tracep->chgSData(oldp+461,(((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))
                                         ? 0U : (0x1ffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))))),9);
            tracep->chgBit(oldp+462,((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q))));
            tracep->chgCData(oldp+463,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_q),2);
            tracep->chgCData(oldp+464,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_q),3);
            tracep->chgCData(oldp+465,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_bit_counter_d),3);
            tracep->chgCData(oldp+466,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_q),8);
            tracep->chgBit(oldp+467,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_next_byte));
            tracep->chgBit(oldp+468,(((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_baud_counter_q)) 
                                      & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_next_byte))));
            tracep->chgCData(oldp+469,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),8);
            tracep->chgBit(oldp+470,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+471,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 7U))));
            tracep->chgCData(oldp+472,((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),7);
            tracep->chgCData(oldp+473,((0x80U & ((~ 
                                                  ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   >> 7U)) 
                                                 << 7U))),8);
            tracep->chgCData(oldp+474,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),8);
            tracep->chgBit(oldp+475,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+476,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 7U))));
            tracep->chgCData(oldp+477,((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),7);
            tracep->chgCData(oldp+478,((0x80U & ((~ 
                                                  ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   >> 7U)) 
                                                 << 7U))),8);
            tracep->chgBit(oldp+479,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_spi__device_rvalid_o));
            tracep->chgCData(oldp+480,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__byte_data_o),8);
            tracep->chgBit(oldp+481,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__read_status_q));
            tracep->chgBit(oldp+482,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d));
            tracep->chgBit(oldp+483,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q));
            tracep->chgBit(oldp+484,(((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_d) 
                                      & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__next_tx_byte_q)))));
            tracep->chgCData(oldp+485,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),8);
            tracep->chgBit(oldp+486,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+487,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 7U))));
            tracep->chgCData(oldp+488,((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),7);
            tracep->chgCData(oldp+489,((0x80U & ((~ 
                                                  ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                   >> 7U)) 
                                                 << 7U))),8);
            tracep->chgBit(oldp+490,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count));
            tracep->chgBit(oldp+491,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck));
            tracep->chgBit(oldp+492,((1U <= (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__count))));
            tracep->chgBit(oldp+493,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_pos));
            tracep->chgBit(oldp+494,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__sck_neg));
            tracep->chgBit(oldp+495,((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q))));
            tracep->chgCData(oldp+496,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_q),2);
            tracep->chgCData(oldp+497,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_q),3);
            tracep->chgCData(oldp+498,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__bit_counter_d),3);
            tracep->chgCData(oldp+499,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_q),8);
            tracep->chgCData(oldp+500,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_d),8);
            tracep->chgCData(oldp+501,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__recieved_byte_q),8);
            tracep->chgBit(oldp+502,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_simulator_ctrl__rvalid_o));
            tracep->chgCData(oldp+503,(vlTOPp->ibex_demo_system__DOT__u_simulator_ctrl__DOT__sim_finish),3);
            tracep->chgIData(oldp+504,(vlTOPp->ibex_demo_system__DOT__u_simulator_ctrl__DOT__log_fd),32);
            tracep->chgBit(oldp+505,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__rvalid_q));
            tracep->chgQData(oldp+506,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q),64);
            tracep->chgQData(oldp+508,((1ULL + vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q)),64);
            tracep->chgQData(oldp+510,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q),64);
            tracep->chgBit(oldp+512,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+513,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__req));
            tracep->chgIData(oldp+514,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
            tracep->chgBit(oldp+515,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__we));
            tracep->chgIData(oldp+516,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q)),32);
            tracep->chgCData(oldp+517,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be),4);
            tracep->chgBit(oldp+518,(vlTOPp->ibex_demo_system__DOT__host_rvalid
                                     [1U]));
            tracep->chgBit(oldp+519,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q));
            tracep->chgBit(oldp+520,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q));
            tracep->chgBit(oldp+521,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q));
            tracep->chgCData(oldp+522,((0xffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                 >> 0x18U))),8);
            tracep->chgIData(oldp+523,((0xffffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),24);
            tracep->chgBit(oldp+524,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmdbusy));
            tracep->chgIData(oldp+525,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
            tracep->chgIData(oldp+526,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
            tracep->chgIData(oldp+527,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
            tracep->chgIData(oldp+528,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
            tracep->chgIData(oldp+529,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
            tracep->chgIData(oldp+530,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
            tracep->chgIData(oldp+531,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
            tracep->chgIData(oldp+532,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
            tracep->chgIData(oldp+533,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q)),32);
            tracep->chgIData(oldp+534,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+535,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel),20);
            tracep->chgIData(oldp+536,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_sba_csrs),32);
            tracep->chgBit(oldp+537,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+538,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x10U))));
            tracep->chgCData(oldp+539,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x11U))),3);
            tracep->chgBit(oldp+540,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xfU))));
            tracep->chgBit(oldp+541,((0U != (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q))));
            tracep->chgBit(oldp+542,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror_valid));
            tracep->chgCData(oldp+543,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sberror),3);
            tracep->chgCData(oldp+544,((0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U)))),7);
            tracep->chgCData(oldp+545,((3U & (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                      >> 0x20U)))),2);
            tracep->chgIData(oldp+546,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int)),32);
            tracep->chgBit(oldp+547,((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk)))));
            tracep->chgIData(oldp+548,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum0),32);
            tracep->chgIData(oldp+549,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum1),32);
            tracep->chgIData(oldp+550,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum2),32);
            tracep->chgIData(oldp+551,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__haltsum3),32);
            tracep->chgIData(oldp+552,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted),32);
            tracep->chgIData(oldp+553,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
            tracep->chgIData(oldp+554,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
            tracep->chgIData(oldp+555,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
            tracep->chgIData(oldp+556,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat1),32);
            tracep->chgIData(oldp+557,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat2),32);
            tracep->chgIData(oldp+558,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__halted_flat3),32);
            tracep->chgSData(oldp+559,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
            tracep->chgSData(oldp+560,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
            tracep->chgCData(oldp+561,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
            tracep->chgBit(oldp+562,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1fU))));
            tracep->chgBit(oldp+563,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1eU))));
            tracep->chgBit(oldp+564,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+565,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1cU))));
            tracep->chgBit(oldp+566,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+567,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x1aU))));
            tracep->chgSData(oldp+568,((0x3ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 0x10U))),10);
            tracep->chgSData(oldp+569,((0x3ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                  >> 6U))),10);
            tracep->chgCData(oldp+570,((3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                              >> 4U))),2);
            tracep->chgBit(oldp+571,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 3U))));
            tracep->chgBit(oldp+572,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 2U))));
            tracep->chgBit(oldp+573,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 1U))));
            tracep->chgBit(oldp+574,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgCData(oldp+575,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_q),3);
            tracep->chgSData(oldp+576,((0xffffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                   >> 0x10U))),16);
            tracep->chgCData(oldp+577,((0xfU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                >> 0xcU))),4);
            tracep->chgSData(oldp+578,((0xfffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
            tracep->chgCData(oldp+579,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0x1dU))),3);
            tracep->chgCData(oldp+580,((0x3fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 0x17U))),6);
            tracep->chgBit(oldp+581,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x16U))));
            tracep->chgBit(oldp+582,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x15U))));
            tracep->chgBit(oldp+583,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x14U))));
            tracep->chgBit(oldp+584,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0x10U))));
            tracep->chgBit(oldp+585,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 0xfU))));
            tracep->chgCData(oldp+586,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+587,((0x7fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                 >> 5U))),7);
            tracep->chgBit(oldp+588,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 4U))));
            tracep->chgBit(oldp+589,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 3U))));
            tracep->chgBit(oldp+590,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 2U))));
            tracep->chgBit(oldp+591,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                            >> 1U))));
            tracep->chgBit(oldp+592,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)));
            tracep->chgQData(oldp+593,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q),64);
            tracep->chgQData(oldp+595,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_q),64);
            tracep->chgBit(oldp+597,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q));
            tracep->chgCData(oldp+598,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_q),2);
            tracep->chgCData(oldp+599,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_q),2);
            tracep->chgCData(oldp+600,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_q),2);
            tracep->chgCData(oldp+601,((0x7fU & (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                         >> 0x22U)))),8);
            tracep->chgCData(oldp+602,((0xfU & ((0x7fU 
                                                 & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int 
                                                            >> 0x22U))) 
                                                - (IData)(4U)))),4);
            tracep->chgCData(oldp+603,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+604,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+605,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+606,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+607,((2U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                  >> 1U)) 
                                              << 1U))),2);
            tracep->chgCData(oldp+608,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_q),3);
            tracep->chgCData(oldp+609,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__be_mask),4);
            tracep->chgCData(oldp+610,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))),2);
            tracep->chgQData(oldp+611,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
            tracep->chgQData(oldp+613,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
            tracep->chgQData(oldp+615,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
            tracep->chgQData(oldp+617,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
            tracep->chgQData(oldp+619,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
            tracep->chgQData(oldp+621,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
            tracep->chgQData(oldp+623,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
            tracep->chgQData(oldp+625,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
            tracep->chgQData(oldp+627,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
            tracep->chgQData(oldp+629,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
            tracep->chgQData(oldp+631,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
            tracep->chgQData(oldp+633,((((QData)((IData)(
                                                         vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
            tracep->chgBit(oldp+635,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resume));
            tracep->chgBit(oldp+636,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__go));
            tracep->chgBit(oldp+637,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
            tracep->chgQData(oldp+638,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_q),64);
            tracep->chgBit(oldp+640,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_enable32_q));
            tracep->chgBit(oldp+641,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__hartsel)));
            tracep->chgBit(oldp+642,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q));
            tracep->chgBit(oldp+643,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x17U))));
            tracep->chgCData(oldp+644,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                              >> 0x14U))),3);
            tracep->chgBit(oldp+645,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x13U))));
            tracep->chgBit(oldp+646,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x12U))));
            tracep->chgBit(oldp+647,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x11U))));
            tracep->chgBit(oldp+648,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                            >> 0x10U))));
            tracep->chgSData(oldp+649,((0xffffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_q)),16);
            tracep->chgCData(oldp+650,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_q),2);
            tracep->chgQData(oldp+651,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__rdata_int),41);
            tracep->chgCData(oldp+653,((((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                         == (4U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))))))),3);
            tracep->chgCData(oldp+654,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q),3);
            tracep->chgCData(oldp+655,((7U & ((IData)(1U) 
                                              + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))),3);
            tracep->chgCData(oldp+656,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi),3);
            tracep->chgCData(oldp+657,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync),3);
            tracep->chgCData(oldp+658,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_q),3);
            tracep->chgCData(oldp+659,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_d),3);
            tracep->chgBit(oldp+660,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                      == (4U ^ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q)))));
            tracep->chgBit(oldp+661,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty_rclk));
            tracep->chgBit(oldp+662,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q) 
                                            >> 2U))));
            tracep->chgBit(oldp+663,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi) 
                                            >> 2U))));
            tracep->chgCData(oldp+664,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_q))),2);
            tracep->chgCData(oldp+665,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi))),2);
            tracep->chgCData(oldp+666,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq),3);
            tracep->chgCData(oldp+667,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_combi),3);
            tracep->chgCData(oldp+668,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync),3);
            tracep->chgCData(oldp+669,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q),3);
            tracep->chgCData(oldp+670,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_q),3);
            tracep->chgBit(oldp+671,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q) 
                                            >> 2U))));
            tracep->chgCData(oldp+672,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q))),2);
            tracep->chgCData(oldp+673,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq),3);
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [2U] | vlTOPp->__Vm_traceActivity
                          [3U]) | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgIData(oldp+674,(vlTOPp->ibex_demo_system__DOT__device_rdata[0]),32);
            tracep->chgIData(oldp+675,(vlTOPp->ibex_demo_system__DOT__device_rdata[1]),32);
            tracep->chgIData(oldp+676,(vlTOPp->ibex_demo_system__DOT__device_rdata[2]),32);
            tracep->chgIData(oldp+677,(vlTOPp->ibex_demo_system__DOT__device_rdata[3]),32);
            tracep->chgIData(oldp+678,(vlTOPp->ibex_demo_system__DOT__device_rdata[4]),32);
            tracep->chgIData(oldp+679,(vlTOPp->ibex_demo_system__DOT__device_rdata[5]),32);
            tracep->chgIData(oldp+680,(vlTOPp->ibex_demo_system__DOT__device_rdata[6]),32);
            tracep->chgIData(oldp+681,(vlTOPp->ibex_demo_system__DOT__device_rdata[7]),32);
            tracep->chgCData(oldp+682,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
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
                                                           << 3U))))))),8);
            tracep->chgCData(oldp+683,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0U : (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x18U 
                                                       & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                          << 3U)))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           >> 2U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x18U 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 3U))))) 
                                                    | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                       (0x1fU 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           >> 2U))] 
                                                       >> 
                                                       (0x18U 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 3U))))))),8);
            tracep->chgCData(oldp+684,(((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0U : ((0x3f7U 
                                                  >= 
                                                  (0x3f8U 
                                                   & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                      << 3U)))
                                                  ? 
                                                 (0xffU 
                                                  & (((0U 
                                                       == 
                                                       (0x18U 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           << 3U)))
                                                       ? 0U
                                                       : 
                                                      (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
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
                                                        >> 
                                                        (0x18U 
                                                         & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                            << 3U)))))
                                                  : 0U))),8);
            tracep->chgIData(oldp+685,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                         ? 0U : (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                         >> 
                                                         (0x20U 
                                                          & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                             << 5U)))))),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+686,(((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)) 
                                      & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_valid))));
            tracep->chgBit(oldp+687,((1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgCData(oldp+688,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 0x80U : 
                                        (0xffU & ((
                                                   (1U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 7U)))
                                                   ? 
                                                  ((0x7fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                   : 
                                                  (((IData)(0x80U) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),8);
            tracep->chgBit(oldp+689,((1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgCData(oldp+690,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 0x80U : 
                                        (0xffU & ((
                                                   (1U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 7U)))
                                                   ? 
                                                  ((0x7fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                   : 
                                                  (((IData)(0x80U) 
                                                    - 
                                                    (0x7fU 
                                                     & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                   + 
                                                   (0x7fU 
                                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),8);
            tracep->chgBit(oldp+691,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                      & (0x7fU == (0x7fU 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))));
            tracep->chgIData(oldp+692,(((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__read_status_q)
                                         ? (((0U == 
                                              ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                                ? 0x7fU
                                                : (0x7fU 
                                                   & (((1U 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                           >> 7U)) 
                                                       == 
                                                       (1U 
                                                        & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                           >> 7U)))
                                                       ? 
                                                      ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                       : 
                                                      (((IData)(0x7fU) 
                                                        - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                       + (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))) 
                                             << 1U) 
                                            | (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full))
                                         : 0U)),32);
            tracep->chgBit(oldp+693,((0U == ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                              ? 0x7fU
                                              : (0x7fU 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 7U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 7U)))
                                                     ? 
                                                    ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                     - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                     : 
                                                    (((IData)(0x7fU) 
                                                      - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                     + (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))));
            tracep->chgCData(oldp+694,(((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 0x7fU : 
                                        (0x7fU & ((
                                                   (1U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                       >> 7U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       >> 7U)))
                                                   ? 
                                                  ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                   - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                                                   : 
                                                  (((IData)(0x7fU) 
                                                    - (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                                   + (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))))),7);
            tracep->chgBit(oldp+695,((1U & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full)) 
                                            & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))))));
            tracep->chgBit(oldp+696,(((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                      & (0x7eU == (0x7fU 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))));
            tracep->chgCData(oldp+697,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 2U : (3U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(2U) 
                                                      - 
                                                      (1U 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (1U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
            tracep->chgBit(oldp+698,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+699,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync_q))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q))))))),3);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            tracep->chgBit(oldp+700,(vlTOPp->ibex_demo_system__DOT__host_req[0]));
            tracep->chgBit(oldp+701,(vlTOPp->ibex_demo_system__DOT__host_req[1]));
            tracep->chgIData(oldp+702,(vlTOPp->ibex_demo_system__DOT__host_addr[0]),32);
            tracep->chgIData(oldp+703,(vlTOPp->ibex_demo_system__DOT__host_addr[1]),32);
            tracep->chgBit(oldp+704,(vlTOPp->ibex_demo_system__DOT__host_we[0]));
            tracep->chgBit(oldp+705,(vlTOPp->ibex_demo_system__DOT__host_we[1]));
            tracep->chgCData(oldp+706,(vlTOPp->ibex_demo_system__DOT__host_be[0]),4);
            tracep->chgCData(oldp+707,(vlTOPp->ibex_demo_system__DOT__host_be[1]),4);
            tracep->chgIData(oldp+708,(vlTOPp->ibex_demo_system__DOT__host_wdata[0]),32);
            tracep->chgIData(oldp+709,(vlTOPp->ibex_demo_system__DOT__host_wdata[1]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [0xcU]))) {
            tracep->chgBit(oldp+710,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
                                      & (0x7fU == (0x7fU 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))));
            tracep->chgQData(oldp+711,((((QData)((IData)(
                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                                           & (4U 
                                                              == 
                                                              (0x3ffU 
                                                               & vlTOPp->ibex_demo_system__DOT__device_addr
                                                               [4U])))
                                                           ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata
                                                           : (IData)(
                                                                     ((1ULL 
                                                                       + vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q) 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                                            & (0U 
                                                               == 
                                                               (0x3ffU 
                                                                & vlTOPp->ibex_demo_system__DOT__device_addr
                                                                [4U])))
                                                            ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata
                                                            : 
                                                           ((IData)(1U) 
                                                            + (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q))))))),64);
            tracep->chgQData(oldp+713,((((QData)((IData)(
                                                         ((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we)
                                                           ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata
                                                           : (IData)(
                                                                     (vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                      >> 0x20U))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we)
                                                            ? vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata
                                                            : (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q)))))),64);
            tracep->chgBit(oldp+715,((((vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_q 
                                        >= vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_q) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__interrupt_q)) 
                                      & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we) 
                                            | (IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we))))));
            tracep->chgBit(oldp+716,((1U & ((~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                >> 1U)) 
                                            & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned)))));
            tracep->chgBit(oldp+717,((1U & ((~ (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                >> 1U)) 
                                            & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+718,(vlTOPp->ibex_demo_system__DOT__device_err[0]));
            tracep->chgBit(oldp+719,(vlTOPp->ibex_demo_system__DOT__device_err[1]));
            tracep->chgBit(oldp+720,(vlTOPp->ibex_demo_system__DOT__device_err[2]));
            tracep->chgBit(oldp+721,(vlTOPp->ibex_demo_system__DOT__device_err[3]));
            tracep->chgBit(oldp+722,(vlTOPp->ibex_demo_system__DOT__device_err[4]));
            tracep->chgBit(oldp+723,(vlTOPp->ibex_demo_system__DOT__device_err[5]));
            tracep->chgBit(oldp+724,(vlTOPp->ibex_demo_system__DOT__device_err[6]));
            tracep->chgBit(oldp+725,(vlTOPp->ibex_demo_system__DOT__device_err[7]));
            tracep->chgIData(oldp+726,(vlTOPp->ibex_demo_system__DOT__mem_instr_rdata),32);
            tracep->chgBit(oldp+727,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[0]));
            tracep->chgBit(oldp+728,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[1]));
            tracep->chgBit(oldp+729,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[2]));
            tracep->chgBit(oldp+730,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[3]));
            tracep->chgBit(oldp+731,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[4]));
            tracep->chgBit(oldp+732,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[5]));
            tracep->chgBit(oldp+733,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[6]));
            tracep->chgBit(oldp+734,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_err_i[7]));
            tracep->chgIData(oldp+735,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_ram__a_rdata_o),32);
            tracep->chgIData(oldp+736,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__unnamedblk1__DOT__i),32);
            tracep->chgCData(oldp+737,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+738,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+739,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+740,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+741,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+742,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+743,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+744,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+745,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+746,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+747,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+748,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+749,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+750,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+751,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+752,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+753,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+754,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+755,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+756,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+757,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+758,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+759,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+760,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+761,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+762,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+763,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+764,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+765,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+766,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+767,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+768,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+769,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
            tracep->chgCData(oldp+770,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+771,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+772,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+773,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
            tracep->chgCData(oldp+774,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+775,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+776,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+777,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
            tracep->chgCData(oldp+778,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+779,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+780,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+781,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
            tracep->chgCData(oldp+782,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+783,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+784,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+785,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
            tracep->chgCData(oldp+786,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+787,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+788,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+789,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
            tracep->chgCData(oldp+790,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+791,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+792,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+793,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
            tracep->chgCData(oldp+794,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+795,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+796,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+797,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
            tracep->chgCData(oldp+798,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+799,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+800,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+801,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
            tracep->chgCData(oldp+802,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+803,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+804,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+805,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
            tracep->chgCData(oldp+806,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+807,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+808,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+809,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
            tracep->chgCData(oldp+810,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+811,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+812,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+813,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
            tracep->chgCData(oldp+814,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+815,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+816,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+817,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
            tracep->chgCData(oldp+818,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+819,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+820,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+821,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
            tracep->chgCData(oldp+822,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+823,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+824,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+825,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
            tracep->chgCData(oldp+826,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+827,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+828,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+829,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
            tracep->chgCData(oldp+830,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+831,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+832,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+833,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
            tracep->chgCData(oldp+834,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+835,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+836,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+837,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
            tracep->chgCData(oldp+838,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+839,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+840,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+841,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
            tracep->chgCData(oldp+842,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+843,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+844,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+845,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
            tracep->chgCData(oldp+846,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+847,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+848,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+849,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
            tracep->chgCData(oldp+850,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+851,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+852,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+853,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
            tracep->chgCData(oldp+854,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+855,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+856,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+857,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
            tracep->chgCData(oldp+858,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+859,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+860,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+861,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
            tracep->chgCData(oldp+862,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+863,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+864,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 0x18U))),8);
            tracep->chgCData(oldp+865,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+866,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+867,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+868,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+869,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+870,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+871,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+872,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+873,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+874,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+875,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+876,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+877,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+878,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+879,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+880,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+881,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+882,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+883,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+884,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+885,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+886,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+887,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+888,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+889,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+890,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+891,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+892,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+893,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+894,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+895,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+896,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+897,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
            tracep->chgCData(oldp+898,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+899,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+900,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+901,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
            tracep->chgCData(oldp+902,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+903,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+904,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+905,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
            tracep->chgCData(oldp+906,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+907,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+908,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+909,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
            tracep->chgCData(oldp+910,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+911,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+912,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+913,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
            tracep->chgCData(oldp+914,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+915,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+916,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+917,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
            tracep->chgCData(oldp+918,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+919,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+920,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+921,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
            tracep->chgCData(oldp+922,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+923,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+924,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+925,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
            tracep->chgCData(oldp+926,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+927,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+928,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+929,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
            tracep->chgCData(oldp+930,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+931,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+932,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+933,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
            tracep->chgCData(oldp+934,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+935,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+936,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+937,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
            tracep->chgCData(oldp+938,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+939,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+940,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+941,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
            tracep->chgCData(oldp+942,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+943,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+944,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+945,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
            tracep->chgCData(oldp+946,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+947,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+948,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+949,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
            tracep->chgCData(oldp+950,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+951,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+952,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+953,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
            tracep->chgCData(oldp+954,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+955,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+956,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+957,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
            tracep->chgCData(oldp+958,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+959,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+960,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+961,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
            tracep->chgCData(oldp+962,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+963,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+964,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+965,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
            tracep->chgCData(oldp+966,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+967,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+968,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+969,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
            tracep->chgCData(oldp+970,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+971,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+972,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+973,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
            tracep->chgCData(oldp+974,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+975,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+976,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+977,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
            tracep->chgCData(oldp+978,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+979,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+980,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+981,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
            tracep->chgCData(oldp+982,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+983,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+984,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+985,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
            tracep->chgCData(oldp+986,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+987,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+988,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+989,((0xffU & vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
            tracep->chgCData(oldp+990,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+991,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+992,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                 >> 0x18U))),8);
            tracep->chgCData(oldp+993,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+994,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+995,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+996,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                    >> 0x18U)))),8);
            tracep->chgCData(oldp+997,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+998,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 8U)))),8);
            tracep->chgCData(oldp+999,((0xffU & ((vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                    >> 0x10U)))),8);
            tracep->chgCData(oldp+1000,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1001,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+1002,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1003,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1004,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1005,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+1006,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1007,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1008,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1009,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+1010,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1011,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1012,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1013,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+1014,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1015,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1016,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1017,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+1018,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1019,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1020,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1021,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+1022,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1023,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1024,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1025,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U])),8);
            tracep->chgCData(oldp+1026,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1027,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1028,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[8U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1029,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U])),8);
            tracep->chgCData(oldp+1030,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1031,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1032,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[9U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1033,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU])),8);
            tracep->chgCData(oldp+1034,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1035,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1036,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xaU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1037,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU])),8);
            tracep->chgCData(oldp+1038,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1039,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1040,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xbU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1041,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU])),8);
            tracep->chgCData(oldp+1042,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1043,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1044,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xcU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1045,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU])),8);
            tracep->chgCData(oldp+1046,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1047,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1048,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xdU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1049,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU])),8);
            tracep->chgCData(oldp+1050,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1051,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1052,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xeU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1053,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU])),8);
            tracep->chgCData(oldp+1054,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1055,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1056,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0xfU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1057,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U])),8);
            tracep->chgCData(oldp+1058,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1059,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1060,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x10U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1061,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U])),8);
            tracep->chgCData(oldp+1062,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1063,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1064,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x11U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1065,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U])),8);
            tracep->chgCData(oldp+1066,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1067,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1068,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x12U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1069,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U])),8);
            tracep->chgCData(oldp+1070,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1071,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1072,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x13U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1073,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U])),8);
            tracep->chgCData(oldp+1074,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1075,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1076,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x14U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1077,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U])),8);
            tracep->chgCData(oldp+1078,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1079,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1080,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x15U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1081,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U])),8);
            tracep->chgCData(oldp+1082,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1083,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1084,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x16U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1085,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U])),8);
            tracep->chgCData(oldp+1086,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1087,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1088,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x17U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1089,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U])),8);
            tracep->chgCData(oldp+1090,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1091,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1092,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x18U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1093,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U])),8);
            tracep->chgCData(oldp+1094,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1095,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1096,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x19U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1097,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU])),8);
            tracep->chgCData(oldp+1098,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1099,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1100,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1aU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1101,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU])),8);
            tracep->chgCData(oldp+1102,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1103,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1104,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1bU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1105,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU])),8);
            tracep->chgCData(oldp+1106,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1107,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1108,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1cU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1109,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU])),8);
            tracep->chgCData(oldp+1110,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1111,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1112,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1dU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1113,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU])),8);
            tracep->chgCData(oldp+1114,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+1115,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                   << 0x10U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+1116,((0xffU & ((
                                                   vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                   << 8U) 
                                                  | (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1eU] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+1117,((0xffU & vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU])),8);
            tracep->chgCData(oldp+1118,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1119,((0xffU & (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[0x1fU] 
                                                  >> 0x10U))),8);
            tracep->chgIData(oldp+1120,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__rdata_q),32);
            tracep->chgBit(oldp+1121,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__error_q));
            tracep->chgIData(oldp+1122,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage)),32);
            tracep->chgIData(oldp+1123,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                                 >> 0x20U))),32);
            tracep->chgQData(oldp+1124,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rom_rdata),64);
            tracep->chgCData(oldp+1126,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
            tracep->chgQData(oldp+1127,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[0]),34);
            tracep->chgQData(oldp+1129,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[1]),34);
            tracep->chgQData(oldp+1131,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[2]),34);
            tracep->chgQData(oldp+1133,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[3]),34);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1135,(vlTOPp->ibex_demo_system__DOT__rst_core_n));
            tracep->chgBit(oldp+1136,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__clk));
            tracep->chgBit(oldp+1137,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_clock_gate_i__DOT__en_latch));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+1138,((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk)))));
            tracep->chgCData(oldp+1139,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__state_d),3);
            tracep->chgCData(oldp+1140,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_q),3);
            tracep->chgCData(oldp+1141,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_d),3);
            tracep->chgBit(oldp+1142,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr));
            tracep->chgCData(oldp+1143,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_q),3);
            tracep->chgCData(oldp+1144,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_d),3);
            tracep->chgBit(oldp+1145,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty_rclk));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+1146,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid));
            tracep->chgBit(oldp+1147,(vlTOPp->ibex_demo_system__DOT__host_err[0]));
            tracep->chgBit(oldp+1148,(vlTOPp->ibex_demo_system__DOT__host_err[1]));
            tracep->chgIData(oldp+1149,(vlTOPp->ibex_demo_system__DOT__core_instr_rdata),32);
            tracep->chgIData(oldp+1150,(vlTOPp->ibex_demo_system__DOT__dbg_slave_rdata),32);
            tracep->chgIData(oldp+1151,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgIData(oldp+1152,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_rdata_o[1]),32);
            tracep->chgBit(oldp+1153,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[0]));
            tracep->chgBit(oldp+1154,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_err_o[1]));
            tracep->chgIData(oldp+1155,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+1156,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+1157,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgIData(oldp+1158,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[3]),32);
            tracep->chgIData(oldp+1159,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[4]),32);
            tracep->chgIData(oldp+1160,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[5]),32);
            tracep->chgIData(oldp+1161,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[6]),32);
            tracep->chgIData(oldp+1162,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__device_rdata_i[7]),32);
            tracep->chgBit(oldp+1163,(vlTOPp->ibex_demo_system__DOT__host_err
                                      [0U]));
            tracep->chgSData(oldp+1164,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid),15);
            tracep->chgBit(oldp+1165,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1166,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1167,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1168,((0x7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mip)),15);
            tracep->chgSData(oldp+1169,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q),9);
            tracep->chgSData(oldp+1170,(((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))
                                          ? 0U : ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_start)
                                                   ? 0xd9U
                                                   : 
                                                  (0x1ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q)))))),9);
            tracep->chgBit(oldp+1171,((0x1b1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_baud_counter_q))));
            tracep->chgCData(oldp+1172,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_state_d),2);
            tracep->chgCData(oldp+1173,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_q),8);
            tracep->chgCData(oldp+1174,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_current_byte_d),8);
            tracep->chgBit(oldp+1175,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_start));
            tracep->chgBit(oldp+1176,((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rvalid)))));
            tracep->chgCData(oldp+1177,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_state_d),2);
            tracep->chgCData(oldp+1178,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_current_byte_d),8);
            tracep->chgBit(oldp+1179,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+1180,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+1181,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+1182,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),8);
            tracep->chgBit(oldp+1183,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1184,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1185,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 7U))));
            tracep->chgCData(oldp+1186,((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),7);
            tracep->chgBit(oldp+1187,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (0x7fU == 
                                          (0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
            tracep->chgCData(oldp+1188,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgCData(oldp+1189,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),8);
            tracep->chgBit(oldp+1190,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+1191,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1192,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 7U))));
            tracep->chgCData(oldp+1193,((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),7);
            tracep->chgCData(oldp+1194,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgBit(oldp+1195,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+1196,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+1197,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),8);
            tracep->chgBit(oldp+1198,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+1199,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1200,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 7U))));
            tracep->chgCData(oldp+1201,((0x7fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),7);
            tracep->chgCData(oldp+1202,((0x80U & ((~ 
                                                   ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                    >> 7U)) 
                                                  << 7U))),8);
            tracep->chgCData(oldp+1203,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__state_d),2);
            tracep->chgCData(oldp+1204,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_spi_host__DOT__current_byte_d),8);
            tracep->chgBit(oldp+1205,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbaddress_write_valid));
            tracep->chgBit(oldp+1206,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_read_valid));
            tracep->chgBit(oldp+1207,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__sbdata_write_valid));
            tracep->chgIData(oldp+1208,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+1209,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp))),2);
            tracep->chgBit(oldp+1210,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_req_ready));
            tracep->chgBit(oldp+1211,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp_valid));
            tracep->chgBit(oldp+1212,((1U & (~ (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk)))));
            tracep->chgCData(oldp+1213,((0xffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                                  >> 0x18U))),8);
            tracep->chgIData(oldp+1214,((0xffffffU 
                                         & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__command_d)),24);
            tracep->chgBit(oldp+1215,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d));
            tracep->chgSData(oldp+1216,((0xffffU & 
                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                          >> 0x10U))),16);
            tracep->chgCData(oldp+1217,((0xfU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0xcU))),4);
            tracep->chgSData(oldp+1218,((0xfffU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
            tracep->chgCData(oldp+1219,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1220,((0x3fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1221,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1222,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1223,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1224,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1225,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1226,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1227,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1228,((0x7fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1229,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 4U))));
            tracep->chgBit(oldp+1230,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1231,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 2U))));
            tracep->chgBit(oldp+1232,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 1U))));
            tracep->chgBit(oldp+1233,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs_d)));
            tracep->chgQData(oldp+1234,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgIData(oldp+1236,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
            tracep->chgIData(oldp+1237,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
            tracep->chgIData(oldp+1238,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
            tracep->chgIData(oldp+1239,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
            tracep->chgIData(oldp+1240,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
            tracep->chgIData(oldp+1241,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
            tracep->chgIData(oldp+1242,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
            tracep->chgIData(oldp+1243,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
            tracep->chgCData(oldp+1244,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1245,((0x3fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1246,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1247,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1248,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1249,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1250,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1251,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1252,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1253,((0x7fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1254,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 4U))));
            tracep->chgBit(oldp+1255,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 3U))));
            tracep->chgBit(oldp+1256,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 2U))));
            tracep->chgBit(oldp+1257,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 1U))));
            tracep->chgBit(oldp+1258,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbcs)));
            tracep->chgBit(oldp+1259,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+1260,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+1261,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1262,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgBit(oldp+1263,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+1264,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+1265,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+1266,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+1267,((2U & ((~ ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                   >> 1U)) 
                                               << 1U))),2);
            tracep->chgQData(oldp+1268,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__word_mux),64);
            tracep->chgBit(oldp+1270,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr));
            tracep->chgQData(oldp+1271,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dmi_rsp),34);
            tracep->chgCData(oldp+1273,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q),3);
            tracep->chgCData(oldp+1274,((7U & ((IData)(1U) 
                                               + (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q)))),3);
            tracep->chgCData(oldp+1275,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_d),3);
            tracep->chgBit(oldp+1276,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1277,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk));
            tracep->chgBit(oldp+1278,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1279,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_q))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+1280,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgQData(oldp+1281,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
            tracep->chgQData(oldp+1283,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
            tracep->chgBit(oldp+1285,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1286,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1287,((7U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1288,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
            tracep->chgIData(oldp+1289,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+1290,((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+1291,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+1292,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+1293,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1294,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1295,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1296,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+1297,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+1298,((3U & ((2U 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+1299,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgCData(oldp+1300,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
            tracep->chgBit(oldp+1301,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1302,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1303,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgIData(oldp+1304,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1305,((0xffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+1306,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+1307,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+1308,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+1309,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgQData(oldp+1310,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
            tracep->chgQData(oldp+1312,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
            tracep->chgBit(oldp+1314,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+1315,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+1316,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgQData(oldp+1317,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
            tracep->chgQData(oldp+1319,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
            tracep->chgBit(oldp+1321,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgBit(oldp+1322,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+1323,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+1324,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+1325,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+1326,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+1327,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgBit(oldp+1328,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgBit(oldp+1329,((1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                              >> 5U) 
                                             | (0U 
                                                == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
            tracep->chgQData(oldp+1330,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+1332,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
            tracep->chgQData(oldp+1334,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgIData(oldp+1336,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
            tracep->chgIData(oldp+1337,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
            tracep->chgIData(oldp+1338,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
            tracep->chgIData(oldp+1339,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
            tracep->chgIData(oldp+1340,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
            tracep->chgIData(oldp+1341,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
            tracep->chgQData(oldp+1342,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+1344,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1]),34);
            tracep->chgIData(oldp+1346,(((IData)(1U) 
                                         << (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+1347,((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                [1U])),32);
            tracep->chgIData(oldp+1348,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+1349,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgBit(oldp+1350,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
            tracep->chgCData(oldp+1351,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgBit(oldp+1352,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+1353,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgCData(oldp+1354,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+1355,((3U & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                       [1U] 
                                                       >> 0x20U)))),2);
            tracep->chgCData(oldp+1356,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+1357,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgCData(oldp+1358,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+1359,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+1360,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+1361,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+1362,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgBit(oldp+1363,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+1364,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgCData(oldp+1365,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
            tracep->chgBit(oldp+1366,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
            tracep->chgBit(oldp+1367,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
            tracep->chgBit(oldp+1368,((((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                        | (1U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
            tracep->chgBit(oldp+1369,((((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                        | (4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                       & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                       [2U])));
            tracep->chgBit(oldp+1370,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgBit(oldp+1371,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 4U))));
            tracep->chgCData(oldp+1372,((3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1373,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1374,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+1375,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1376,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1377,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1378,((0x7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
            tracep->chgIData(oldp+1379,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1380,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgBit(oldp+1381,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgCData(oldp+1382,((0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
            tracep->chgCData(oldp+1383,((0xfU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                 >> 0x1cU))),4);
            tracep->chgSData(oldp+1384,((0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+1385,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1386,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1387,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1388,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1389,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1390,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1391,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 9U))));
            tracep->chgCData(oldp+1392,((7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1393,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 5U))));
            tracep->chgBit(oldp+1394,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 4U))));
            tracep->chgBit(oldp+1395,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1396,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgCData(oldp+1397,((3U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
            tracep->chgIData(oldp+1398,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1399,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1400,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1401,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
            tracep->chgBit(oldp+1402,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d) 
                                             >> 2U))));
            tracep->chgCData(oldp+1403,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d))),2);
            tracep->chgIData(oldp+1404,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1405,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgBit(oldp+1406,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgCData(oldp+1407,((0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
            tracep->chgIData(oldp+1408,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
            tracep->chgSData(oldp+1409,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
            tracep->chgQData(oldp+1410,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+1412,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+1414,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+1416,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+1418,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+1420,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+1422,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+1424,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+1426,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+1428,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+1430,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+1432,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+1434,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+1436,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+1438,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+1440,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+1442,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+1444,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+1446,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+1448,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+1450,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+1452,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+1454,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+1456,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+1458,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+1460,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+1462,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+1464,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+1466,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+1468,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+1470,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+1472,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
            tracep->chgQData(oldp+1474,((1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
            tracep->chgQData(oldp+1476,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
            tracep->chgIData(oldp+1478,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1479,((0x28001048U 
                                         | (4U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                   >> (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                  << 2U)))),32);
            tracep->chgIData(oldp+1480,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                        [vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
            tracep->chgBit(oldp+1481,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 7U))));
            tracep->chgBit(oldp+1482,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgCData(oldp+1483,((7U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1484,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+1485,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1486,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
            tracep->chgQData(oldp+1487,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1489,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1491,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1493,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1495,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1497,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1499,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1501,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1503,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mhpmcounter_next),64);
            tracep->chgQData(oldp+1505,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgQData(oldp+1507,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgBit(oldp+1509,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
            tracep->chgCData(oldp+1510,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q),2);
            tracep->chgIData(oldp+1511,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
            tracep->chgIData(oldp+1512,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
            tracep->chgBit(oldp+1513,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                             >> (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)))));
            tracep->chgCData(oldp+1514,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1515,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgCData(oldp+1516,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
            tracep->chgIData(oldp+1517,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1518,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_d),3);
            tracep->chgCData(oldp+1519,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
            tracep->chgCData(oldp+1520,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
            tracep->chgQData(oldp+1521,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1523,((1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
            tracep->chgCData(oldp+1525,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
            tracep->chgQData(oldp+1526,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1528,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1530,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1532,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1534,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1536,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1538,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1540,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1542,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1544,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1546,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1548,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1550,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1552,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1554,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1556,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1558,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1560,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgQData(oldp+1562,((0xffffffffffULL 
                                         & (1ULL + vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter))),40);
            tracep->chgQData(oldp+1564,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),40);
            tracep->chgBit(oldp+1566,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+1567,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1568,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+1569,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1570,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
            tracep->chgIData(oldp+1571,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
            tracep->chgIData(oldp+1572,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
            tracep->chgIData(oldp+1573,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
            tracep->chgIData(oldp+1574,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
            tracep->chgIData(oldp+1575,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
            tracep->chgIData(oldp+1576,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
            tracep->chgIData(oldp+1577,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
            tracep->chgIData(oldp+1578,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
            tracep->chgIData(oldp+1579,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
            tracep->chgIData(oldp+1580,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
            tracep->chgIData(oldp+1581,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
            tracep->chgIData(oldp+1582,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
            tracep->chgIData(oldp+1583,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
            tracep->chgIData(oldp+1584,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
            tracep->chgIData(oldp+1585,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
            tracep->chgIData(oldp+1586,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
            tracep->chgIData(oldp+1587,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
            tracep->chgIData(oldp+1588,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
            tracep->chgIData(oldp+1589,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
            tracep->chgIData(oldp+1590,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
            tracep->chgIData(oldp+1591,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
            tracep->chgIData(oldp+1592,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
            tracep->chgIData(oldp+1593,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
            tracep->chgIData(oldp+1594,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
            tracep->chgIData(oldp+1595,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
            tracep->chgIData(oldp+1596,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
            tracep->chgIData(oldp+1597,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
            tracep->chgIData(oldp+1598,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
            tracep->chgIData(oldp+1599,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
            tracep->chgIData(oldp+1600,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
            tracep->chgIData(oldp+1601,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
            tracep->chgIData(oldp+1602,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1603,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1604,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1605,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1606,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1607,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1608,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1609,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1610,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1611,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1612,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1613,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1614,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1615,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1616,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1617,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1618,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1619,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1620,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1621,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1622,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1623,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1624,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1625,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1626,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1627,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1628,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1629,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1630,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1631,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
            tracep->chgIData(oldp+1632,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [7U] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            tracep->chgBit(oldp+1633,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering)))))));
            tracep->chgBit(oldp+1634,((1U & (~ (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                             >> 1U) 
                                                            | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
            tracep->chgBit(oldp+1635,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
            tracep->chgBit(oldp+1636,(((3U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                       & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                          | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
            tracep->chgBit(oldp+1637,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
            tracep->chgBit(oldp+1638,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q))) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
            tracep->chgBit(oldp+1639,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q))) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))));
            tracep->chgBit(oldp+1640,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)))));
            tracep->chgIData(oldp+1641,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                          ? (IData)(
                                                    vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                    [0U])
                                          : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
            tracep->chgBit(oldp+1642,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
            tracep->chgQData(oldp+1643,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                          ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                          : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                    << 2U))
                                              : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                     << 3U))
                                                  : 
                                                 ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                   ? 
                                                  (1ULL 
                                                   | ((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                      << 4U))
                                                   : 
                                                  (1ULL 
                                                   | ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                      << 1U))))))),33);
            tracep->chgBit(oldp+1645,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                        ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
            tracep->chgIData(oldp+1646,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                          ? (0xfffffffcU 
                                             & ((IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 3U)) 
                                                << 2U))
                                          : (IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))),32);
            tracep->chgBit(oldp+1647,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                       & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
            tracep->chgBit(oldp+1648,((((2U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out)) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
            tracep->chgBit(oldp+1649,(((3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                              >> 8U)) 
                                       > (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
            tracep->chgBit(oldp+1650,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [7U] | vlTOPp->__Vm_traceActivity
                         [0xcU]))) {
            tracep->chgCData(oldp+1651,(((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                           | ((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                              | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                          | (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))
                                          ? 5U : 0xaU)),4);
            tracep->chgBit(oldp+1652,(((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
            tracep->chgSData(oldp+1653,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                          ? (0x1ffdU 
                                             & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
            tracep->chgBit(oldp+1654,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
            tracep->chgBit(oldp+1655,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 2U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1656,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 3U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1657,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 4U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+1658,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 5U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 5U))))));
            tracep->chgBit(oldp+1659,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 6U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 6U))))));
            tracep->chgBit(oldp+1660,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 7U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 7U))))));
            tracep->chgBit(oldp+1661,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 8U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 8U))))));
            tracep->chgBit(oldp+1662,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 9U) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 9U))))));
            tracep->chgBit(oldp+1663,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xaU) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+1664,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xbU) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1665,((1U & ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xcU) 
                                             & (~ ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xcU))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgCData(oldp+1666,((0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+1667,((0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+1668,((0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))),5);
            tracep->chgIData(oldp+1669,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
            tracep->chgSData(oldp+1670,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
            tracep->chgBit(oldp+1671,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+1672,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err));
            tracep->chgBit(oldp+1673,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
            tracep->chgBit(oldp+1674,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+1675,((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         << 1U)),32);
            tracep->chgIData(oldp+1676,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_id),32);
            tracep->chgIData(oldp+1677,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+1678,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgIData(oldp+1679,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
            tracep->chgIData(oldp+1680,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
            tracep->chgIData(oldp+1681,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
            tracep->chgCData(oldp+1682,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
            tracep->chgIData(oldp+1683,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
            tracep->chgIData(oldp+1684,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | (0xfffU 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U)))),32);
            tracep->chgIData(oldp+1685,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
            tracep->chgIData(oldp+1686,(((0xffffe000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xdU)) 
                                         | ((0x1000U 
                                             & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 7U))))))),32);
            tracep->chgIData(oldp+1687,((0xfffff000U 
                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+1688,(((0xfff00000U 
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
                                                     >> 0x14U)))))),32);
            tracep->chgIData(oldp+1689,((0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),32);
            tracep->chgSData(oldp+1690,(((0x3e0U & 
                                          (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0xaU)) 
                                         | (0x1fU & 
                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 7U)))),10);
            tracep->chgCData(oldp+1691,((0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1bU))),5);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [8U] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            tracep->chgBit(oldp+1692,((1U & (((((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                                & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                               & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id))) 
                                             & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))))));
            tracep->chgBit(oldp+1693,(((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec))));
            tracep->chgBit(oldp+1694,(((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec))));
            tracep->chgBit(oldp+1695,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                 >> 1U) 
                                                & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                    >> 1U) 
                                                   & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
            tracep->chgBit(oldp+1696,((1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
            tracep->chgIData(oldp+1697,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                          ? 0U : (0x1fU 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xfU)))),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [8U] | vlTOPp->__Vm_traceActivity
                         [0xcU]))) {
            tracep->chgBit(oldp+1698,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
            tracep->chgBit(oldp+1699,((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                       [0U] | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                                               & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                               [1U]))));
            tracep->chgBit(oldp+1700,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err) 
                                       | (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                          [0U] | ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                   & (3U 
                                                      == 
                                                      (3U 
                                                       & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                                                  & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                                  [1U])))));
            tracep->chgIData(oldp+1701,((0x7fffffffU 
                                         & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                            + ((2U 
                                                & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                   << 1U)) 
                                               | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
            tracep->chgIData(oldp+1702,((0x7fffffffU 
                                         & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                             ? (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                >> 1U)
                                             : (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                + (
                                                   (2U 
                                                    & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgIData(oldp+1703,(vlTOPp->ibex_demo_system__DOT__host_rdata[0]),32);
            tracep->chgIData(oldp+1704,(vlTOPp->ibex_demo_system__DOT__host_rdata[1]),32);
            tracep->chgBit(oldp+1705,(vlTOPp->ibex_demo_system__DOT__core_instr_rvalid));
            tracep->chgBit(oldp+1706,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq));
            tracep->chgIData(oldp+1707,(vlTOPp->ibex_demo_system__DOT__host_rdata
                                        [0U]),32);
            tracep->chgIData(oldp+1708,(vlTOPp->ibex_demo_system__DOT__host_rdata
                                        [1U]),32);
            tracep->chgBit(oldp+1709,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq));
            tracep->chgBit(oldp+1710,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__clear_resumeack));
            tracep->chgIData(oldp+1711,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data),32);
            tracep->chgSData(oldp+1712,((0x1ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                                   >> 0x17U))),9);
            tracep->chgBit(oldp+1713,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1714,((3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                               >> 0x14U))),2);
            tracep->chgBit(oldp+1715,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1716,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1717,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1718,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1719,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1720,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1721,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1722,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1723,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1724,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1725,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 9U))));
            tracep->chgBit(oldp+1726,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 8U))));
            tracep->chgBit(oldp+1727,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 7U))));
            tracep->chgBit(oldp+1728,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 6U))));
            tracep->chgBit(oldp+1729,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 5U))));
            tracep->chgBit(oldp+1730,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 4U))));
            tracep->chgCData(oldp+1731,((0xfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmstatus)),4);
            tracep->chgBit(oldp+1732,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1733,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1734,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1735,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1736,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1737,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+1738,((0x3ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+1739,((0x3ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+1740,((3U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1741,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 3U))));
            tracep->chgBit(oldp+1742,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 2U))));
            tracep->chgBit(oldp+1743,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 1U))));
            tracep->chgBit(oldp+1744,((1U & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)));
            tracep->chgCData(oldp+1745,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1746,((0x1fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+1747,((0x7ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+1748,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1749,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1750,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+1751,((0xfU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1752,((0xfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__abstractcs)),4);
            tracep->chgQData(oldp+1753,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgBit(oldp+1755,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
            tracep->chgBit(oldp+1756,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__selected_hart));
            tracep->chgCData(oldp+1757,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
            tracep->chgCData(oldp+1758,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__resumereq),2);
            tracep->chgCData(oldp+1759,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [9U] | vlTOPp->__Vm_traceActivity
                         [0xcU]))) {
            tracep->chgCData(oldp+1760,(((IData)(vlTOPp->ibex_demo_system__DOT__core_instr_rvalid)
                                          ? (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+1761,(((IData)(vlTOPp->ibex_demo_system__DOT__core_instr_rvalid)
                                          ? (1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgIData(oldp+1762,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
            tracep->chgIData(oldp+1763,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
            tracep->chgIData(oldp+1764,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xaU])) {
            tracep->chgBit(oldp+1765,((0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)));
            tracep->chgBit(oldp+1766,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+1767,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err));
            tracep->chgBit(oldp+1768,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+1769,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err))));
            tracep->chgBit(oldp+1770,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1771,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1772,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1773,((0x7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)),15);
            tracep->chgBit(oldp+1774,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgBit(oldp+1775,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+1776,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
            tracep->chgCData(oldp+1777,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id),4);
            tracep->chgBit(oldp+1778,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1779,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgIData(oldp+1780,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
            tracep->chgIData(oldp+1781,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext),32);
            tracep->chgBit(oldp+1782,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgBit(oldp+1783,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
            tracep->chgBit(oldp+1784,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xaU] | vlTOPp->__Vm_traceActivity
                         [0xbU]))) {
            tracep->chgBit(oldp+1785,((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
            tracep->chgBit(oldp+1786,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)))));
            tracep->chgBit(oldp+1787,((1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
            tracep->chgBit(oldp+1788,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                          & ((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
            tracep->chgBit(oldp+1789,(((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                         | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                        | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                       | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err) 
                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err)))));
            tracep->chgCData(oldp+1790,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xbU])) {
            tracep->chgBit(oldp+1791,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out) 
                                       & (~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                          [2U]))));
            tracep->chgBit(oldp+1792,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgCData(oldp+1793,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+1794,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgIData(oldp+1795,(((1U & (IData)(
                                                       (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
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
                                          : ((1U & (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((0xffffff00U 
                                                  & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc 
                                                       >> 0x18U)))
                                              : vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc))),32);
            tracep->chgIData(oldp+1796,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[4U]),32);
            tracep->chgIData(oldp+1797,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[3U]),32);
            tracep->chgIData(oldp+1798,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[2U]),32);
            tracep->chgIData(oldp+1799,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[1U]),32);
            tracep->chgIData(oldp+1800,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__crash_dump_o[0U]),32);
            tracep->chgIData(oldp+1801,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc),32);
            tracep->chgIData(oldp+1802,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc),32);
            tracep->chgIData(oldp+1803,((~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_a_ecc)),32);
            tracep->chgIData(oldp+1804,((~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__rf_rdata_b_ecc)),32);
            tracep->chgBit(oldp+1805,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgQData(oldp+1806,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+1808,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
            tracep->chgCData(oldp+1810,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+1811,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__icache_inval));
            tracep->chgBit(oldp+1812,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgCData(oldp+1813,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+1814,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
            tracep->chgIData(oldp+1815,((IData)((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+1816,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+1817,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)))));
            tracep->chgCData(oldp+1818,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
            tracep->chgIData(oldp+1819,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+1820,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+1821,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex),32);
            tracep->chgBit(oldp+1822,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+1823,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+1824,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+1825,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+1826,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+1827,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+1828,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access));
            tracep->chgCData(oldp+1829,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op),2);
            tracep->chgSData(oldp+1830,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr),12);
            tracep->chgBit(oldp+1831,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
            tracep->chgCData(oldp+1832,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+1833,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+1834,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+1835,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_valid));
            tracep->chgBit(oldp+1836,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_req_int));
            tracep->chgBit(oldp+1837,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__data_req_out));
            tracep->chgBit(oldp+1838,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_id));
            tracep->chgBit(oldp+1839,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+1840,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
            tracep->chgIData(oldp+1841,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtval),32);
            tracep->chgBit(oldp+1842,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_mode_entering));
            tracep->chgBit(oldp+1843,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__debug_csr_save));
            tracep->chgBit(oldp+1844,((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
            tracep->chgBit(oldp+1845,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_jump));
            tracep->chgBit(oldp+1846,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_branch));
            tracep->chgBit(oldp+1847,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+1848,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_load));
            tracep->chgBit(oldp+1849,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_store));
            tracep->chgBit(oldp+1850,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id));
            tracep->chgBit(oldp+1851,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgCData(oldp+1852,((3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U))),2);
            tracep->chgCData(oldp+1853,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+1854,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
            tracep->chgCData(oldp+1855,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
            tracep->chgBit(oldp+1856,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgQData(oldp+1857,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+1859,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgBit(oldp+1861,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+1862,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+1863,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+1864,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+1865,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+1866,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+1867,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+1868,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+1869,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgBit(oldp+1870,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+1871,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+1872,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+1873,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+1874,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+1875,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+1876,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgIData(oldp+1877,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgBit(oldp+1878,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+1879,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+1880,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgBit(oldp+1881,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+1882,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+1883,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+1884,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+1885,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+1886,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+1887,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+1888,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+1889,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+1890,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+1891,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+1892,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+1893,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+1894,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+1895,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+1896,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgCData(oldp+1897,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+1898,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+1899,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+1900,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+1901,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+1902,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+1903,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+1904,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+1905,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+1906,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+1907,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+1908,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+1909,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+1910,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+1911,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+1912,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+1913,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgQData(oldp+1914,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+1916,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+1918,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+1919,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+1921,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+1923,((0U == (IData)(
                                                     (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgBit(oldp+1924,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgQData(oldp+1925,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+1927,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
            tracep->chgCData(oldp+1929,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgIData(oldp+1930,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+1931,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgBit(oldp+1933,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
            tracep->chgBit(oldp+1934,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
            tracep->chgBit(oldp+1935,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
            tracep->chgBit(oldp+1936,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgQData(oldp+1937,((0x1ffffffffULL 
                                         & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                             ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                             : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                 ? 
                                                (~ 
                                                 ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                  << 1U))
                                                 : 
                                                ((QData)((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                 << 1U))))),33);
            tracep->chgBit(oldp+1939,((1U & ((0x80000000U 
                                              & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 ^ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b))
                                              ? ((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                              : (~ (IData)(
                                                           (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 0x20U)))))));
            tracep->chgBit(oldp+1940,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+1941,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgBit(oldp+1942,((8U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgCData(oldp+1943,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+1944,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgIData(oldp+1945,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+1946,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+1948,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+1950,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+1951,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+1952,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgCData(oldp+1953,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+1954,((0x1fU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgBit(oldp+1955,(((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+1956,(((4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgIData(oldp+1957,((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1958,((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1959,((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+1960,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+1961,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
            tracep->chgQData(oldp+1962,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+1964,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1]),34);
            tracep->chgQData(oldp+1966,((0x7ffffffffULL 
                                         & (VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                            + VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
            tracep->chgQData(oldp+1968,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+1970,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+1971,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgBit(oldp+1972,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgBit(oldp+1973,((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
            tracep->chgQData(oldp+1974,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgQData(oldp+1976,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgQData(oldp+1978,((0x3ffffffffULL 
                                         & ((0x7ffffffffULL 
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
                                               & VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
            tracep->chgBit(oldp+1980,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+1981,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgBit(oldp+1982,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgIData(oldp+1983,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+1984,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgIData(oldp+1985,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgIData(oldp+1986,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+1987,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgCData(oldp+1989,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
            tracep->chgBit(oldp+1990,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+1991,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+1992,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgBit(oldp+1993,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+1994,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgCData(oldp+1995,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgBit(oldp+1996,((1U & (IData)(
                                                    (1ULL 
                                                     & ((VL_MULS_QQQ(35,35,35, 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                         + 
                                                         VL_EXTENDS_QQ(35,34, vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                        >> 0x22U))))));
            tracep->chgCData(oldp+1997,(((2U & ((IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x21U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgSData(oldp+1998,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+1999,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
            tracep->chgCData(oldp+2000,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgCData(oldp+2001,((3U & (IData)(
                                                      (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+2002,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgCData(oldp+2003,((0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr))),5);
            tracep->chgBit(oldp+2004,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
            tracep->chgBit(oldp+2005,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
            tracep->chgBit(oldp+2006,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
            tracep->chgBit(oldp+2007,(((3U == (3U & 
                                               ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                                >> 0xaU))) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
            tracep->chgCData(oldp+2008,((7U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr) 
                                               >> 5U))),3);
            tracep->chgCData(oldp+2009,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [0xbU] | vlTOPp->__Vm_traceActivity
                         [0xcU]))) {
            tracep->chgIData(oldp+2010,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                              ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                              : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)
                                          : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__result_ex)),32);
            tracep->chgBit(oldp+2011,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+2012,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+2013,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+2014,((((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op)) 
                                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access)) 
                                       & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
            tracep->chgBit(oldp+2015,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                                        & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_access)) 
                                       & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
            tracep->chgBit(oldp+2016,(((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
                                         & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready)) 
                                        & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set))) 
                                       | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear))))));
            tracep->chgBit(oldp+2017,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__core_instr_gnt)))));
            tracep->chgBit(oldp+2018,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                       | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
            tracep->chgBit(oldp+2019,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                       | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush) 
                                          & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+2020,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush) 
                                       & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
            tracep->chgBit(oldp+2021,(((7U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (7U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
            tracep->chgBit(oldp+2022,(((8U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (8U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
            tracep->chgBit(oldp+2023,(((9U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (9U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
            tracep->chgBit(oldp+2024,(((6U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                       & (6U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0xcU])) {
            tracep->chgBit(oldp+2025,(vlTOPp->ibex_demo_system__DOT__host_gnt[0]));
            tracep->chgBit(oldp+2026,(vlTOPp->ibex_demo_system__DOT__host_gnt[1]));
            tracep->chgBit(oldp+2027,(vlTOPp->ibex_demo_system__DOT__device_req[0]));
            tracep->chgBit(oldp+2028,(vlTOPp->ibex_demo_system__DOT__device_req[1]));
            tracep->chgBit(oldp+2029,(vlTOPp->ibex_demo_system__DOT__device_req[2]));
            tracep->chgBit(oldp+2030,(vlTOPp->ibex_demo_system__DOT__device_req[3]));
            tracep->chgBit(oldp+2031,(vlTOPp->ibex_demo_system__DOT__device_req[4]));
            tracep->chgBit(oldp+2032,(vlTOPp->ibex_demo_system__DOT__device_req[5]));
            tracep->chgBit(oldp+2033,(vlTOPp->ibex_demo_system__DOT__device_req[6]));
            tracep->chgBit(oldp+2034,(vlTOPp->ibex_demo_system__DOT__device_req[7]));
            tracep->chgIData(oldp+2035,(vlTOPp->ibex_demo_system__DOT__device_addr[0]),32);
            tracep->chgIData(oldp+2036,(vlTOPp->ibex_demo_system__DOT__device_addr[1]),32);
            tracep->chgIData(oldp+2037,(vlTOPp->ibex_demo_system__DOT__device_addr[2]),32);
            tracep->chgIData(oldp+2038,(vlTOPp->ibex_demo_system__DOT__device_addr[3]),32);
            tracep->chgIData(oldp+2039,(vlTOPp->ibex_demo_system__DOT__device_addr[4]),32);
            tracep->chgIData(oldp+2040,(vlTOPp->ibex_demo_system__DOT__device_addr[5]),32);
            tracep->chgIData(oldp+2041,(vlTOPp->ibex_demo_system__DOT__device_addr[6]),32);
            tracep->chgIData(oldp+2042,(vlTOPp->ibex_demo_system__DOT__device_addr[7]),32);
            tracep->chgBit(oldp+2043,(vlTOPp->ibex_demo_system__DOT__device_we[0]));
            tracep->chgBit(oldp+2044,(vlTOPp->ibex_demo_system__DOT__device_we[1]));
            tracep->chgBit(oldp+2045,(vlTOPp->ibex_demo_system__DOT__device_we[2]));
            tracep->chgBit(oldp+2046,(vlTOPp->ibex_demo_system__DOT__device_we[3]));
            tracep->chgBit(oldp+2047,(vlTOPp->ibex_demo_system__DOT__device_we[4]));
            tracep->chgBit(oldp+2048,(vlTOPp->ibex_demo_system__DOT__device_we[5]));
            tracep->chgBit(oldp+2049,(vlTOPp->ibex_demo_system__DOT__device_we[6]));
            tracep->chgBit(oldp+2050,(vlTOPp->ibex_demo_system__DOT__device_we[7]));
            tracep->chgCData(oldp+2051,(vlTOPp->ibex_demo_system__DOT__device_be[0]),4);
            tracep->chgCData(oldp+2052,(vlTOPp->ibex_demo_system__DOT__device_be[1]),4);
            tracep->chgCData(oldp+2053,(vlTOPp->ibex_demo_system__DOT__device_be[2]),4);
            tracep->chgCData(oldp+2054,(vlTOPp->ibex_demo_system__DOT__device_be[3]),4);
            tracep->chgCData(oldp+2055,(vlTOPp->ibex_demo_system__DOT__device_be[4]),4);
            tracep->chgCData(oldp+2056,(vlTOPp->ibex_demo_system__DOT__device_be[5]),4);
            tracep->chgCData(oldp+2057,(vlTOPp->ibex_demo_system__DOT__device_be[6]),4);
            tracep->chgCData(oldp+2058,(vlTOPp->ibex_demo_system__DOT__device_be[7]),4);
            tracep->chgIData(oldp+2059,(vlTOPp->ibex_demo_system__DOT__device_wdata[0]),32);
            tracep->chgIData(oldp+2060,(vlTOPp->ibex_demo_system__DOT__device_wdata[1]),32);
            tracep->chgIData(oldp+2061,(vlTOPp->ibex_demo_system__DOT__device_wdata[2]),32);
            tracep->chgIData(oldp+2062,(vlTOPp->ibex_demo_system__DOT__device_wdata[3]),32);
            tracep->chgIData(oldp+2063,(vlTOPp->ibex_demo_system__DOT__device_wdata[4]),32);
            tracep->chgIData(oldp+2064,(vlTOPp->ibex_demo_system__DOT__device_wdata[5]),32);
            tracep->chgIData(oldp+2065,(vlTOPp->ibex_demo_system__DOT__device_wdata[6]),32);
            tracep->chgIData(oldp+2066,(vlTOPp->ibex_demo_system__DOT__device_wdata[7]),32);
            tracep->chgBit(oldp+2067,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+2068,(vlTOPp->ibex_demo_system__DOT__core_instr_gnt));
            tracep->chgIData(oldp+2069,((0xfffffffcU 
                                         & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+2070,(vlTOPp->ibex_demo_system__DOT__mem_instr_req));
            tracep->chgBit(oldp+2071,(vlTOPp->ibex_demo_system__DOT__dbg_instr_req));
            tracep->chgBit(oldp+2072,(vlTOPp->ibex_demo_system__DOT__dbg_slave_req));
            tracep->chgIData(oldp+2073,(vlTOPp->ibex_demo_system__DOT__dbg_slave_addr),32);
            tracep->chgBit(oldp+2074,(vlTOPp->ibex_demo_system__DOT__dbg_slave_we));
            tracep->chgCData(oldp+2075,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [7U]),4);
            tracep->chgIData(oldp+2076,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [7U]),32);
            tracep->chgBit(oldp+2077,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[0]));
            tracep->chgBit(oldp+2078,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_req_i[1]));
            tracep->chgBit(oldp+2079,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgBit(oldp+2080,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__host_gnt_o[1]));
            tracep->chgIData(oldp+2081,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgIData(oldp+2082,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_addr_i[1]),32);
            tracep->chgBit(oldp+2083,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[0]));
            tracep->chgBit(oldp+2084,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_we_i[1]));
            tracep->chgCData(oldp+2085,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[0]),4);
            tracep->chgCData(oldp+2086,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_be_i[1]),4);
            tracep->chgIData(oldp+2087,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+2088,(vlTOPp->ibex_demo_system__DOT____Vcellinp__u_bus__host_wdata_i[1]),32);
            tracep->chgBit(oldp+2089,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+2090,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+2091,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[2]));
            tracep->chgBit(oldp+2092,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[3]));
            tracep->chgBit(oldp+2093,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[4]));
            tracep->chgBit(oldp+2094,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[5]));
            tracep->chgBit(oldp+2095,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[6]));
            tracep->chgBit(oldp+2096,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_req_o[7]));
            tracep->chgIData(oldp+2097,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+2098,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+2099,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgIData(oldp+2100,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[3]),32);
            tracep->chgIData(oldp+2101,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[4]),32);
            tracep->chgIData(oldp+2102,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[5]),32);
            tracep->chgIData(oldp+2103,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[6]),32);
            tracep->chgIData(oldp+2104,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_addr_o[7]),32);
            tracep->chgBit(oldp+2105,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+2106,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+2107,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[2]));
            tracep->chgBit(oldp+2108,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[3]));
            tracep->chgBit(oldp+2109,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[4]));
            tracep->chgBit(oldp+2110,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[5]));
            tracep->chgBit(oldp+2111,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[6]));
            tracep->chgBit(oldp+2112,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_we_o[7]));
            tracep->chgCData(oldp+2113,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[0]),4);
            tracep->chgCData(oldp+2114,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[1]),4);
            tracep->chgCData(oldp+2115,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[2]),4);
            tracep->chgCData(oldp+2116,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[3]),4);
            tracep->chgCData(oldp+2117,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[4]),4);
            tracep->chgCData(oldp+2118,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[5]),4);
            tracep->chgCData(oldp+2119,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[6]),4);
            tracep->chgCData(oldp+2120,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_be_o[7]),4);
            tracep->chgIData(oldp+2121,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+2122,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+2123,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgIData(oldp+2124,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[3]),32);
            tracep->chgIData(oldp+2125,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[4]),32);
            tracep->chgIData(oldp+2126,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[5]),32);
            tracep->chgIData(oldp+2127,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[6]),32);
            tracep->chgIData(oldp+2128,(vlTOPp->ibex_demo_system__DOT____Vcellout__u_bus__device_wdata_o[7]),32);
            tracep->chgBit(oldp+2129,(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+2130,(vlTOPp->ibex_demo_system__DOT__u_bus__DOT__device_sel_req),3);
            tracep->chgBit(oldp+2131,(vlTOPp->ibex_demo_system__DOT__host_gnt
                                      [0U]));
            tracep->chgBit(oldp+2132,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__double_fault_seen_o));
            tracep->chgIData(oldp+2133,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
            tracep->chgBit(oldp+2134,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear));
            tracep->chgBit(oldp+2135,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set));
            tracep->chgBit(oldp+2136,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 6U))));
            tracep->chgBit(oldp+2137,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                             >> 5U))));
            tracep->chgCData(oldp+2138,((0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause))),5);
            tracep->chgBit(oldp+2139,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ctrl_busy));
            tracep->chgBit(oldp+2140,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_op_en));
            tracep->chgIData(oldp+2141,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+2142,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready));
            tracep->chgBit(oldp+2143,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+2144,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_if));
            tracep->chgBit(oldp+2145,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+2146,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+2147,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+2148,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgIData(oldp+2149,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr),32);
            tracep->chgBit(oldp+2150,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
            tracep->chgIData(oldp+2151,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+2152,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+2153,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+2154,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+2155,((3U != (3U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgIData(oldp+2156,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc),32);
            tracep->chgCData(oldp+2157,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec),5);
            tracep->chgBit(oldp+2158,((1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                              >> 5U) 
                                             | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__exc_cause) 
                                                >> 6U)))));
            tracep->chgBit(oldp+2159,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+2160,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+2161,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                       & (~ (IData)(vlTOPp->ibex_demo_system__DOT__core_instr_gnt)))));
            tracep->chgBit(oldp+2162,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+2163,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+2164,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgIData(oldp+2165,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
            tracep->chgCData(oldp+2166,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+2167,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgCData(oldp+2168,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgCData(oldp+2169,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
            tracep->chgBit(oldp+2170,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgIData(oldp+2171,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+2172,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+2173,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+2174,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+2175,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+2176,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set) 
                                       | ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_in_ready) 
                                          & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw)))));
            tracep->chgBit(oldp+2177,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr)));
            tracep->chgBit(oldp+2178,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+2179,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+2180,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+2181,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+2182,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+2183,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+2184,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgCData(oldp+2185,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+2186,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+2187,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+2188,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+2189,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            tracep->chgBit(oldp+2190,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
            tracep->chgBit(oldp+2191,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+2192,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+2193,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+2194,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+2195,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgCData(oldp+2196,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgIData(oldp+2197,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgCData(oldp+2198,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgBit(oldp+2199,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 5U))));
            tracep->chgBit(oldp+2200,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 4U))));
            tracep->chgCData(oldp+2201,((3U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+2202,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+2203,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
            tracep->chgBit(oldp+2204,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+2205,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2206,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2207,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0xfU))));
            tracep->chgSData(oldp+2208,((0x7fffU & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d)),15);
            tracep->chgBit(oldp+2209,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+2210,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgIData(oldp+2211,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgBit(oldp+2212,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+2213,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                             >> 6U))));
            tracep->chgBit(oldp+2214,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                             >> 5U))));
            tracep->chgCData(oldp+2215,((0x1fU & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
            tracep->chgBit(oldp+2216,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgIData(oldp+2217,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgBit(oldp+2218,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgIData(oldp+2219,(((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                          ? 0x100001U
                                          : (1U | (0xffffff00U 
                                                   & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
            tracep->chgBit(oldp+2220,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgCData(oldp+2221,((0xfU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                 >> 0x1cU))),4);
            tracep->chgSData(oldp+2222,((0xfffU & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+2223,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2224,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2225,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2226,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2227,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2228,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2229,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 9U))));
            tracep->chgCData(oldp+2230,((7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                               >> 6U))),3);
            tracep->chgBit(oldp+2231,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 5U))));
            tracep->chgBit(oldp+2232,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 4U))));
            tracep->chgBit(oldp+2233,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 3U))));
            tracep->chgBit(oldp+2234,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 2U))));
            tracep->chgCData(oldp+2235,((3U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
            tracep->chgBit(oldp+2236,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgIData(oldp+2237,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+2238,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+2239,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+2240,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+2241,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgBit(oldp+2242,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgIData(oldp+2243,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+2244,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+2245,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+2246,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2247,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgBit(oldp+2248,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgBit(oldp+2249,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 7U))));
            tracep->chgBit(oldp+2250,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 6U))));
            tracep->chgCData(oldp+2251,((7U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2252,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 2U))));
            tracep->chgBit(oldp+2253,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                             >> 1U))));
            tracep->chgBit(oldp+2254,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
            tracep->chgBit(oldp+2255,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 7U))));
            tracep->chgBit(oldp+2256,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 6U))));
            tracep->chgCData(oldp+2257,((7U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2258,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgBit(oldp+2259,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+2260,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgBit(oldp+2261,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 7U))));
            tracep->chgBit(oldp+2262,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 6U))));
            tracep->chgCData(oldp+2263,((7U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2264,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 2U))));
            tracep->chgBit(oldp+2265,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata) 
                                             >> 1U))));
            tracep->chgBit(oldp+2266,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_wdata))));
            tracep->chgBit(oldp+2267,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
            tracep->chgIData(oldp+2268,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+2269,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgIData(oldp+2270,((0x7ffffU & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 0xdU))),19);
            tracep->chgIData(oldp+2271,((0x7ffffU & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 0xdU))),19);
            tracep->chgIData(oldp+2272,((0x7ffffU & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xdU))),19);
            tracep->chgBit(oldp+2273,((1U & ((2U <= vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                             | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int))));
            tracep->chgBit(oldp+2274,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+2275,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we),2);
            tracep->chgCData(oldp+2276,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we),2);
            tracep->chgCData(oldp+2277,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+2278,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgCData(oldp+2279,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
            tracep->chgIData(oldp+2280,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+2281,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+2282,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgQData(oldp+2283,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2285,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+2286,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+2288,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+2289,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
            tracep->chgQData(oldp+2290,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2292,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+2293,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
            tracep->chgCData(oldp+2295,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
            tracep->chgBit(oldp+2296,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 3U))));
            tracep->chgBit(oldp+2297,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 3U))));
            tracep->chgQData(oldp+2298,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2300,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2301,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2303,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2304,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 4U))));
            tracep->chgBit(oldp+2305,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 4U))));
            tracep->chgQData(oldp+2306,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2308,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2309,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2311,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2312,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 5U))));
            tracep->chgBit(oldp+2313,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 5U))));
            tracep->chgQData(oldp+2314,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2316,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2317,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2319,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2320,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 6U))));
            tracep->chgBit(oldp+2321,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 6U))));
            tracep->chgQData(oldp+2322,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2324,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2325,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2327,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2328,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 7U))));
            tracep->chgBit(oldp+2329,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 7U))));
            tracep->chgQData(oldp+2330,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2332,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2333,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2335,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2336,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 8U))));
            tracep->chgBit(oldp+2337,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 8U))));
            tracep->chgQData(oldp+2338,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2340,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2341,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2343,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2344,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 9U))));
            tracep->chgBit(oldp+2345,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 9U))));
            tracep->chgQData(oldp+2346,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2348,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2349,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2351,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2352,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2353,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xaU))));
            tracep->chgQData(oldp+2354,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2356,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2357,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2359,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2360,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2361,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xbU))));
            tracep->chgQData(oldp+2362,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2364,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2365,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2367,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2368,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2369,((1U & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xcU))));
            tracep->chgQData(oldp+2370,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+2372,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgQData(oldp+2373,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),40);
            tracep->chgIData(oldp+2375,((0xffffffU 
                                         & (IData)(
                                                   (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                    >> 0x28U)))),24);
            tracep->chgBit(oldp+2376,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))));
            tracep->chgBit(oldp+2377,((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))));
            tracep->chgBit(oldp+2378,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+2379,((1U & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) 
                                             >> 1U))));
            tracep->chgIData(oldp+2380,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
            tracep->chgBit(oldp+2381,((1U & vlTOPp->ibex_demo_system__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)));
            tracep->chgBit(oldp+2382,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [0U]));
            tracep->chgBit(oldp+2383,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [0U]));
            tracep->chgCData(oldp+2384,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [0U]),4);
            tracep->chgIData(oldp+2385,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [0U]),32);
            tracep->chgIData(oldp+2386,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [0U]),32);
            tracep->chgSData(oldp+2387,((0x3fffU & 
                                         (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [0U] >> 2U))),14);
            tracep->chgIData(oldp+2388,(((0x3fffcU 
                                          & (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [0U] >> 0xeU)) 
                                         | (3U & vlTOPp->ibex_demo_system__DOT__device_addr
                                            [0U]))),18);
            tracep->chgSData(oldp+2389,((0x3fffU & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                                          >> 2U))),14);
            tracep->chgIData(oldp+2390,((0x3fffcU & 
                                         (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr 
                                          >> 0xeU))),18);
            tracep->chgIData(oldp+2391,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__a_wmask),32);
            tracep->chgCData(oldp+2392,(vlTOPp->ibex_demo_system__DOT__u_ram__DOT__u_ram__DOT__a_wmask),4);
            tracep->chgBit(oldp+2393,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [1U]));
            tracep->chgIData(oldp+2394,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [1U]),32);
            tracep->chgBit(oldp+2395,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [1U]));
            tracep->chgCData(oldp+2396,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [1U]),4);
            tracep->chgIData(oldp+2397,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [1U]),32);
            tracep->chgSData(oldp+2398,((0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                                         [1U])),12);
            tracep->chgSData(oldp+2399,(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_o_d),16);
            tracep->chgBit(oldp+2400,(((vlTOPp->ibex_demo_system__DOT__device_req
                                        [1U] & vlTOPp->ibex_demo_system__DOT__device_we
                                        [1U]) & (0U 
                                                 == 
                                                 (0xfffU 
                                                  & vlTOPp->ibex_demo_system__DOT__device_addr
                                                  [1U])))));
            tracep->chgBit(oldp+2401,(((vlTOPp->ibex_demo_system__DOT__device_req
                                        [1U] & (~ vlTOPp->ibex_demo_system__DOT__device_we
                                                [1U])) 
                                       & (4U == (0xfffU 
                                                 & vlTOPp->ibex_demo_system__DOT__device_addr
                                                 [1U])))));
            tracep->chgBit(oldp+2402,(((vlTOPp->ibex_demo_system__DOT__device_req
                                        [1U] & (~ vlTOPp->ibex_demo_system__DOT__device_we
                                                [1U])) 
                                       & (8U == (0xfffU 
                                                 & vlTOPp->ibex_demo_system__DOT__device_addr
                                                 [1U])))));
            tracep->chgBit(oldp+2403,((1U & VL_REDXOR_32(
                                                         (0x3fffffU 
                                                          & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                             [1U] 
                                                             >> 0xaU))))));
            tracep->chgBit(oldp+2404,((1U & VL_REDXOR_32(
                                                         vlTOPp->ibex_demo_system__DOT__device_be
                                                         [1U]))));
            tracep->chgBit(oldp+2405,((1U & VL_REDXOR_32(
                                                         (0xffffU 
                                                          & (vlTOPp->ibex_demo_system__DOT__device_wdata
                                                             [1U] 
                                                             >> 0x10U))))));
            tracep->chgBit(oldp+2406,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [2U]));
            tracep->chgIData(oldp+2407,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [2U]),32);
            tracep->chgBit(oldp+2408,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [2U]));
            tracep->chgCData(oldp+2409,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [2U]),4);
            tracep->chgIData(oldp+2410,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [2U]),32);
            tracep->chgCData(oldp+2411,((0xffU & vlTOPp->ibex_demo_system__DOT__device_wdata
                                         [2U])),8);
            tracep->chgBit(oldp+2412,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2413,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2414,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2415,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (1U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2416,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (2U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2417,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (2U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2418,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2419,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2420,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (4U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2421,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (4U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2422,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2423,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2424,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (6U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2425,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (6U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2426,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (7U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2427,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (7U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2428,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (8U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2429,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (8U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2430,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (9U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2431,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (9U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2432,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2433,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (0xaU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2434,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (vlTOPp->ibex_demo_system__DOT__device_addr
                                          [2U] >> 2U))));
            tracep->chgBit(oldp+2435,((((vlTOPp->ibex_demo_system__DOT__device_req
                                         [2U] & vlTOPp->ibex_demo_system__DOT__device_we
                                         [2U]) & (0xbU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                      [2U] 
                                                      >> 3U)))) 
                                       & (~ (vlTOPp->ibex_demo_system__DOT__device_addr
                                             [2U] >> 2U)))));
            tracep->chgBit(oldp+2436,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [3U]));
            tracep->chgIData(oldp+2437,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [3U]),32);
            tracep->chgBit(oldp+2438,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [3U]));
            tracep->chgCData(oldp+2439,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [3U]),4);
            tracep->chgIData(oldp+2440,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [3U]),32);
            tracep->chgIData(oldp+2441,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rdata_d),32);
            tracep->chgBit(oldp+2442,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__device_rvalid_d));
            tracep->chgSData(oldp+2443,((0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                                         [3U])),12);
            tracep->chgBit(oldp+2444,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__rx_fifo_rready));
            tracep->chgBit(oldp+2445,(((vlTOPp->ibex_demo_system__DOT__device_req
                                        [3U] & vlTOPp->ibex_demo_system__DOT__device_be
                                        [3U]) & vlTOPp->ibex_demo_system__DOT__device_we
                                       [3U])));
            tracep->chgBit(oldp+2446,(((4U == (0xfffU 
                                               & vlTOPp->ibex_demo_system__DOT__device_addr
                                               [3U])) 
                                       & ((vlTOPp->ibex_demo_system__DOT__device_req
                                           [3U] & vlTOPp->ibex_demo_system__DOT__device_be
                                           [3U]) & 
                                          vlTOPp->ibex_demo_system__DOT__device_we
                                          [3U]))));
            tracep->chgBit(oldp+2447,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr));
            tracep->chgCData(oldp+2448,((0xffU & vlTOPp->ibex_demo_system__DOT__device_wdata
                                         [3U])),8);
            tracep->chgBit(oldp+2449,(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2450,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [5U]));
            tracep->chgIData(oldp+2451,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [5U]),32);
            tracep->chgBit(oldp+2452,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [5U]));
            tracep->chgCData(oldp+2453,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [5U]),4);
            tracep->chgIData(oldp+2454,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [5U]),32);
            tracep->chgSData(oldp+2455,((0xfffU & vlTOPp->ibex_demo_system__DOT__device_addr
                                         [5U])),12);
            tracep->chgBit(oldp+2456,(((vlTOPp->ibex_demo_system__DOT__device_req
                                        [5U] & (4U 
                                                == 
                                                (0xfffU 
                                                 & vlTOPp->ibex_demo_system__DOT__device_addr
                                                 [5U]))) 
                                       & (~ vlTOPp->ibex_demo_system__DOT__device_we
                                          [5U]))));
            tracep->chgBit(oldp+2457,(((vlTOPp->ibex_demo_system__DOT__device_req
                                        [5U] & (0U 
                                                == 
                                                (0xfffU 
                                                 & vlTOPp->ibex_demo_system__DOT__device_addr
                                                 [5U]))) 
                                       & vlTOPp->ibex_demo_system__DOT__device_we
                                       [5U])));
            tracep->chgCData(oldp+2458,((0xffU & vlTOPp->ibex_demo_system__DOT__device_wdata
                                         [5U])),8);
            tracep->chgBit(oldp+2459,(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+2460,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [6U]));
            tracep->chgBit(oldp+2461,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [6U]));
            tracep->chgCData(oldp+2462,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [6U]),4);
            tracep->chgIData(oldp+2463,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [6U]),32);
            tracep->chgIData(oldp+2464,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [6U]),32);
            tracep->chgCData(oldp+2465,((0xffU & (vlTOPp->ibex_demo_system__DOT__device_addr
                                                  [6U] 
                                                  >> 2U))),8);
            tracep->chgBit(oldp+2466,(vlTOPp->ibex_demo_system__DOT__device_req
                                      [4U]));
            tracep->chgIData(oldp+2467,(vlTOPp->ibex_demo_system__DOT__device_addr
                                        [4U]),32);
            tracep->chgBit(oldp+2468,(vlTOPp->ibex_demo_system__DOT__device_we
                                      [4U]));
            tracep->chgCData(oldp+2469,(vlTOPp->ibex_demo_system__DOT__device_be
                                        [4U]),4);
            tracep->chgIData(oldp+2470,(vlTOPp->ibex_demo_system__DOT__device_wdata
                                        [4U]),32);
            tracep->chgBit(oldp+2471,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we));
            tracep->chgBit(oldp+2472,(((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                       & (0U == (0x3ffU 
                                                 & vlTOPp->ibex_demo_system__DOT__device_addr
                                                 [4U])))));
            tracep->chgBit(oldp+2473,(((IData)(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__timer_we) 
                                       & (4U == (0x3ffU 
                                                 & vlTOPp->ibex_demo_system__DOT__device_addr
                                                 [4U])))));
            tracep->chgBit(oldp+2474,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_we));
            tracep->chgBit(oldp+2475,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_we));
            tracep->chgIData(oldp+2476,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtime_wdata),32);
            tracep->chgIData(oldp+2477,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimeh_wdata),32);
            tracep->chgIData(oldp+2478,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmp_wdata),32);
            tracep->chgIData(oldp+2479,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__mtimecmph_wdata),32);
            tracep->chgBit(oldp+2480,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__error_d));
            tracep->chgIData(oldp+2481,(vlTOPp->ibex_demo_system__DOT__u_timer__DOT__rdata_d),32);
            tracep->chgBit(oldp+2482,(vlTOPp->ibex_demo_system__DOT__host_gnt
                                      [1U]));
            tracep->chgBit(oldp+2483,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror_valid));
            tracep->chgCData(oldp+2484,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__cmderror),3);
            tracep->chgIData(oldp+2485,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o)),32);
            tracep->chgIData(oldp+2486,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT____Vcellout__i_dm_mem__data_o 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+2487,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__data_valid));
            tracep->chgCData(oldp+2488,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__cmderr_d),3);
            tracep->chgIData(oldp+2489,((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d)),32);
            tracep->chgIData(oldp+2490,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__data_d 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+2491,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+2492,((0x1fU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+2493,((0x7ffU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+2494,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2495,((1U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2496,((7U & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2497,((0xfU & (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2498,((0xfU & vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
            tracep->chgCData(oldp+2499,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+2500,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__going));
            tracep->chgBit(oldp+2501,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__exception));
            tracep->chgQData(oldp+2502,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgBit(oldp+2504,((1U & vlTOPp->ibex_demo_system__DOT__device_wdata
                                       [7U])));
            tracep->chgCData(oldp+2505,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned),2);
            tracep->chgCData(oldp+2506,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__halted_aligned),2);
            tracep->chgCData(oldp+2507,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
            tracep->chgBit(oldp+2508,((0x800U <= (0xfffU 
                                                  & vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))));
            tracep->chgCData(oldp+2509,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__state_d),2);
            tracep->chgQData(oldp+2510,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__data_bits),64);
            tracep->chgCData(oldp+2512,((0xffU & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata))),8);
            tracep->chgCData(oldp+2513,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2514,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2515,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2516,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+2517,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+2518,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2519,((0xffU & (IData)(
                                                         (vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                          >> 0x38U)))),8);
            tracep->chgQData(oldp+2520,((QData)((IData)(vlTOPp->ibex_demo_system__DOT__dbg_slave_addr))),64);
            tracep->chgIData(oldp+2522,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
        }
        tracep->chgBit(oldp+2523,(vlTOPp->clk_sys_i));
        tracep->chgBit(oldp+2524,(vlTOPp->rst_sys_ni));
        tracep->chgCData(oldp+2525,(vlTOPp->gp_i),8);
        tracep->chgSData(oldp+2526,(vlTOPp->gp_o),16);
        tracep->chgSData(oldp+2527,(vlTOPp->pwm_o),12);
        tracep->chgBit(oldp+2528,(vlTOPp->uart_rx_i));
        tracep->chgBit(oldp+2529,(vlTOPp->uart_tx_o));
        tracep->chgBit(oldp+2530,(vlTOPp->spi_rx_i));
        tracep->chgBit(oldp+2531,(vlTOPp->spi_tx_o));
        tracep->chgBit(oldp+2532,(vlTOPp->spi_sck_o));
        tracep->chgBit(oldp+2533,((1U & (~ (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                            | (0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs))))));
        tracep->chgCData(oldp+2534,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_busy_q),4);
        tracep->chgBit(oldp+2535,((1U & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                          | (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)) 
                                         | (0U != vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__irqs)))));
        tracep->chgBit(oldp+2536,((1U & VL_REDXOR_32(
                                                     (7U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__core_busy_q) 
                                                         >> 1U))))));
        tracep->chgIData(oldp+2537,(((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                                      ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext
                                      : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                                          ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext
                                          : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                  ? 
                                                 ((0xffffff00U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U)))
                                                  : 
                                                 ((0xffff0000U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 8U))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                                  ? 
                                                 ((0xff000000U 
                                                   & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                      [0U] 
                                                      << 0x18U)) 
                                                  | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                                  : 
                                                 vlTOPp->ibex_demo_system__DOT__host_rdata
                                                 [0U]))))),32);
        tracep->chgBit(oldp+2538,(((((0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                     & vlTOPp->ibex_demo_system__DOT__host_rvalid
                                     [0U]) & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                   & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
        tracep->chgBit(oldp+2539,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req) 
                                    | (0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   & (0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
        tracep->chgIData(oldp+2540,(((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                      ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                          ? 0x100080U
                                          : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? 0x100080U
                                              : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                      : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                          ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                              : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                          : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? (IData)(
                                                        (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 1U))
                                              : 0x100080U)))),32);
        tracep->chgBit(oldp+2541,((1U & ((4U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                          ? ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? 0x100080U
                                              : ((1U 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                  ? 0x100080U
                                                  : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                          : ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                  ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                                  : vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                              : ((1U 
                                                  & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                  ? (IData)(
                                                            (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 1U))
                                                  : 0x100080U))))));
        tracep->chgBit(oldp+2542,((1U & ((((vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                            & (3U == 
                                               (3U 
                                                & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) 
                                           & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                           [1U]) | 
                                          (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U) 
                                              & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))) 
                                         & (~ vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pmp_req_err
                                            [0U])))));
        tracep->chgIData(oldp+2543,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__pc_set)
                                       ? vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                                       : (0xfffffffcU 
                                          & vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+2544,(((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((0xffff0000U 
                                          & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U)))
                                      : ((0xffff0000U 
                                          & (vlTOPp->ibex_demo_system__DOT__core_instr_rdata 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U))))),32);
        tracep->chgBit(oldp+2545,((1U & ((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                             & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
        tracep->chgBit(oldp+2546,(((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                     | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw)) 
                                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                   & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__instr_valid_clear)))));
        tracep->chgCData(oldp+2547,(((0U != (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))
                                      ? 2U : (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                               & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                               ? 1U
                                               : ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq)
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                                    ? 4U
                                                    : 0U))))),3);
        tracep->chgBit(oldp+2548,((1U & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                          | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                         | (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 2U)))));
        tracep->chgBit(oldp+2549,((((3U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                    & (4U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns))) 
                                   & (((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                       | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                      | (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U)))));
        tracep->chgBit(oldp+2550,(((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__haltreq) 
                                   & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgIData(oldp+2551,(((2U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                      ? ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((0xffffff00U 
                                              & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                 [0U] 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U)))
                                          : ((0xffff0000U 
                                              & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                 [0U] 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 8U))))
                                      : ((1U & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((0xff000000U 
                                              & (vlTOPp->ibex_demo_system__DOT__host_rdata
                                                 [0U] 
                                                 << 0x18U)) 
                                             | vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                          : vlTOPp->ibex_demo_system__DOT__host_rdata
                                         [0U]))),32);
        tracep->chgBit(oldp+2552,(((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                                   & ((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                      | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
        tracep->chgBit(oldp+2553,(((~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                                   & (((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                       & vlTOPp->ibex_demo_system__DOT__host_err
                                       [0U]) | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
        tracep->chgBit(oldp+2554,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err) 
                                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err)) 
                                   & (~ (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)))));
        tracep->chgBit(oldp+2555,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_load_err) 
                                    | (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__lsu_store_err)) 
                                   & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
        tracep->chgIData(oldp+2556,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        tracep->chgIData(oldp+2557,(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        tracep->chgBit(oldp+2558,((((IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                    & (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                   & (0x7a0U == (IData)(vlTOPp->ibex_demo_system__DOT__u_top__DOT__u_ibex_core__DOT__csr_addr)))));
        tracep->chgIData(oldp+2559,(((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc_rd_en_q)
                                      ? (IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_dbnc)
                                      : ((IData)(vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_rd_en_q)
                                          ? (0xffU 
                                             & (vlTOPp->ibex_demo_system__DOT__u_gpio__DOT__gp_i_q 
                                                >> 0x10U))
                                          : (IData)(vlTOPp->gp_o)))),32);
        tracep->chgCData(oldp+2560,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
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
                                                     << 3U)))))),8);
        tracep->chgCData(oldp+2561,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0x1fU 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                              | (vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (0x1fU 
                                                  & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U))] 
                                                 >> 
                                                 (0x18U 
                                                  & ((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 3U)))))),8);
        tracep->chgBit(oldp+2562,(((IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                   & (0x7fU == (0x7fU 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_uart__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        tracep->chgCData(oldp+2563,(((0x3f7U >= (0x3f8U 
                                                 & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                      ? (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U)))
                                                    ? 0U
                                                    : 
                                                   (vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
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
                                                     >> 
                                                     (0x18U 
                                                      & ((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         << 3U)))))
                                      : 0U)),8);
        tracep->chgBit(oldp+2564,(((IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                   & (0x7eU == (0x7fU 
                                                & (IData)(vlTOPp->ibex_demo_system__DOT__u_spi__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
        tracep->chgIData(oldp+2565,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> (0x20U 
                                                 & ((IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 5U))))),32);
        tracep->chgIData(oldp+2566,((IData)((vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                             [(3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))] 
                                             >> 2U))),32);
        tracep->chgCData(oldp+2567,((3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                                  [
                                                  (3U 
                                                   & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))]))),2);
        tracep->chgIData(oldp+2568,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__data_d),32);
        tracep->chgQData(oldp+2569,(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage
                                    [(3U & (IData)(vlTOPp->ibex_demo_system__DOT__g_dm_top__DOT__u_dm_top__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_q))]),34);
    }
}

void Vibex_demo_system::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vibex_demo_system__Syms* __restrict vlSymsp = static_cast<Vibex_demo_system__Syms*>(userp);
    Vibex_demo_system* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
        vlTOPp->__Vm_traceActivity[8U] = 0U;
        vlTOPp->__Vm_traceActivity[9U] = 0U;
        vlTOPp->__Vm_traceActivity[0xaU] = 0U;
        vlTOPp->__Vm_traceActivity[0xbU] = 0U;
        vlTOPp->__Vm_traceActivity[0xcU] = 0U;
    }
}
