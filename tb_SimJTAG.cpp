#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VSimJTAG.h"
#include "VSimJTAG___024unit.h"

#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    VSimJTAG *dut = new VSimJTAG;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 3);
    m_trace->open("waveform.vcd");
    dut->reset = 0;
    dut->enable = 0;
    dut->init_done = 0;
    int counter = 0;

    while (sim_time < MAX_SIM_TIME) {
        if (sim_time == 10)
          dut->reset = 1;
        if (sim_time == 20)
          dut->reset = 0;
        if (sim_time == 30){
          dut->enable=1;
          dut->init_done=1;
        }
        dut->clock ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
