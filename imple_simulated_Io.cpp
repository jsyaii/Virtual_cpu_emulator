#include <iostream>
#include <string>

int main()
{
    std::string display;
    char key;

    while (true)
    {
        std::cout << "Enter a key (q to quit): ";
        std::cin >> key;

        if (key == 'q')
        {
            std::cout << "CPU halted.\n";
            break;
        }

        display += key;
        std::cout << "Display: " << display << "\n";
    }

    return 0;
};
