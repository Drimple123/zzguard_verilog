// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver___024root.h"

extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb814e978_0;
extern const VlWide<1026>/*32831:0*/ VTestDriver__ConstPool__CONST_h1b399a84_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_h55e2a60e_0;
extern const VlWide<4097>/*131103:0*/ VTestDriver__ConstPool__CONST_hb8146970_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3003(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3003\n"); );
    // Init
    VlWide<1026>/*32831:0*/ __Vtemp_2;
    VlWide<4097>/*131103:0*/ __Vtemp_3;
    VlWide<4097>/*131103:0*/ __Vtemp_4;
    VlWide<4097>/*131103:0*/ __Vtemp_5;
    VlWide<1026>/*32831:0*/ __Vtemp_6;
    VlWide<1026>/*32831:0*/ __Vtemp_7;
    VlWide<1026>/*32831:0*/ __Vtemp_8;
    VlWide<4097>/*131103:0*/ __Vtemp_9;
    VlWide<4097>/*131103:0*/ __Vtemp_10;
    VlWide<1026>/*32831:0*/ __Vtemp_11;
    VlWide<1026>/*32831:0*/ __Vtemp_12;
    VlWide<1026>/*32831:0*/ __Vtemp_13;
    VlWide<1026>/*32831:0*/ __Vtemp_14;
    // Body
    VL_EXTEND_WI(131075,4, __Vtemp_3, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN)
                                        ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode) 
                                                 << 1U))
                                        : 0U));
    VL_SHIFTL_WWI(131075,131075,16, __Vtemp_4, __Vtemp_3, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_5, VTestDriver__ConstPool__CONST_hb814e978_0, __Vtemp_4);
    VL_SEL_WWII(32832,131075, __Vtemp_6, __Vtemp_5, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_7, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN), __Vtemp_6, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_OR_W(1026, __Vtemp_8, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_opcodes, __Vtemp_7);
    VL_SHIFTL_WWI(131087,131087,16, __Vtemp_9, VTestDriver__ConstPool__CONST_h55e2a60e_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source) 
                   << 2U));
    VL_AND_W(4097, __Vtemp_10, VTestDriver__ConstPool__CONST_hb8146970_0, __Vtemp_9);
    VL_SEL_WWII(32832,131087, __Vtemp_11, __Vtemp_10, 0U, 0x8040U);
    VL_COND_WIWW(32832, __Vtemp_12, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT___GEN_38), __Vtemp_11, VTestDriver__ConstPool__CONST_h1b399a84_0);
    VL_NOT_W(1026, __Vtemp_13, __Vtemp_12);
    VL_AND_W(1026, __Vtemp_14, __Vtemp_8, __Vtemp_13);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full = 0U;
        VL_ASSIGN_W(32832,__Vtemp_2, VTestDriver__ConstPool__CONST_h1b399a84_0);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight 
            = (0x3ffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_1)
                              ? (0xffffU & ((IData)(1U) 
                                            << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source)))
                              : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_41)
                                            ? (0xffffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                                                      >> 4U))))
                                            : 0U))));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___d_first_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT___io_deq_valid_output)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__nodeOut_w_deq_q__DOT__do_enq;
        }
        VL_ASSIGN_W(32832,__Vtemp_2, __Vtemp_14);
    }
    VL_ASSIGN_W(32832,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__monitor__DOT__inflight_opcodes, __Vtemp_2);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3004(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3004\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_3[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                               << 1U)) : 0U);
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_4, __Vtemp_3, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    __Vtemp_7[0U] = 0xfU;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_8, __Vtemp_7, 
                  (0x3cU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                            >> 2U)));
    __Vtemp_12[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_1)
                       ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                                << 1U)) : 0U);
    __Vtemp_12[1U] = 0U;
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    __Vtemp_12[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_13, __Vtemp_12, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    __Vtemp_16[0U] = 0xfU;
    __Vtemp_16[1U] = 0U;
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = 0U;
    __Vtemp_16[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_17, __Vtemp_16, 
                  (0x3cU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                            >> 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_opcodes = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
            = (0xffffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                       ? (((QData)((IData)(
                                                           __Vtemp_4[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_4[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      __Vtemp_8[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       __Vtemp_8[0U])))
                                                     : 0ULL))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_opcodes 
            = (0xffffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_opcodes 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_1)
                                       ? (((QData)((IData)(
                                                           __Vtemp_13[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_13[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      __Vtemp_17[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       __Vtemp_17[0U])))
                                                     : 0ULL))));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3005(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3005\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_3;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_8;
    VlWide<5>/*159:0*/ __Vtemp_12;
    VlWide<5>/*159:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<5>/*159:0*/ __Vtemp_17;
    // Body
    __Vtemp_3[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size) 
                               << 1U)) : 0U);
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    __Vtemp_3[3U] = 0U;
    __Vtemp_3[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_4, __Vtemp_3, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    __Vtemp_7[0U] = 0xfU;
    __Vtemp_7[1U] = 0U;
    __Vtemp_7[2U] = 0U;
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_8, __Vtemp_7, 
                  (0x3cU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                            >> 2U)));
    __Vtemp_12[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_1)
                       ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_size) 
                                << 1U)) : 0U);
    __Vtemp_12[1U] = 0U;
    __Vtemp_12[2U] = 0U;
    __Vtemp_12[3U] = 0U;
    __Vtemp_12[4U] = 0U;
    VL_SHIFTL_WWI(131,131,6, __Vtemp_13, __Vtemp_12, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_a_bits_source) 
                   << 2U));
    __Vtemp_16[0U] = 0xfU;
    __Vtemp_16[1U] = 0U;
    __Vtemp_16[2U] = 0U;
    __Vtemp_16[3U] = 0U;
    __Vtemp_16[4U] = 0U;
    VL_SHIFTL_WWI(143,143,6, __Vtemp_17, __Vtemp_16, 
                  (0x3cU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source) 
                            >> 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
            = (0xffffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___GEN_1)
                                       ? (((QData)((IData)(
                                                           __Vtemp_4[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_4[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__monitor__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      __Vtemp_8[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       __Vtemp_8[0U])))
                                                     : 0ULL))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes 
            = (0xffffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT__inflight_sizes 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_1)
                                       ? (((QData)((IData)(
                                                           __Vtemp_13[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp_13[0U])))
                                       : 0ULL)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__picker__DOT__monitor_1__DOT___GEN_41)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      __Vtemp_17[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       __Vtemp_17[0U])))
                                                     : 0ULL))));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___d_first_T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3006(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3006\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum) 
                             - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode)) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum) 
                             - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode)) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_domain_auto_clint_in_d_bits_size))))));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq;
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
           & ((~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__full)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_a_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___GEN) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3007(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3007\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__full = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3008(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3008\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_8) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__d_cam_sel_0))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state 
                = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT___ram_ext_R0_data[0U])) 
                   << 1U);
        } else if ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__full)) 
                     & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__beatsLeft)) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__state_0))) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__winner_0))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state = 1U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT___GEN_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__atomics__DOT__cam_s_0_state = 3U;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_mask)) 
                        << 0x30U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)) 
                                      << 0x13U) | (QData)((IData)(
                                                                  (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                    << 9U) 
                                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data) 
                << 0x18U) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_mask)) 
                                       << 0x30U) | 
                                      (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_address)) 
                                        << 0x13U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                      << 9U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                            << 3U) 
                                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                     >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data) 
                >> 8U) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data 
                                   >> 0x20U)) << 0x18U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0xff000000U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_0) 
                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                << 0x18U) | (0xff000000U 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__atomics__DOT__muxState_1) 
                                                 << 0x18U) 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U])))) 
               | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___atomics_auto_out_a_bits_data 
                           >> 0x20U)) >> 8U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    }
}

extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_hab8e39c3_0;
extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_h7b2d393d_0;
extern const VlWide<129>/*4127:0*/ VTestDriver__ConstPool__CONST_hab8db9bb_0;
extern const VlWide<45>/*1439:0*/ VTestDriver__ConstPool__CONST_h49273a99_0;
extern const VlWide<45>/*1439:0*/ VTestDriver__ConstPool__CONST_hf8af681d_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3009(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3009\n"); );
    // Init
    VlWide<45>/*1439:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    VlWide<129>/*4127:0*/ __Vtemp_2;
    VlWide<129>/*4127:0*/ __Vtemp_3;
    VlWide<129>/*4127:0*/ __Vtemp_4;
    VlWide<129>/*4127:0*/ __Vtemp_8;
    VlWide<129>/*4127:0*/ __Vtemp_9;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode))
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_opcode))
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_size)) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
    }
    VL_EXTEND_WI(4099,4, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                      ? (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_opcode) 
                                               << 1U))
                                      : 0U));
    VL_SHIFTL_WWI(4099,4099,11, __Vtemp_3, __Vtemp_2, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___sbus_auto_coupler_to_bus_named_coh_widget_out_a_bits_source) 
                   << 2U));
    VL_AND_W(129, __Vtemp_4, VTestDriver__ConstPool__CONST_hab8e39c3_0, __Vtemp_3);
    VL_SHIFTL_WWI(4111,4111,11, __Vtemp_8, VTestDriver__ConstPool__CONST_h7b2d393d_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___coh_wrapper_auto_coherent_jbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(129, __Vtemp_9, VTestDriver__ConstPool__CONST_hab8db9bb_0, __Vtemp_8);
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h49273a99_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[1U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[1U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h49273a99_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[2U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[2U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h49273a99_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[3U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[3U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h49273a99_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[4U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[4U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h49273a99_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[5U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[5U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h49273a99_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[6U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[6U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h49273a99_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[7U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[7U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h49273a99_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[8U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[8U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[8U])))));
    __Vtemp_1[9U] = (VTestDriver__ConstPool__CONST_h49273a99_0[9U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_hf8af681d_0[9U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[9U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                 ? __Vtemp_4[9U] : 
                                VTestDriver__ConstPool__CONST_hf8af681d_0[9U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                   ? __Vtemp_9[9U] : 
                                  VTestDriver__ConstPool__CONST_hf8af681d_0[9U])))));
    __Vtemp_1[0xaU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0xaU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_hf8af681d_0[0xaU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                   ? __Vtemp_4[0xaU]
                                   : VTestDriver__ConstPool__CONST_hf8af681d_0[0xaU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                     ? __Vtemp_9[0xaU]
                                     : VTestDriver__ConstPool__CONST_hf8af681d_0[0xaU])))));
    __Vtemp_1[0xbU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0xbU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_hf8af681d_0[0xbU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                   ? __Vtemp_4[0xbU]
                                   : VTestDriver__ConstPool__CONST_hf8af681d_0[0xbU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                     ? __Vtemp_9[0xbU]
                                     : VTestDriver__ConstPool__CONST_hf8af681d_0[0xbU])))));
    __Vtemp_1[0xcU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0xcU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_hf8af681d_0[0xcU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                   ? __Vtemp_4[0xcU]
                                   : VTestDriver__ConstPool__CONST_hf8af681d_0[0xcU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                     ? __Vtemp_9[0xcU]
                                     : VTestDriver__ConstPool__CONST_hf8af681d_0[0xcU])))));
    __Vtemp_1[0xdU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0xdU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_hf8af681d_0[0xdU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                   ? __Vtemp_4[0xdU]
                                   : VTestDriver__ConstPool__CONST_hf8af681d_0[0xdU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                     ? __Vtemp_9[0xdU]
                                     : VTestDriver__ConstPool__CONST_hf8af681d_0[0xdU])))));
    __Vtemp_1[0xeU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0xeU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_hf8af681d_0[0xeU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                   ? __Vtemp_4[0xeU]
                                   : VTestDriver__ConstPool__CONST_hf8af681d_0[0xeU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                     ? __Vtemp_9[0xeU]
                                     : VTestDriver__ConstPool__CONST_hf8af681d_0[0xeU])))));
    __Vtemp_1[0xfU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0xfU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_hf8af681d_0[0xfU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                   ? __Vtemp_4[0xfU]
                                   : VTestDriver__ConstPool__CONST_hf8af681d_0[0xfU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                     ? __Vtemp_9[0xfU]
                                     : VTestDriver__ConstPool__CONST_hf8af681d_0[0xfU])))));
    __Vtemp_1[0x10U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x10U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x10U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x10U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x10U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x10U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x10U])))));
    __Vtemp_1[0x11U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x11U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x11U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x11U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x11U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x11U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x11U])))));
    __Vtemp_1[0x12U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x12U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x12U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x12U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x12U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x12U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x12U])))));
    __Vtemp_1[0x13U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x13U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x13U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x13U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x13U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x13U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x13U])))));
    __Vtemp_1[0x14U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x14U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x14U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x14U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x14U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x14U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x14U])))));
    __Vtemp_1[0x15U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x15U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x15U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x15U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x15U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x15U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x15U])))));
    __Vtemp_1[0x16U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x16U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x16U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x16U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x16U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x16U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x16U])))));
    __Vtemp_1[0x17U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x17U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x17U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x17U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x17U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x17U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x17U])))));
    __Vtemp_1[0x18U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x18U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x18U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x18U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x18U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x18U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x18U])))));
    __Vtemp_1[0x19U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x19U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x19U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x19U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x19U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x19U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x19U])))));
    __Vtemp_1[0x1aU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x1aU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x1aU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x1aU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1aU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x1aU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1aU])))));
    __Vtemp_1[0x1bU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x1bU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x1bU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x1bU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1bU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x1bU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1bU])))));
    __Vtemp_1[0x1cU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x1cU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x1cU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x1cU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1cU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x1cU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1cU])))));
    __Vtemp_1[0x1dU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x1dU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x1dU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x1dU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1dU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x1dU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1dU])))));
    __Vtemp_1[0x1eU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x1eU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x1eU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x1eU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1eU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x1eU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1eU])))));
    __Vtemp_1[0x1fU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x1fU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x1fU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x1fU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1fU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x1fU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x1fU])))));
    __Vtemp_1[0x20U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x20U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x20U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x20U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x20U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x20U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x20U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x20U])))));
    __Vtemp_1[0x21U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x21U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x21U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x21U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x21U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x21U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x21U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x21U])))));
    __Vtemp_1[0x22U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x22U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x22U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x22U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x22U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x22U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x22U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x22U])))));
    __Vtemp_1[0x23U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x23U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x23U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x23U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x23U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x23U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x23U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x23U])))));
    __Vtemp_1[0x24U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x24U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x24U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x24U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x24U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x24U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x24U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x24U])))));
    __Vtemp_1[0x25U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x25U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x25U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x25U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x25U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x25U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x25U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x25U])))));
    __Vtemp_1[0x26U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x26U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x26U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x26U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x26U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x26U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x26U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x26U])))));
    __Vtemp_1[0x27U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x27U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x27U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x27U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x27U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x27U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x27U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x27U])))));
    __Vtemp_1[0x28U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x28U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x28U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x28U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x28U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x28U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x28U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x28U])))));
    __Vtemp_1[0x29U] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x29U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x29U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x29U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x29U]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x29U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x29U]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x29U])))));
    __Vtemp_1[0x2aU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x2aU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x2aU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x2aU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x2aU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x2aU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x2aU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x2aU])))));
    __Vtemp_1[0x2bU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x2bU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x2bU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x2bU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x2bU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x2bU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x2bU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x2bU])))));
    __Vtemp_1[0x2cU] = (VTestDriver__ConstPool__CONST_h49273a99_0[0x2cU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_hf8af681d_0[0x2cU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0x2cU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                                    ? __Vtemp_4[0x2cU]
                                    : VTestDriver__ConstPool__CONST_hf8af681d_0[0x2cU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                                      ? __Vtemp_9[0x2cU]
                                      : VTestDriver__ConstPool__CONST_hf8af681d_0[0x2cU])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = (VTestDriver__ConstPool__CONST_h49273a99_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_hf8af681d_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_2)
                       ? __Vtemp_4[0U] : VTestDriver__ConstPool__CONST_hf8af681d_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___GEN_82)
                         ? __Vtemp_9[0U] : VTestDriver__ConstPool__CONST_hf8af681d_0[0U])))));
    __Vilp = 1U;
    while ((__Vilp <= 0x2cU)) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_opcodes[__Vilp] 
            = __Vtemp_1[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3010(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3010\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_2 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_2 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__latch_2)
                          ? ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2_0) 
                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                  >> 0xeU)) ? (~ (0xffffffU 
                                                  & (((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                          >> 7U))) 
                                                     >> 3U)))
                               : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__winner_2_1) 
                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            >> 0xeU))
                                         ? (~ (0xffffffU 
                                               & (((IData)(0xfffU) 
                                                   << 
                                                   (0xfU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__coupler_from_rockettile_1__DOT__asink__DOT__nodeOut_c_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                       >> 7U))) 
                                                  >> 3U)))
                                         : 0U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT__beatsLeft_2) 
                                                   - 
                                                   ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c_q__DOT__full)) 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid)))));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__do_enq) {
        __Vtemp_1[0U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0)
                                     ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                                          ? (((QData)((IData)(
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata)
                                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata)
                                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata)
                                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata)
                                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata)
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3)) 
                                                                          << 0x18U) 
                                                                         | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata)
                                                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2)) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1)) 
                                                                                << 8U) 
                                                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0)))))))))))
                                          : 0ULL)) : 0ULL) 
                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1)
                                        ? (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0xfU)))
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                        << 0x11U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                          >> 0xfU)))
                                                    : 0ULL)))) 
                          << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_denied) 
                                       << 0xeU) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_sink) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_source) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_size) 
                                                          << 5U) 
                                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_param) 
                                                             << 3U) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_opcode)))))));
        __Vtemp_1[1U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0)
                                     ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                                          ? (((QData)((IData)(
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata)
                                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata)
                                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata)
                                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata)
                                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata)
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3)) 
                                                                          << 0x18U) 
                                                                         | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata)
                                                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2)) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1)) 
                                                                                << 8U) 
                                                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0)))))))))))
                                          : 0ULL)) : 0ULL) 
                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1)
                                        ? (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0xfU)))
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                        << 0x11U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                          >> 0xfU)))
                                                    : 0ULL)))) 
                          >> 0x11U) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0)
                                                   ? 
                                                  (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
                                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg
                                                     : 0ULL) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata)
                                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata)
                                                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6)))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata)
                                                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5)))) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4)))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1)) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0)))))))))))
                                                       : 0ULL))
                                                   : 0ULL) 
                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                                       << 0x31U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                                          << 0x11U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                            >> 0xfU)))
                                                      : 0ULL) 
                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                            << 0x11U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                              >> 0xfU)))
                                                        : 0ULL))) 
                                                >> 0x20U)) 
                                       << 0xfU));
        __Vtemp_1[2U] = ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_0)
                                     ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_0)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_data_reg
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__muxState_1)
                                          ? (((QData)((IData)(
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_7_RW0_rdata)
                                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_7)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                   ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_6_RW0_rdata)
                                                                   : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_6)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_5_RW0_rdata)
                                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_5)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_4_RW0_rdata)
                                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_4)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_3_RW0_rdata)
                                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_3)) 
                                                                          << 0x18U) 
                                                                         | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_2_RW0_rdata)
                                                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_2)) 
                                                                             << 0x10U) 
                                                                            | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_1_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_1)) 
                                                                                << 8U) 
                                                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__mem__DOT__mem_ext__DOT__mem_0_0_RW0_rdata)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_0)))))))))))
                                          : 0ULL)) : 0ULL) 
                                   | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_1)
                                        ? (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[2U])) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x11U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0xfU)))
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__muxState_1_2)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[2U])) 
                                                     << 0x31U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[1U])) 
                                                        << 0x11U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__cork__DOT__q_1__DOT___ram_ext_R0_data[0U])) 
                                                          >> 0xfU)))
                                                    : 0ULL))) 
                                  >> 0x20U)) >> 0x11U);
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = __Vtemp_1[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_1[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_in_d_bits_corrupt) 
                << 0xfU) | __Vtemp_1[2U]);
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3011(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3011\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__used 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
            ? 0ULL : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__used 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___putbuffer_io_pop_valid_T)
                              ? (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___head_ext_R0_data))
                              : 0ULL))) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__data_MPORT_en)
                                            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___GEN
                                            : 0ULL)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3012(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3012\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__beatsLeft = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__beatsLeft 
            = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__latch)
                      ? ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__winner_0) 
                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins))
                           ? (~ (0x3ffU & (((IData)(0x3fU) 
                                            << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT___coupler_to_memory_controller_port_named_axi4_auto_widget_in_d_bits_size)) 
                                           >> 3U)))
                           : 0U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__winner_1) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read))
                                     ? (~ (0x3ffU & 
                                           (((IData)(0x3fU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bank_auto_xbar_in_d_bits_size)) 
                                            >> 3U)))
                                     : 0U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__mbus_xbar__DOT__beatsLeft) 
                                               - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___cork_auto_out_d_ready) 
                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___binder_auto_in_d_valid)))));
        if ((1U & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                       >> 0xaU) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeOff))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT___GEN_0) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__fragmenter__DOT__acknum) 
                             - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_read) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bank__DOT__ram__DOT__r_size))))));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_6__DOT__meta_valid))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3013(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3013\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_5__DOT__meta_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__meta_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__meta_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__meta_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__meta_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_3) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__meta_valid))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__full = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_ready)))
            ? (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay)))
            : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3014(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3014\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3015(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3015\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___rqueues_15_deq_ready_T) 
                  & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_id_reg)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fr_last_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3016(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3016\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        __Vtemp_1[1U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_0)
                                     ? ((0U == (0xffU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_address 
                                                   >> 4U)))
                                         ? ((8U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))
                                             ? (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_2__DOT__reg_0))
                                             : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_1__DOT__reg_0)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                                         : 0ULL) : 0ULL) 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_1)
                                       ? ((0U == (0x1ffU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address 
                                                     >> 3U)))
                                           ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_1__DOT__reg_0)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_0__DOT__reg_0)))
                                           : 0ULL) : 0ULL))) 
                          >> 0xcU) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_0)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_address 
                                                       >> 4U)))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->__VdfgTmp_h02c77395__0))
                                                    ? (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_2__DOT__reg_0))
                                                    : 
                                                   (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_1__DOT__reg_0)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                                                   : 0ULL)
                                                  : 0ULL) 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_1)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1ffU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address 
                                                         >> 3U)))
                                                     ? 
                                                    (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_1__DOT__reg_0)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_0__DOT__reg_0)))
                                                     : 0ULL)
                                                    : 0ULL)) 
                                               >> 0x20U)) 
                                      << 0x14U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_0)
                           ? ((0U == (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_address 
                                               >> 4U)))
                               ? ((8U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))
                                   ? (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_2__DOT__reg_0))
                                   : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_1__DOT__reg_0)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                               : 0ULL) : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_1)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_1__DOT__reg_0)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_0__DOT__reg_0)))
                                                    : 0ULL)
                                                   : 0ULL))) 
                << 0x14U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_source) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_size) 
                                         << 5U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___chipyard_prcictrl_domain_auto_xbar_in_d_bits_opcode))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_1[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_0)
                           ? ((0U == (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_auto_out_a_bits_address 
                                               >> 4U)))
                               ? ((8U & (IData)(vlSelf->__VdfgTmp_h02c77395__0))
                                   ? (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_2__DOT__reg_0))
                                   : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_1__DOT__reg_0)) 
                                       << 0x20U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                               : 0ULL) : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__xbar__DOT__muxState_1)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1ffU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT___fragmenter_1_auto_out_a_bits_address 
                                                        >> 3U)))
                                                    ? 
                                                   (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_1__DOT__reg_0)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__chipyard_prcictrl_domain__DOT__reset_setter__DOT__r_tile_resets_0__DOT__reg_0)))
                                                    : 0ULL)
                                                   : 0ULL)) 
                        >> 0x20U)) >> 0xcU);
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3017(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3017\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) 
                != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__nodeOut_d_ready) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full)))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__full 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3018(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3018\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__do_enq) 
             != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___cbus_auto_coupler_to_plic_fragmenter_out_d_ready) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__domain__DOT__plic__DOT__out_back_q__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeIn_d_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap_1) 
                         - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3019(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3019\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__do_enq) {
        __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                 [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                   << 0x1fU))))));
        __Vtemp_16[1U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty)) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                                                  [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                                                    << 0x1fU))))) 
                                  >> 0x20U));
        __Vtemp_16[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm) 
                           << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop) 
                                         << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen)));
        __Vtemp_16[3U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm) 
                           << 0x10U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen));
        __Vtemp_16[4U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
        __Vtemp_16[5U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                           << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        __Vtemp_16[6U] = (IData)((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)));
        __Vtemp_16[7U] = (IData)(((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)) 
                                  >> 0x20U));
        __Vtemp_17[0U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_16[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_16[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_16[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL))) << 0x14U) 
                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_source) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_size) 
                                         << 5U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___out_xbar_auto_in_d_bits_opcode))));
        __Vtemp_17[1U] = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_16[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_16[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_16[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL))) >> 0xcU) 
                          | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                         ? ((0U == 
                                             (0x1ffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                 >> 3U)))
                                             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                             : 0ULL)
                                         : 0ULL) | 
                                       ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                         ? ((0U == 
                                             (0x7fU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                 >> 5U)))
                                             ? (((QData)((IData)(
                                                                 __Vtemp_16[
                                                                 (((IData)(0x3fU) 
                                                                   + 
                                                                   (0xffU 
                                                                    & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                        >> 3U)), 6U)))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(8,8,32, 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                        >> 3U)), 6U))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     __Vtemp_16[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0xffU 
                                                                        & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,8,32, 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                           >> 3U)), 6U))))) 
                                                   | ((QData)((IData)(
                                                                      __Vtemp_16[
                                                                      (7U 
                                                                       & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(8,8,32, 
                                                                       (3U 
                                                                        & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                           >> 3U)), 6U)))))
                                             : 0ULL)
                                         : 0ULL)) >> 0x20U)) 
                             << 0x14U));
        __Vtemp_17[2U] = ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_0)
                                      ? ((0U == (0x1ffU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                    >> 3U)))
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__pad
                                          : 0ULL) : 0ULL) 
                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__out_xbar__DOT__muxState_1)
                                        ? ((0U == (0x7fU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                      >> 5U)))
                                            ? (((QData)((IData)(
                                                                __Vtemp_16[
                                                                (((IData)(0x3fU) 
                                                                  + 
                                                                  (0xffU 
                                                                   & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U)))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                       >> 3U)), 6U))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(8,8,32, 
                                                                     (3U 
                                                                      & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                         >> 3U)), 6U)))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    __Vtemp_16[
                                                                    (((IData)(0x1fU) 
                                                                      + 
                                                                      (0xffU 
                                                                       & VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U))))) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_16[
                                                                     (7U 
                                                                      & (VL_SHIFTL_III(8,8,32, 
                                                                                (3U 
                                                                                & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                                >> 3U)), 6U) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(8,8,32, 
                                                                      (3U 
                                                                       & ((IData)(vlSelf->__VdfgTmp_h0cc739ed__0) 
                                                                          >> 3U)), 6U)))))
                                            : 0ULL)
                                        : 0ULL)) >> 0x20U)) 
                          >> 0xcU);
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = __Vtemp_17[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_17[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = __Vtemp_17[2U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer__DOT__nodeIn_d_q__DOT__wrap;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3020(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3020\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT____Vlvbound_h7f097244__0 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT____Vcellinp__next_ext__W0_en) 
                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data) 
                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___tail_ext_R0_data)))
                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_addr)
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop)
                    ? ((0x20U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data))
                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__next_ext__DOT__Memory
                       [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data]
                        : 0U) : 0U));
        if ((0x14U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits))) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT____Vlvbound_h7f097244__0;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_pop_bits;
        }
    }
    if (((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___push_valid_T) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT____Vlvbound_haee16025__0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_addr;
        if ((0x14U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_push_bits_index))) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v1 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT____Vlvbound_haee16025__0;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v1 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__head_ext__DOT__Memory__v1 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__requests__io_push_bits_index;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3021(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3021\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_a_ready) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootrom_domain_auto_bootrom_in_d_valid)) 
                  & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha4261e1d__0)))))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT___GEN) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater__DOT__full))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3022(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3022\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___l2_auto_in_a_ready) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_valid))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter 
            = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first)
                      ? ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode))
                          ? 0U : (~ (0x3ffU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                               >> 3U))))
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter) 
                         - (IData)(1U))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3023(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3023\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_4__io_allocate_valid) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_4__DOT__request_valid))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_3__io_allocate_valid) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_3__DOT__request_valid))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_2__io_allocate_valid) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_2__DOT__request_valid))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_1__io_allocate_valid) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_1__DOT__request_valid))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3024(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3024\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_valid 
        = ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset))) 
           && ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__mshrs_0__io_allocate_valid) 
               | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT___GEN_47)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__coh_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshrs_0__DOT__request_valid))));
    if (((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_0) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2)) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3)) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_4)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_5)) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_6)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_7))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
            = (((QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_7)
                                    ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                        << 0xfU) | 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                        >> 0x11U)) : (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                              >> 0x38U))) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_6)
                                                     ? 
                                                    ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                        >> 9U))
                                                     : (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                                >> 0x30U))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_5)
                                                        ? 
                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                           >> 1U))
                                                        : (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                                   >> 0x28U))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_4)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                          << 7U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                            >> 0x19U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                                    >> 0x20U))))))))) 
                << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_3)
                                                ? (
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                    << 0xfU) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                      >> 0x11U))
                                                : (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                           >> 0x18U))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2)
                                                      ? 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                       << 0x17U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 9U))
                                                      : (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                                 >> 0x10U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                            >> 1U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad 
                                                                    >> 8U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_0)
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                           << 7U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                             >> 0x19U))
                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad)))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3025(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3025\n"); );
    // Body
    if (((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_0) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_1)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_2)) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_3)) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_4)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_5)) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_6)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_7))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
            = (((QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_7)
                                    ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                        << 0xfU) | 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                        >> 0x11U)) : (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                              >> 0x38U))) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_6)
                                                     ? 
                                                    ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                      << 0x17U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                        >> 9U))
                                                     : (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                                >> 0x30U))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_5)
                                                        ? 
                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                         << 0x1fU) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                           >> 1U))
                                                        : (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                                   >> 0x28U))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_4)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                          << 7U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                            >> 0x19U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                                    >> 0x20U))))))))) 
                << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_3)
                                                ? (
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                    << 0xfU) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                      >> 0x11U))
                                                : (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                           >> 0x18U))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_2)
                                                      ? 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                       << 0x17U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 9U))
                                                      : (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                                 >> 0x10U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_1)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                          << 0x1fU) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                            >> 1U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1 
                                                                    >> 8U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_1_0)
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                           << 7U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                             >> 0x19U))
                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__pad_1)))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3026(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3026\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((0x3ffffffffULL & (((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                 << 0x11U) | (0x1fffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                          >> 0xfU))) 
               | (IData)(((0x3ffffffffULL & (((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])))) 
                          >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                      >> 0xfU)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                    << 0x11U) | (0x1fffcU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                    >> 0xfU))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                      >> 0xfU)) | (0x7fcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                             >> 0xfU)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__wrap;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                 << 0x1fU) | (0x7ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 1U))) 
               | (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U]));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                          >> 1U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                      << 0x1fU) | (0x7ffffe00U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                      >> 1U))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                          >> 1U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                      << 0x1fU) | (0x7ffffe00U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                      >> 1U))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                          >> 1U)) | (0x1fffe00U & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                   >> 1U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__wrap;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_0) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_1)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_2)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_3)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_4)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_5)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_6)) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_7))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                = (((QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_7)
                                        ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                            << 0xfU) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                              >> 0x11U))
                                        : (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                   >> 0x38U))) 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_6)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                          << 0x17U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                            >> 9U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                                    >> 0x30U))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_5)
                                                            ? 
                                                           ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                             << 0x1fU) 
                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                               >> 1U))
                                                            : (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                                       >> 0x28U))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_4)
                                                             ? 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[3U] 
                                                              << 7U) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                                >> 0x19U))
                                                             : (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                                        >> 0x20U))))))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_3)
                                                    ? 
                                                   ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                     << 0xfU) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                       >> 0x11U))
                                                    : (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                               >> 0x18U))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_2)
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                           << 0x17U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                             >> 9U))
                                                          : (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                                     >> 0x10U))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_1)
                                                             ? 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                                >> 1U))
                                                             : (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                                                                        >> 8U))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__valids_2_0)
                                                              ? 
                                                             ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[2U] 
                                                               << 7U) 
                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[1U] 
                                                                 >> 0x19U))
                                                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0)))))))));
        } else if ((0x1f3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0 
                = (1ULL + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint_domain__DOT__clint__DOT__time_0);
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3027(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3027\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___a_first_T_1) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30ff_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h6000bedb_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha3e17051_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b3b0f7_0;
extern const VlWide<65>/*2079:0*/ VTestDriver__ConstPool__CONST_h614f9cb9_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3028(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3028\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<257>/*8223:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<65>/*2079:0*/ __Vtemp_15;
    VlWide<257>/*8223:0*/ __Vtemp_16;
    VlWide<257>/*8223:0*/ __Vtemp_17;
    VlWide<257>/*8223:0*/ __Vtemp_18;
    VlWide<65>/*2079:0*/ __Vtemp_19;
    VlWide<65>/*2079:0*/ __Vtemp_20;
    VlWide<65>/*2079:0*/ __Vtemp_21;
    VlWide<257>/*8223:0*/ __Vtemp_22;
    VlWide<257>/*8223:0*/ __Vtemp_23;
    VlWide<65>/*2079:0*/ __Vtemp_24;
    VlWide<65>/*2079:0*/ __Vtemp_25;
    VlWide<65>/*2079:0*/ __Vtemp_26;
    VlWide<65>/*2079:0*/ __Vtemp_27;
    VlWide<65>/*2079:0*/ __Vtemp_28;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                      ? (1U | (0xeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)))
                                      : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_3, __Vtemp_2, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_4, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_3);
    VL_SEL_WWII(2052,8195, __Vtemp_5, __Vtemp_4, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN), __Vtemp_5, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(2052,8207, __Vtemp_10, __Vtemp_9, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29), __Vtemp_10, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_12, __Vtemp_11);
    VL_AND_W(65, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
        VL_ASSIGN_W(2052,__Vtemp_14, VTestDriver__ConstPool__CONST_h6000bedb_0);
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        VL_ASSIGN_W(2052,__Vtemp_14, __Vtemp_13);
    }
    VL_AND_W(65, __Vtemp_1, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_14);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
    VL_EXTEND_WI(8195,4, __Vtemp_16, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_17, __Vtemp_16, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_18, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_17);
    VL_SEL_WWII(2052,8195, __Vtemp_19, __Vtemp_18, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_20, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN), __Vtemp_19, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_21, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_20);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_22, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_23, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_22);
    VL_SEL_WWII(2052,8207, __Vtemp_24, __Vtemp_23, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_25, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29), __Vtemp_24, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_26, __Vtemp_25);
    VL_AND_W(65, __Vtemp_27, __Vtemp_21, __Vtemp_26);
    VL_COND_WIWW(2052, __Vtemp_28, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_27);
    VL_AND_W(65, __Vtemp_15, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_28);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_15);
}

extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a543f7_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h3dcda146_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3029(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3029\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_2;
    VlWide<32>/*1023:0*/ __Vtemp_6;
    VlWide<17>/*543:0*/ __Vtemp_12;
    VlWide<32>/*1023:0*/ __Vtemp_13;
    VlWide<32>/*1023:0*/ __Vtemp_17;
    VlWide<65>/*2079:0*/ __Vtemp_23;
    VlWide<257>/*8223:0*/ __Vtemp_24;
    VlWide<257>/*8223:0*/ __Vtemp_25;
    VlWide<257>/*8223:0*/ __Vtemp_26;
    VlWide<65>/*2079:0*/ __Vtemp_27;
    VlWide<65>/*2079:0*/ __Vtemp_28;
    VlWide<65>/*2079:0*/ __Vtemp_29;
    VlWide<257>/*8223:0*/ __Vtemp_30;
    VlWide<257>/*8223:0*/ __Vtemp_31;
    VlWide<65>/*2079:0*/ __Vtemp_32;
    VlWide<65>/*2079:0*/ __Vtemp_33;
    VlWide<65>/*2079:0*/ __Vtemp_34;
    VlWide<65>/*2079:0*/ __Vtemp_35;
    VlWide<65>/*2079:0*/ __Vtemp_36;
    // Body
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_2, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_6, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source));
    __Vtemp_1[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[1U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[1U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[1U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[1U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[1U])))));
    __Vtemp_1[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[2U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[2U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[2U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[2U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[2U])))));
    __Vtemp_1[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[3U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[3U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[3U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[3U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[3U])))));
    __Vtemp_1[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[4U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[4U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[4U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[4U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[4U])))));
    __Vtemp_1[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[5U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[5U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[5U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[5U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[5U])))));
    __Vtemp_1[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[6U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[6U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[6U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[6U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[6U])))));
    __Vtemp_1[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[7U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[7U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[7U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[7U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[7U])))));
    __Vtemp_1[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[8U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[8U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[8U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[8U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[8U])))));
    __Vtemp_1[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                         ? VTestDriver__ConstPool__CONST_h3dcda146_0[9U]
                         : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                 ? __Vtemp_2[9U] : 
                                VTestDriver__ConstPool__CONST_h3dcda146_0[9U])) 
                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                   ? __Vtemp_6[9U] : 
                                  VTestDriver__ConstPool__CONST_h3dcda146_0[9U])))));
    __Vtemp_1[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                   ? __Vtemp_2[0xaU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                     ? __Vtemp_6[0xaU]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])))));
    __Vtemp_1[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                   ? __Vtemp_2[0xbU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                     ? __Vtemp_6[0xbU]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])))));
    __Vtemp_1[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                   ? __Vtemp_2[0xcU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                     ? __Vtemp_6[0xcU]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])))));
    __Vtemp_1[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                   ? __Vtemp_2[0xdU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                     ? __Vtemp_6[0xdU]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])))));
    __Vtemp_1[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                   ? __Vtemp_2[0xeU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                     ? __Vtemp_6[0xeU]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])))));
    __Vtemp_1[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                           ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]
                           : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                   ? __Vtemp_2[0xfU]
                                   : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                     ? __Vtemp_6[0xfU]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])))));
    __Vtemp_1[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                                    ? __Vtemp_2[0x10U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                                      ? __Vtemp_6[0x10U]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h3dcda146_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN)
                       ? __Vtemp_2[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_29)
                         ? __Vtemp_6[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_1[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_1[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_1[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_1[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_1[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_1[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_1[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_1[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_1[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_1[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_1[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_1[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_1[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_1[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_1[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_1[0x10U];
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_13, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_17, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source));
    __Vtemp_12[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[1U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[1U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[1U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[1U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[1U])))));
    __Vtemp_12[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[2U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[2U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[2U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[2U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[2U])))));
    __Vtemp_12[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[3U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[3U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[3U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[3U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[3U])))));
    __Vtemp_12[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[4U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[4U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[4U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[4U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[4U])))));
    __Vtemp_12[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[5U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[5U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[5U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[5U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[5U])))));
    __Vtemp_12[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[6U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[6U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[6U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[6U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[6U])))));
    __Vtemp_12[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[7U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[7U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[7U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[7U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[7U])))));
    __Vtemp_12[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[8U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[8U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[8U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[8U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[8U])))));
    __Vtemp_12[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[9U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_13[9U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[9U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                    ? __Vtemp_17[9U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[9U])))));
    __Vtemp_12[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_13[0xaU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                      ? __Vtemp_17[0xaU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])))));
    __Vtemp_12[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_13[0xbU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                      ? __Vtemp_17[0xbU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])))));
    __Vtemp_12[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_13[0xcU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                      ? __Vtemp_17[0xcU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])))));
    __Vtemp_12[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_13[0xdU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                      ? __Vtemp_17[0xdU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])))));
    __Vtemp_12[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_13[0xeU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                      ? __Vtemp_17[0xeU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])))));
    __Vtemp_12[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_13[0xfU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                      ? __Vtemp_17[0xfU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])))));
    __Vtemp_12[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                             ? VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]
                             : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                     ? __Vtemp_13[0x10U]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])) 
                                & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                                       ? __Vtemp_17[0x10U]
                                       : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h3dcda146_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                       ? __Vtemp_13[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42)
                         ? __Vtemp_17[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_12[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_12[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_12[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_12[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_12[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_12[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_12[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_12[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_12[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_12[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_12[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_12[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_12[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_12[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_12[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_12[0x10U];
    VL_EXTEND_WI(8195,4, __Vtemp_24, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_25, __Vtemp_24, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_26, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_25);
    VL_SEL_WWII(2052,8195, __Vtemp_27, __Vtemp_26, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_28, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0), __Vtemp_27, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_29, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_28);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_30, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_31, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_30);
    VL_SEL_WWII(2052,8207, __Vtemp_32, __Vtemp_31, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_33, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42), __Vtemp_32, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_34, __Vtemp_33);
    VL_AND_W(65, __Vtemp_35, __Vtemp_29, __Vtemp_34);
    VL_COND_WIWW(2052, __Vtemp_36, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_35);
    VL_AND_W(65, __Vtemp_23, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_36);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_23);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3030(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3030\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<257>/*8223:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    VlWide<17>/*543:0*/ __Vtemp_15;
    VlWide<32>/*1023:0*/ __Vtemp_16;
    VlWide<32>/*1023:0*/ __Vtemp_20;
    VlWide<65>/*2079:0*/ __Vtemp_26;
    VlWide<257>/*8223:0*/ __Vtemp_27;
    VlWide<257>/*8223:0*/ __Vtemp_28;
    VlWide<257>/*8223:0*/ __Vtemp_29;
    VlWide<65>/*2079:0*/ __Vtemp_30;
    VlWide<65>/*2079:0*/ __Vtemp_31;
    VlWide<65>/*2079:0*/ __Vtemp_32;
    VlWide<257>/*8223:0*/ __Vtemp_33;
    VlWide<257>/*8223:0*/ __Vtemp_34;
    VlWide<65>/*2079:0*/ __Vtemp_35;
    VlWide<65>/*2079:0*/ __Vtemp_36;
    VlWide<65>/*2079:0*/ __Vtemp_37;
    VlWide<65>/*2079:0*/ __Vtemp_38;
    VlWide<65>/*2079:0*/ __Vtemp_39;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                      ? (1U | (0xeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)))
                                      : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_3, __Vtemp_2, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_4, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_3);
    VL_SEL_WWII(2052,8195, __Vtemp_5, __Vtemp_4, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_0), __Vtemp_5, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(2052,8207, __Vtemp_10, __Vtemp_9, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_42), __Vtemp_10, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_12, __Vtemp_11);
    VL_AND_W(65, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    VL_COND_WIWW(2052, __Vtemp_14, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_13);
    VL_AND_W(65, __Vtemp_1, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_14);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_16, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xaU)));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_20, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source));
    __Vtemp_15[1U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[1U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[1U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[1U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[1U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[1U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[1U])))));
    __Vtemp_15[2U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[2U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[2U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[2U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[2U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[2U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[2U])))));
    __Vtemp_15[3U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[3U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[3U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[3U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[3U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[3U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[3U])))));
    __Vtemp_15[4U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[4U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[4U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[4U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[4U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[4U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[4U])))));
    __Vtemp_15[5U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[5U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[5U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[5U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[5U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[5U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[5U])))));
    __Vtemp_15[6U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[6U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[6U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[6U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[6U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[6U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[6U])))));
    __Vtemp_15[7U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[7U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[7U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[7U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[7U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[7U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[7U])))));
    __Vtemp_15[8U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[8U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[8U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[8U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[8U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[8U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[8U])))));
    __Vtemp_15[9U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[9U] 
                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                          ? VTestDriver__ConstPool__CONST_h3dcda146_0[9U]
                          : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
                              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                  ? __Vtemp_16[9U] : 
                                 VTestDriver__ConstPool__CONST_h3dcda146_0[9U])) 
                             & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                    ? __Vtemp_20[9U]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[9U])))));
    __Vtemp_15[0xaU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xaU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_16[0xaU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                      ? __Vtemp_20[0xaU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xaU])))));
    __Vtemp_15[0xbU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xbU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_16[0xbU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                      ? __Vtemp_20[0xbU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xbU])))));
    __Vtemp_15[0xcU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xcU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_16[0xcU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                      ? __Vtemp_20[0xcU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xcU])))));
    __Vtemp_15[0xdU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xdU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_16[0xdU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                      ? __Vtemp_20[0xdU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xdU])))));
    __Vtemp_15[0xeU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xeU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_16[0xeU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                      ? __Vtemp_20[0xeU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xeU])))));
    __Vtemp_15[0xfU] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0xfU] 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                            ? VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU]
                            : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                    ? __Vtemp_16[0xfU]
                                    : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])) 
                               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                      ? __Vtemp_20[0xfU]
                                      : VTestDriver__ConstPool__CONST_h3dcda146_0[0xfU])))));
    __Vtemp_15[0x10U] = (VTestDriver__ConstPool__CONST_h00a543f7_0[0x10U] 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
                             ? VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U]
                             : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                     ? __Vtemp_16[0x10U]
                                     : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])) 
                                & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                                       ? __Vtemp_20[0x10U]
                                       : VTestDriver__ConstPool__CONST_h3dcda146_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a543f7_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset)
               ? VTestDriver__ConstPool__CONST_h3dcda146_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                       ? __Vtemp_16[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43)
                         ? __Vtemp_20[0U] : VTestDriver__ConstPool__CONST_h3dcda146_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_15[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_15[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_15[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_15[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_15[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_15[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_15[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_15[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_15[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_15[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_15[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_15[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_15[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_15[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_15[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_15[0x10U];
    VL_EXTEND_WI(8195,4, __Vtemp_27, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                       ? (1U | (0xeU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_28, __Vtemp_27, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_29, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_28);
    VL_SEL_WWII(2052,8195, __Vtemp_30, __Vtemp_29, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_31, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0), __Vtemp_30, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_32, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_31);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_33, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_34, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_33);
    VL_SEL_WWII(2052,8207, __Vtemp_35, __Vtemp_34, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_36, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43), __Vtemp_35, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_37, __Vtemp_36);
    VL_AND_W(65, __Vtemp_38, __Vtemp_32, __Vtemp_37);
    VL_COND_WIWW(2052, __Vtemp_39, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset), VTestDriver__ConstPool__CONST_h6000bedb_0, __Vtemp_38);
    VL_AND_W(65, __Vtemp_26, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_39);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_26);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3031(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3031\n"); );
    // Init
    VlWide<65>/*2079:0*/ __Vtemp_1;
    VlWide<257>/*8223:0*/ __Vtemp_2;
    VlWide<257>/*8223:0*/ __Vtemp_3;
    VlWide<257>/*8223:0*/ __Vtemp_4;
    VlWide<65>/*2079:0*/ __Vtemp_5;
    VlWide<65>/*2079:0*/ __Vtemp_6;
    VlWide<65>/*2079:0*/ __Vtemp_7;
    VlWide<257>/*8223:0*/ __Vtemp_8;
    VlWide<257>/*8223:0*/ __Vtemp_9;
    VlWide<65>/*2079:0*/ __Vtemp_10;
    VlWide<65>/*2079:0*/ __Vtemp_11;
    VlWide<65>/*2079:0*/ __Vtemp_12;
    VlWide<65>/*2079:0*/ __Vtemp_13;
    VlWide<65>/*2079:0*/ __Vtemp_14;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_2, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0)
                                      ? (1U | (0xeU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)))
                                      : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_3, __Vtemp_2, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                             >> 8U)));
    VL_AND_W(257, __Vtemp_4, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_3);
    VL_SEL_WWII(2052,8195, __Vtemp_5, __Vtemp_4, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_6, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_0), __Vtemp_5, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_OR_W(65, __Vtemp_7, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_6);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_8, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_9, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_8);
    VL_SEL_WWII(2052,8207, __Vtemp_10, __Vtemp_9, 0U, 0x804U);
    VL_COND_WIWW(2052, __Vtemp_11, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_43), __Vtemp_10, VTestDriver__ConstPool__CONST_h6000bedb_0);
    VL_NOT_W(65, __Vtemp_12, __Vtemp_11);
    VL_AND_W(65, __Vtemp_13, __Vtemp_7, __Vtemp_12);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_cbus_fixedClockNode_out_reset) {
        VL_ASSIGN_W(2052,__Vtemp_14, VTestDriver__ConstPool__CONST_h6000bedb_0);
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        VL_ASSIGN_W(2052,__Vtemp_14, __Vtemp_13);
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__buffer__DOT__nodeOut_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    }
    VL_AND_W(65, __Vtemp_1, VTestDriver__ConstPool__CONST_h614f9cb9_0, __Vtemp_14);
    VL_ASSIGN_W(2052,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_1);
}
