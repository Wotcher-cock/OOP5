#include <iostream>
#include "BD.h"
#include "PL.h"


void func1(Base obj)
{
    std::cout << "func1\n";
}

void func2(Base* obj)
{
    std::cout << "func2\n";
}

void func3(Base& obj)
{
    std::cout << "func3\n";
}

int main()
{
    setlocale(LC All, "rus");
    std::cout << "Hello World!\n";
}

