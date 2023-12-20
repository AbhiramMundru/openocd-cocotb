// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimJTAG__Syms.h"


//======================

void VSimJTAG::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSimJTAG::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimJTAG::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSimJTAG::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSimJTAG::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clock", false,-1);
        tracep->declBit(c+7,"reset", false,-1);
        tracep->declBit(c+8,"enable", false,-1);
        tracep->declBit(c+9,"init_done", false,-1);
        tracep->declBit(c+10,"jtag_TCK", false,-1);
        tracep->declBit(c+11,"jtag_TMS", false,-1);
        tracep->declBit(c+12,"jtag_TDI", false,-1);
        tracep->declBit(c+13,"jtag_TRSTn", false,-1);
        tracep->declBit(c+14,"jtag_TDO_data", false,-1);
        tracep->declBit(c+15,"jtag_TDO_driven", false,-1);
        tracep->declBus(c+16,"exit", false,-1, 31,0);
        tracep->declBus(c+17,"SimJTAG TICK_DELAY", false,-1, 31,0);
        tracep->declBit(c+6,"SimJTAG clock", false,-1);
        tracep->declBit(c+7,"SimJTAG reset", false,-1);
        tracep->declBit(c+8,"SimJTAG enable", false,-1);
        tracep->declBit(c+9,"SimJTAG init_done", false,-1);
        tracep->declBit(c+10,"SimJTAG jtag_TCK", false,-1);
        tracep->declBit(c+11,"SimJTAG jtag_TMS", false,-1);
        tracep->declBit(c+12,"SimJTAG jtag_TDI", false,-1);
        tracep->declBit(c+13,"SimJTAG jtag_TRSTn", false,-1);
        tracep->declBit(c+14,"SimJTAG jtag_TDO_data", false,-1);
        tracep->declBit(c+15,"SimJTAG jtag_TDO_driven", false,-1);
        tracep->declBus(c+16,"SimJTAG exit", false,-1, 31,0);
        tracep->declBus(c+2,"SimJTAG tickCounterReg", false,-1, 31,0);
        tracep->declBus(c+3,"SimJTAG tickCounterNxt", false,-1, 31,0);
        tracep->declBit(c+4,"SimJTAG r_reset", false,-1);
        tracep->declBus(c+1,"SimJTAG random_bits", false,-1, 31,0);
        tracep->declBit(c+5,"SimJTAG init_done_sticky", false,-1);
    }
}

void VSimJTAG::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSimJTAG::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSimJTAG::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSimJTAG__Syms* __restrict vlSymsp = static_cast<VSimJTAG__Syms*>(userp);
    VSimJTAG* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->SimJTAG__DOT__random_bits),32);
        tracep->fullIData(oldp+2,(vlTOPp->SimJTAG__DOT__tickCounterReg),32);
        tracep->fullIData(oldp+3,(((0U == vlTOPp->SimJTAG__DOT__tickCounterReg)
                                    ? 0x32U : (vlTOPp->SimJTAG__DOT__tickCounterReg 
                                               - (IData)(1U)))),32);
        tracep->fullBit(oldp+4,(vlTOPp->SimJTAG__DOT__r_reset));
        tracep->fullBit(oldp+5,(vlTOPp->SimJTAG__DOT__init_done_sticky));
        tracep->fullBit(oldp+6,(vlTOPp->clock));
        tracep->fullBit(oldp+7,(vlTOPp->reset));
        tracep->fullBit(oldp+8,(vlTOPp->enable));
        tracep->fullBit(oldp+9,(vlTOPp->init_done));
        tracep->fullBit(oldp+10,(vlTOPp->jtag_TCK));
        tracep->fullBit(oldp+11,(vlTOPp->jtag_TMS));
        tracep->fullBit(oldp+12,(vlTOPp->jtag_TDI));
        tracep->fullBit(oldp+13,(vlTOPp->jtag_TRSTn));
        tracep->fullBit(oldp+14,(vlTOPp->jtag_TDO_data));
        tracep->fullBit(oldp+15,(vlTOPp->jtag_TDO_driven));
        tracep->fullIData(oldp+16,(vlTOPp->exit),32);
        tracep->fullIData(oldp+17,(0x32U),32);
    }
}
