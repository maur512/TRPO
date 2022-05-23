#include "includer.h"

int setIntValue() {
    std::string number;
    int menu_value = -1;
    while (std::getline(std::cin, number))
    {
        std::stringstream ss(number);
        if (ss >> menu_value)
        {
            if (ss.eof())
            {
                return menu_value;
                break;
            }
        }
        std::cout << "Введите верное значение:  \n";
    }
}