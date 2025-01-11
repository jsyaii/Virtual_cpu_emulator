#include <iostream>
#include <vector>
using namespace std;

// Virtual CPU class
class VirtualCPU
{
private:
    int registers[4];   // Four general-purpose registers
    vector<int> memory; // Memory to store instructions and data
    int pc;             // Program Counter

public:
    VirtualCPU(int memorySize) : pc(0)
    {
        memory.resize(memorySize, 0);
        fill(begin(registers), end(registers), 0);
    }

    void loadProgram(const vector<int> &program)
    {
        for (size_t i = 0; i < program.size(); ++i)
        {
            memory[i] = program[i];
        }
    }

    void run()
    {
        while (pc < memory.size())
        {
            int instruction = memory[pc];
            switch (instruction)
            {
            case 1: // IN: Read from keyboard into a register
                handleInput();
                break;
            case 2: // OUT: Write register value to display
                handleOutput();
                break;
            case 99: // HALT
                cout << "Program halted." << endl;
                return;
            default:
                cout << "Unknown instruction: " << instruction << endl;
                return;
            }
        }
    }

private:
    void handleInput()
    {
        int regIndex;
        pc++;
        regIndex = memory[pc];
        if (regIndex < 0 || regIndex >= 4)
        {
            cout << "Invalid register index for input." << endl;
            return;
        }
        cout << "Enter value for Register[" << regIndex << "]: ";
        cin >> registers[regIndex];
        pc++;
    }

    void handleOutput()
    {
        int regIndex;
        pc++;
        regIndex = memory[pc];
        if (regIndex < 0 || regIndex >= 4)
        {
            cout << "Invalid register index for output." << endl;
            return;
        }
        cout << "Register[" << regIndex << "] = " << registers[regIndex] << endl;
        pc++;
    }
};

int main()
{
    // I/O-intensive program: Complex sequence of inputs and outputs
    vector<int> program = {
        1, 0, // IN: Input to Register[0]
        1, 1, // IN: Input to Register[1]
        2, 0, // OUT: Output from Register[0]
        2, 1, // OUT: Output from Register[1]
        1, 2, // IN: Input to Register[2]
        2, 2, // OUT: Output from Register[2]
        1, 3, // IN: Input to Register[3]
        2, 3, // OUT: Output from Register[3]
        2, 0, // OUT: Output from Register[0] again
        2, 1, // OUT: Output from Register[1] again
        1, 0, // IN: Input to Register[0] (overwrite)
        2, 0, // OUT: Output from Register[0] after overwrite
        2, 2, // OUT: Output from Register[2] again
        99    // HALT
    };

    cout << "Starting I/O-intensive Virtual CPU Program\n";
    VirtualCPU cpu(20);
    cpu.loadProgram(program);
    cpu.run();

    return 0;
}
