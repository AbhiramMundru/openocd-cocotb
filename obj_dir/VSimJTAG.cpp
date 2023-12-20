// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimJTAG.h for the primary calling header

#include "VSimJTAG.h"
#include "VSimJTAG__Syms.h"

#include "verilated_dpi.h"

//==========

void VSimJTAG::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimJTAG::eval\n"); );
    VSimJTAG__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SimJTAG.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSimJTAG::_eval_initial_loop(VSimJTAG__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SimJTAG.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSimJTAG::_sequent__TOP__1(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_sequent__TOP__1\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TCK;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TMS;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TDI;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TRSTn;
    CData/*0:0*/ __Vdly__SimJTAG__DOT__init_done_sticky;
    IData/*31:0*/ __Vfunc_jtag_tick__0__Vfuncout;
    IData/*31:0*/ __Vdly__SimJTAG__DOT__tickCounterReg;
    // Body
    __Vdly__SimJTAG__DOT__init_done_sticky = vlTOPp->SimJTAG__DOT__init_done_sticky;
    __Vdly__SimJTAG__DOT__tickCounterReg = vlTOPp->SimJTAG__DOT__tickCounterReg;
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->SimJTAG__DOT__r_reset))) {
        vlTOPp->SimJTAG__DOT_____05Fexit = 0U;
        vlTOPp->SimJTAG__DOT_____05Fjtag_TCK = (1U 
                                                & (~ (IData)(vlTOPp->SimJTAG__DOT_____05Fjtag_TCK)));
        __Vdly__SimJTAG__DOT__tickCounterReg = 0x32U;
        __Vdly__SimJTAG__DOT__init_done_sticky = 0U;
    } else {
        __Vdly__SimJTAG__DOT__init_done_sticky = ((IData)(vlTOPp->init_done) 
                                                  | (IData)(vlTOPp->SimJTAG__DOT__init_done_sticky));
        if (((IData)(vlTOPp->enable) & (IData)(vlTOPp->SimJTAG__DOT__init_done_sticky))) {
            if ((0U == vlTOPp->SimJTAG__DOT__tickCounterReg)) {
                vlSymsp->TOP____024unit.__Vdpiimwrap_jtag_tick_TOP____024unit(__Vfunc_jtag_tick__0__jtag_TCK, __Vfunc_jtag_tick__0__jtag_TMS, __Vfunc_jtag_tick__0__jtag_TDI, __Vfunc_jtag_tick__0__jtag_TRSTn, 
                                                                              (1U 
                                                                               & ((IData)(vlTOPp->jtag_TDO_driven)
                                                                                 ? (IData)(vlTOPp->jtag_TDO_data)
                                                                                 : vlTOPp->SimJTAG__DOT__random_bits)), __Vfunc_jtag_tick__0__Vfuncout);
                vlTOPp->SimJTAG__DOT_____05Fjtag_TCK 
                    = __Vfunc_jtag_tick__0__jtag_TCK;
                vlTOPp->SimJTAG__DOT_____05Fjtag_TMS 
                    = __Vfunc_jtag_tick__0__jtag_TMS;
                vlTOPp->SimJTAG__DOT_____05Fjtag_TDI 
                    = __Vfunc_jtag_tick__0__jtag_TDI;
                vlTOPp->SimJTAG__DOT_____05Fjtag_TRSTn 
                    = __Vfunc_jtag_tick__0__jtag_TRSTn;
                vlTOPp->SimJTAG__DOT_____05Fexit = __Vfunc_jtag_tick__0__Vfuncout;
            }
            __Vdly__SimJTAG__DOT__tickCounterReg = vlTOPp->SimJTAG__DOT__tickCounterNxt;
        }
    }
    vlTOPp->SimJTAG__DOT__init_done_sticky = __Vdly__SimJTAG__DOT__init_done_sticky;
    vlTOPp->exit = vlTOPp->SimJTAG__DOT_____05Fexit;
    vlTOPp->jtag_TCK = vlTOPp->SimJTAG__DOT_____05Fjtag_TCK;
    vlTOPp->jtag_TMS = vlTOPp->SimJTAG__DOT_____05Fjtag_TMS;
    vlTOPp->jtag_TDI = vlTOPp->SimJTAG__DOT_____05Fjtag_TDI;
    vlTOPp->jtag_TRSTn = vlTOPp->SimJTAG__DOT_____05Fjtag_TRSTn;
    vlTOPp->SimJTAG__DOT__tickCounterReg = __Vdly__SimJTAG__DOT__tickCounterReg;
    vlTOPp->SimJTAG__DOT__tickCounterNxt = ((0U == vlTOPp->SimJTAG__DOT__tickCounterReg)
                                             ? 0x32U
                                             : (vlTOPp->SimJTAG__DOT__tickCounterReg 
                                                - (IData)(1U)));
    vlTOPp->SimJTAG__DOT__r_reset = vlTOPp->reset;
}

void VSimJTAG::_eval(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_eval\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VSimJTAG::_change_request(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_change_request\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSimJTAG::_change_request_1(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_change_request_1\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimJTAG::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((init_done & 0xfeU))) {
        Verilated::overWidthError("init_done");}
    if (VL_UNLIKELY((jtag_TDO_data & 0xfeU))) {
        Verilated::overWidthError("jtag_TDO_data");}
    if (VL_UNLIKELY((jtag_TDO_driven & 0xfeU))) {
        Verilated::overWidthError("jtag_TDO_driven");}
}
#endif  // VL_DEBUG
