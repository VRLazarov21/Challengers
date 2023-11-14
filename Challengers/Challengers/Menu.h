#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void menu() {

    HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 7);

    string MenuArr[7][1]{
        "___________________",
        "|                 |",
        "|       MENU      |",
        "|                 |",
        "|     Elements    |",
        "|       Exit      |",
        "|_________________|"
    };
    SetConsoleTextAttribute(color, 11);
    for (int i = 0; i < 7; i++) {
        cout << MenuArr[i][0] << endl;
    }
    string InputChouse;
    SetConsoleTextAttribute(color, 7);
    cout << "Your chouse : ";
    SetConsoleTextAttribute(color, 11);
    cin >> InputChouse;
    cout << endl;
    SetConsoleTextAttribute(color, 7);
    while (InputChouse != "" && InputChouse != "Elements" && InputChouse != "Colors" && InputChouse != "Exit") {
        SetConsoleTextAttribute(color, 12);
        cout << "Error" << endl;
        SetConsoleTextAttribute(color, 7);
        cout << "Your chouse : ";
        SetConsoleTextAttribute(color, 11);
        cin >> InputChouse;
        cout << endl;
        SetConsoleTextAttribute(color, 7);
    }
}

int main() {
    menu();
}