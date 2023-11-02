#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	HANDLE hcolor= GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcolor, 1);
	string menu[7][1] = {
		"------------------",
		"|                |",
		"|      MENU      |",
		"|                |",
		"|     1-TABLE    |",
		"|                |",
		"|________________|"
	};
	for (int i = 0, v = 0; i < 7 && v < 1; i++) {
		cout << menu[i][v] << endl;
	}
}