# Get Started
Execute the following shell commands to build openocd
```
./bootstrap
./configure --enable-remote-bitbang
make
make install
```
Verify the openocd installation by
```
openocd -v
```

Create the executable with Verilator
```
verilator -Wall -Wno-STMTDLY -Wno-BLKSEQ -Wno-UNUSED -Wno-ASSIGNDLY --trace -cc SimJTAG.v --exe tb_SimJTAG.cpp remote_bitbang.cc SimJTAG.cc
make -C obj_dir -f VSimJTAG.mk VSimJTAG
```

Run the executable by
```
./obj_dir/VSimJTAG +jtag_rbb_enable=1
```

Run openocd in another terminal parallelly
```
openocd -f RocketSim.cfg -d4 -l ok.log
```

Refer [source](https://www.francisz.cn/2020/03/07/riscv-openocd/) for more info.
