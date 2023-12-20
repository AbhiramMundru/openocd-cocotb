// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimJTAG.h for the primary calling header

#include "VSimJTAG.h"
#include "VSimJTAG__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VSimJTAG) {
    VSimJTAG__Syms* __restrict vlSymsp = __VlSymsp = new VSimJTAG__Syms(this, name());
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT____024unit, VSimJTAG___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSimJTAG::__Vconfigure(VSimJTAG__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSimJTAG::~VSimJTAG() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSimJTAG::_settle__TOP__2(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_settle__TOP__2\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SimJTAG__DOT__random_bits = VL_RANDOM_I(32);
    vlTOPp->jtag_TCK = vlTOPp->SimJTAG__DOT_____05Fjtag_TCK;
    vlTOPp->jtag_TMS = vlTOPp->SimJTAG__DOT_____05Fjtag_TMS;
    vlTOPp->jtag_TDI = vlTOPp->SimJTAG__DOT_____05Fjtag_TDI;
    vlTOPp->jtag_TRSTn = vlTOPp->SimJTAG__DOT_____05Fjtag_TRSTn;
    vlTOPp->exit = vlTOPp->SimJTAG__DOT_____05Fexit;
    vlTOPp->SimJTAG__DOT__tickCounterNxt = ((0U == vlTOPp->SimJTAG__DOT__tickCounterReg)
                                             ? 0x32U
                                             : (vlTOPp->SimJTAG__DOT__tickCounterReg 
                                                - (IData)(1U)));
}

void VSimJTAG::_eval_initial(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_eval_initial\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSimJTAG::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::final\n"); );
    // Variables
    VSimJTAG__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSimJTAG::_eval_settle(VSimJTAG__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_eval_settle\n"); );
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VSimJTAG::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimJTAG::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    enable = VL_RAND_RESET_I(1);
    init_done = VL_RAND_RESET_I(1);
    jtag_TCK = VL_RAND_RESET_I(1);
    jtag_TMS = VL_RAND_RESET_I(1);
    jtag_TDI = VL_RAND_RESET_I(1);
    jtag_TRSTn = VL_RAND_RESET_I(1);
    jtag_TDO_data = VL_RAND_RESET_I(1);
    jtag_TDO_driven = VL_RAND_RESET_I(1);
    exit = VL_RAND_RESET_I(32);
    SimJTAG__DOT__tickCounterReg = VL_RAND_RESET_I(32);
    SimJTAG__DOT__tickCounterNxt = VL_RAND_RESET_I(32);
    SimJTAG__DOT__r_reset = 0;
    SimJTAG__DOT__random_bits = VL_RAND_RESET_I(32);
    SimJTAG__DOT_____05Fjtag_TCK = 0;
    SimJTAG__DOT_____05Fjtag_TMS = 0;
    SimJTAG__DOT_____05Fjtag_TDI = 0;
    SimJTAG__DOT_____05Fjtag_TRSTn = 0;
    SimJTAG__DOT_____05Fexit = 0;
    SimJTAG__DOT__init_done_sticky = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
