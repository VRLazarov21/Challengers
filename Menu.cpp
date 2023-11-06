#include <iostream>
using namespace std;

void menu(){
    string MenuArr[8][1]{
        "___________________",
        "|                 |",
        "|       MENU      |",
        "|                 |",
        "|     Elements    |",
        "|      Colors     |",
        "|       Exit      |",
        "|_________________|"
    };
    string InputChouse;
    cout << "Your chouse :";
    cin >> InputChouse;
    cout << endl;
    while(InputChouse!="" && InputChouse!="Elements" && InputChouse!="Colors" && InputChouse!="Exit"){
        cout << "Error" << endl;
        cout << "Your chouse :";
        cin >> InputChouse;
        cout << endl;
    }
}

int main(){
    menu();
}