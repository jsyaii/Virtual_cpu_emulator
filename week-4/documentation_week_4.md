Code 1: Basic Fetch-Decode-Execute Cycle
Overview:
Simulates a simple CPU with a fetch-decode-execute cycle.

Key Features:
Memory: {0x1A, 0x2B, 0x3C}.
PC (Program Counter) starts at 0.
IR (Instruction Register) holds the fetched instruction.
Cycle continues until all instructions are executed.

How it Works:
Fetch: Get the instruction from memory.
Decode: Convert and print instruction in hex.
Execute: Print the executed instruction.
Code 2: Virtual CPU with Simple Instruction Set
Overview:
Simulates a CPU that executes basic arithmetic and data manipulation operations.

Key Features:
Memory: 256 bytes.
Registers: 8 registers.
Opcodes: MOV, ADD, SUB, HLT.
Program loads and modifies registers based on instructions.
How it Works:
CPU manages memory, registers, and PC.
Run method fetches and decodes instructions until HLT.
Prints final register state after execution.
Code 3: Simple CPU with Load, Add, and Store Instructions
Overview:
Simulates a CPU with basic LOAD, ADD, and STORE operations.

Key Features:
Memory: 10 bytes.
Registers: 4 registers.
Instructions: LOAD, ADD, STORE, NOP.
How it Works:
Load program into memory with LOAD, ADD, and STORE instructions.
Fetch and execute instructions in a loop.
Output the final state of registers and memory.