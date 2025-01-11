#include <iostream>

class CPU
{
public:
    uint8_t inputDevice, outputDevice;
    uint8_t registerFile[8];

    CPU()
    {
        inputDevice = 0;
        outputDevice = 0;
        for (int i = 0; i < 8; i++)
            registerFile[i] = 0;
    }

    void IN(int regIndex)
    {
        registerFile[regIndex] = inputDevice;
    }

    void OUT(int regIndex)
    {
        outputDevice = registerFile[regIndex];
    }

    void setInputDevice(uint8_t data)
    {
        inputDevice = data;
    }

    uint8_t getOutputDevice()
    {
        return outputDevice;
    }
};

int main()
{
    CPU cpu;
    cpu.setInputDevice(42);
    cpu.IN(0);
    cpu.OUT(0);
    std::cout << (int)cpu.getOutputDevice() << std::endl;
    return 0;
}