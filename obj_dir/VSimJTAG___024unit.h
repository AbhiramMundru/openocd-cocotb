// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimJTAG.h for the primary calling header

#ifndef _VSIMJTAG___024UNIT_H_
#define _VSIMJTAG___024UNIT_H_  // guard

#include "verilated.h"
#include "VSimJTAG__Dpi.h"

//==========

class VSimJTAG__Syms;
class VSimJTAG_VerilatedVcd;


//----------

VL_MODULE(VSimJTAG___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VSimJTAG__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimJTAG___024unit);  ///< Copying not allowed
  public:
    VSimJTAG___024unit(const char* name = "TOP");
    ~VSimJTAG___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VSimJTAG__Syms* symsp, bool first);
    void __Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/ (&jtag_TCK), CData/*0:0*/ (&jtag_TMS), CData/*0:0*/ (&jtag_TDI), CData/*0:0*/ (&jtag_TRSTn), CData/*0:0*/ jtag_TDO, IData/*31:0*/ (&jtag_tick__Vfuncrtn));
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
