#include "Header.h"
#include <Windows.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string choice = "��";
    int i;
    while (choice == "��") {
        cout << "������� ������ �������: \n";
        cin >> i;
        show(i);
        cout << "\n������ ���������� ��������� (�� ��� ���)?\n";
        cin >> choice;
    }
}