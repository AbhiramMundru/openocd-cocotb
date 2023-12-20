// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSIMJTAG__SYMS_H_
#define _VSIMJTAG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSimJTAG.h"
#include "VSimJTAG___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VSimJTAG__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSimJTAG*                      TOPp;
    VSimJTAG___024unit             TOP____024unit;
    
    // CREATORS
    VSimJTAG__Syms(VSimJTAG* topp, const char* namep);
    ~VSimJTAG__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
