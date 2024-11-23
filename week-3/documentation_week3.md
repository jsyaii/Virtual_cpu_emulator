Overview :


This simulation models three basic components of a CPU:

1.Arithmetic Logic Unit (ALU): Handles arithmetic and logical operations.
2.CPU Core: Manages registers, performs data movement, and executes arithmetic operations.
3.Program Counter (PC) and Instruction Register (IR): Tracks program execution flow and stores current instructions.

<!-- ALU -->
1. Arithmetic Logic Unit (ALU)
Description:
The ALU performs basic arithmetic and bitwise operations such as addition, subtraction, AND, OR, XOR, and NOT.

Key Methods:
perform(Operation op, int32_t a, int32_t b = 0)
Executes the specified operation.
Supports the following operations: ADD, SUB, AND, OR, XOR, NOT.

<!-- CPU CORE -->
2. CPU Core
Description:
The CPU Core simulates basic CPU operations such as data movement between registers and arithmetic operations.

Key Methods:
load(const string& reg, int value)
Loads a value into a specified register.
move(const string& src, const string& dest)
Copies the value from one register to another.
add(const string& r1, const string& r2, const string& result)
Adds values from two registers and stores the result in a target register.
print_registers()
Prints the current state of all registers.


<!-- PC & IR -->

3. Program Counter (PC) and Instruction Register (IR)

Description:
These components handle the execution flow:

PC: Tracks the address of the next instruction.
IR: Stores the current instruction being executed.

Key Methods:

PC:
increment()
Advances the program counter by 1.
set_value(int new_value)
Sets the program counter to a specified value.

IR:
load(const string& instruction)
Loads a new instruction into the instruction register.
