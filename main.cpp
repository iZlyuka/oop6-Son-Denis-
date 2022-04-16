#include "Header.h"
#include <Windows.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string choice = "да";
    int i;
    while (choice == "да") {
        cout << "¬ведите размер массива: \n";
        cin >> i;
        show(i);
        cout << "\n’отите продолжить программу (да или нет)?\n";
        cin >> choice;
    }
}