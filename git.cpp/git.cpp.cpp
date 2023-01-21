#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
HANDLE hConsole;
enum ColorConsole {
    Blue = 3
};
int main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, Blue);
    cout << "Hello World" << endl;
    return 0;
}

