// PipeplinesExe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "..\Application\Application.h"

int main()
{
    std::cout << "Hello World! My name is... \n";
    CoolClass coolClass;
    std::cout << "Calc " << coolClass.Calc(1, 2);
}

