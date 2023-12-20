// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimJTAG.h for the primary calling header

#include "VSimJTAG___024unit.h"
#include "VSimJTAG__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VSimJTAG___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/ (&jtag_TCK), CData/*0:0*/ (&jtag_TMS), CData/*0:0*/ (&jtag_TDI), CData/*0:0*/ (&jtag_TRSTn), CData/*0:0*/ jtag_TDO, IData/*31:0*/ (&jtag_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSimJTAG___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit\n"); );
    // Body
    svBit jtag_TCK__Vcvt;
    svBit jtag_TMS__Vcvt;
    svBit jtag_TDI__Vcvt;
    svBit jtag_TRSTn__Vcvt;
    svBit jtag_TDO__Vcvt;
    jtag_TDO__Vcvt = jtag_TDO;
    int jtag_tick__Vfuncrtn__Vcvt;
    jtag_tick__Vfuncrtn__Vcvt = jtag_tick(&jtag_TCK__Vcvt, &jtag_TMS__Vcvt, &jtag_TDI__Vcvt, &jtag_TRSTn__Vcvt, jtag_TDO__Vcvt);
    jtag_TCK = (1U & jtag_TCK__Vcvt);
    jtag_TMS = (1U & jtag_TMS__Vcvt);
    jtag_TDI = (1U & jtag_TDI__Vcvt);
    jtag_TRSTn = (1U & jtag_TRSTn__Vcvt);
    jtag_tick__Vfuncrtn = jtag_tick__Vfuncrtn__Vcvt;
}
