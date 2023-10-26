# SuperFrog
VGA lab for EITF35

![Screenshot](./examples/Simulator.jpeg)

## Requirements

To build the simulations, you need:

1. C++ Toolchain (clang, gcc)
2. Verilator
3. SDL

Directory structure below.
```shell
├── README.md
├── SuperFrog
│   ├── Nexys7
│   │   ├── HDL files
│   └── Verilator
│       ├── Makefile
│       ├── main_superfrog.cpp
│       └── top_superfrog.sv
└── vga_example
    ├── Nexys7
    │   ├── main.xdc
    │   ├── vga.v
    │   └── vga_tb.v
    └── Verilator
        ├── Makefile
        ├── main_vga.cpp
        └── top_vga.sv
```

Just run make all in the Verilator directory.
Binary need to be run from the Verilator directory due to static paths.

```shell
./obj-dir/superfrog
```






