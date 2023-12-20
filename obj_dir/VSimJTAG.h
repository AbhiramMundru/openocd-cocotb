// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSIMJTAG_H_
#define _VSIMJTAG_H_  // guard

#include "verilated.h"
#include "VSimJTAG__Dpi.h"

//==========

class VSimJTAG__Syms;
class VSimJTAG_VerilatedVcd;
class VSimJTAG___024unit;


//----------

VL_MODULE(VSimJTAG) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VSimJTAG___024unit* __PVT____024unit;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(enable,0,0);
    VL_IN8(init_done,0,0);
    VL_OUT8(jtag_TCK,0,0);
    VL_OUT8(jtag_TMS,0,0);
    VL_OUT8(jtag_TDI,0,0);
    VL_OUT8(jtag_TRSTn,0,0);
    VL_IN8(jtag_TDO_data,0,0);
    VL_IN8(jtag_TDO_driven,0,0);
    VL_OUT(exit,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ SimJTAG__DOT__r_reset;
    CData/*0:0*/ SimJTAG__DOT_____05Fjtag_TCK;
    CData/*0:0*/ SimJTAG__DOT_____05Fjtag_TMS;
    CData/*0:0*/ SimJTAG__DOT_____05Fjtag_TDI;
    CData/*0:0*/ SimJTAG__DOT_____05Fjtag_TRSTn;
    CData/*0:0*/ SimJTAG__DOT__init_done_sticky;
    IData/*31:0*/ SimJTAG__DOT__tickCounterReg;
    IData/*31:0*/ SimJTAG__DOT__tickCounterNxt;
    IData/*31:0*/ SimJTAG__DOT__random_bits;
    IData/*31:0*/ SimJTAG__DOT_____05Fexit;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VSimJTAG__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimJTAG);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VSimJTAG(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VSimJTAG();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VSimJTAG__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VSimJTAG__Syms* symsp, bool first);
  private:
    static QData _change_request(VSimJTAG__Syms* __restrict vlSymsp);
    static QData _change_request_1(VSimJTAG__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VSimJTAG__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VSimJTAG__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VSimJTAG__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VSimJTAG__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VSimJTAG__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
