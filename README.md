# Small Kernel Project

Welcome to the **Small Kernel Project**, inspired by the "OS in 1000 lines" concept. This is a minimalistic kernel designed to explore the fundamentals of operating system development. Here's a quick overview of what this project is about and what has been achieved so far.

## What's Inside?

- **`kernel.c` & `kernel.h`**: The heart of the kernel. This is where the magic happens—basic kernel initialization, handling interrupts, and other low-level operations.
- **`common.c` & `common.h`**: Utility functions and shared code that make life easier. Think of it as the kernel's toolbox.
- **`kernel.ld`**: The linker script that ensures everything ends up in the right place in memory. Without this, the kernel wouldn't even boot.
- **`run.sh`**: A script to compile and run the kernel. It's like your personal assistant for testing.

## What Have I Done So Far?

- **Bootstrapped the Kernel**: Set up the basic structure and linker script to get the kernel up and running.
- **Memory Layout**: Defined a simple memory layout using the linker script.
- **Interrupt Handling**: Implemented basic interrupt handling to manage low-level hardware events.
- **Utility Functions**: Added some helper functions in `common.c` to simplify kernel operations.
- **Testing Setup**: Created a script (`run.sh`) to compile and test the kernel in an emulator.

## Why This Project?

This project is a hands-on dive into the world of operating systems. It's about understanding how things work under the hood—how the CPU, memory, and hardware interact with software. Plus, it's a great way to sharpen low-level programming skills.

## How to Run It?

1. Make sure you have a GCC cross-compiler for your target architecture.
2. Run the `run.sh` script to build and test the kernel.
3. Use an emulator like QEMU to see the kernel in action.

## What's Next?

- **Process Management**: Adding support for multitasking.
- **File System**: Implementing a basic file system.
- **Drivers**: Writing simple drivers for hardware interaction.

Stay tuned for more updates as this kernel evolves!

---
