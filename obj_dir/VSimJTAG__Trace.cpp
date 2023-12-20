// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimJTAG__Syms.h"


void VSimJTAG::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSimJTAG::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->SimJTAG__DOT__random_bits),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+1,(vlTOPp->SimJTAG__DOT__tickCounterReg),32);
            tracep->chgIData(oldp+2,(((0U == vlTOPp->SimJTAG__DOT__tickCounterReg)
                                       ? 0x32U : (vlTOPp->SimJTAG__DOT__tickCounterReg 
                                                  - (IData)(1U)))),32);
            tracep->chgBit(oldp+3,(vlTOPp->SimJTAG__DOT__r_reset));
            tracep->chgBit(oldp+4,(vlTOPp->SimJTAG__DOT__init_done_sticky));
        }
        tracep->chgBit(oldp+5,(vlTOPp->clock));
        tracep->chgBit(oldp+6,(vlTOPp->reset));
        tracep->chgBit(oldp+7,(vlTOPp->enable));
        tracep->chgBit(oldp+8,(vlTOPp->init_done));
        tracep->chgBit(oldp+9,(vlTOPp->jtag_TCK));
        tracep->chgBit(oldp+10,(vlTOPp->jtag_TMS));
        tracep->chgBit(oldp+11,(vlTOPp->jtag_TDI));
        tracep->chgBit(oldp+12,(vlTOPp->jtag_TRSTn));
        tracep->chgBit(oldp+13,(vlTOPp->jtag_TDO_data));
        tracep->chgBit(oldp+14,(vlTOPp->jtag_TDO_driven));
        tracep->chgIData(oldp+15,(vlTOPp->exit),32);
    }
}

void VSimJTAG::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
