// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "VTestDriver__pch.h"
#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__0(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__0\n"); );
    // Init
    QData/*63:0*/ TestDriver__DOT__dump_start;
    TestDriver__DOT__dump_start = 0;
    IData/*31:0*/ TestDriver__DOT__rand_value;
    TestDriver__DOT__rand_value = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_1[0U] = 0x733d2564U;
    __Vtemp_1[1U] = 0x79636c65U;
    __Vtemp_1[2U] = 0x61782d63U;
    __Vtemp_1[3U] = 0x6dU;
    (void)VL_VALUEPLUSARGS_INQ(64, VL_CVT_PACK_STR_NW(4, __Vtemp_1), 
                               vlSelf->TestDriver__DOT__max_cycles);
    __Vtemp_2[0U] = 0x743d2564U;
    __Vtemp_2[1U] = 0x73746172U;
    __Vtemp_2[2U] = 0x756d702dU;
    __Vtemp_2[3U] = 0x64U;
    (void)VL_VALUEPLUSARGS_INQ(64, VL_CVT_PACK_STR_NW(4, __Vtemp_2), 
                               TestDriver__DOT__dump_start);
    vlSelf->TestDriver__DOT__verbose = (1U & VL_TESTPLUSARGS_I(
                                                               std::string{"verbose"}));
    TestDriver__DOT__rand_value = VL_RANDOM_I();
    TestDriver__DOT__rand_value = VL_RANDOM_SEEDED_II(TestDriver__DOT__rand_value);
    if (VL_UNLIKELY(vlSelf->TestDriver__DOT__verbose)) {
        VL_FWRITEF(0x80000002U,"testing $random %0x\n",
                   32,TestDriver__DOT__rand_value);
    }
    __Vtemp_3[0U] = 0x696c653dU;
    __Vtemp_3[1U] = 0x6c757366U;
    __Vtemp_3[2U] = 0x76636470U;
    __Vtemp_4[0U] = 0x696c653dU;
    __Vtemp_4[1U] = 0x73646266U;
    __Vtemp_4[2U] = 0x66U;
    if (VL_UNLIKELY(((VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_3)) 
                      || VL_TESTPLUSARGS_I(std::string{"vcdfile="})) 
                     || VL_TESTPLUSARGS_I(VL_CVT_PACK_STR_NW(3, __Vtemp_4))))) {
        VL_FWRITEF(0x80000002U,"Error: +vcdfile, +vcdplusfile, or +fsdbfile requested but compile did not have +define+DEBUG enabled\n");
        VL_WRITEF("[%0t] %%Fatal: TestDriver.v:98: Assertion failed in %NTestDriver\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/drimple/work/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketConfig/gen-collateral/TestDriver.v", 98, "");
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__clock_en 
        = (1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___RANDOM
           [0U]);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__debug_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__clock_en = 1U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value 
        = (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___RANDOM[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT___RANDOM[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____Vlvbound_h9bac8a17__0;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__sbus__DOT__system_bus_xbar__DOT____Vlvbound_h9bac8a17__0 
        = VL_RANDOM_I();
}

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1793(VTestDriver___024root* vlSelf);
VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1794(VTestDriver___024root* vlSelf);
void VTestDriver___024unit____Vdpiimwrap_uart_init_TOP____024unit(std::string filename, IData/*31:0*/ uartno, IData/*31:0*/ forcepty);

VL_ATTR_COLD void VTestDriver___024root___eval_initial__TOP__1795(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_initial__TOP__1795\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VTestDriver___024root___eval_initial__TOP__1793(vlSelf);
    VTestDriver___024root___eval_initial__TOP__1794(vlSelf);
    __Vtemp_1[0U] = 0x673d2573U;
    __Vtemp_1[1U] = 0x72746c6fU;
    __Vtemp_1[2U] = 0x7561U;
    (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(3, __Vtemp_1), 
                               vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__sim__DOT_____05Fuartlog);
    VTestDriver___024unit____Vdpiimwrap_uart_init_TOP____024unit(vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__sim__DOT_____05Fuartlog, 0U, 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM[1U] 
        = VL_RANDOM_I();
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__debounce 
        = (3U & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
           [0U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__prescaler 
        = (0x1fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                      [0U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__data_count 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                   [0U] >> 0xfU));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample_count 
        = (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                   [0U] >> 0x13U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__sample 
        = (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                 [0U] >> 0x17U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__shifter 
        = ((0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                     [0U] >> 0x18U)) | (3U & vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                                        [1U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__valid 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                 [1U] >> 2U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT__state 
        = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txm__DOT___RANDOM
                 [1U] >> 3U));
    vlSelf->TestDriver__DOT__testHarness__DOT__uart_sim_0_uartno0__DOT__txq__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestDriver___024root___dump_triggers__stl(VTestDriver___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestDriver___024root___eval_triggers__stl(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestDriver___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
