#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std; 

struct Element {
    string name;
    string symbol;
    int atomicNumber;
    double atomicWeight;
};

void printPeriodicTable(const vector<Element>& table) {
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    cout << "| Atomic Number | Symbol | Element Name          | Atomic Weight |\n";
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
    for (const Element& element : table) {
        cout << "| " << setw(13) << element.atomicNumber << " | "
            << setw(6) << element.symbol << " | "
            << setw(20) << element.name << " | "
            << setw(13) << element.atomicWeight << " |\n";
    }
    cout << "--------------------------------------------------------------------------------------------------------------------\n";
}

int main() {
    vector<Element> periodicTable;

    periodicTable.push_back({ "Hydrogen", "H", 1, 1.008 });
    periodicTable.push_back({ "Helium", "He", 2, 4.0026 });
    periodicTable.push_back({ "Lithium", "Li", 3, 6.94 });
    periodicTable.push_back({ "Beryllium", "Be", 4, 9.0122 });
    periodicTable.push_back({ "Boron", "B", 5, 10.81 });
    periodicTable.push_back({ "Carbon", "C", 6, 12.01 });
    periodicTable.push_back({ "Nitrogen", "N", 7, 14.01 });
    periodicTable.push_back({ "Oxygen", "O", 8, 16.00 });
    periodicTable.push_back({ "Fluorine", "F", 9, 19.00 });
    periodicTable.push_back({ "Neon", "Ne", 10, 20.18 });
    periodicTable.push_back({ "Sodium", "Na", 11, 22.99 });
    periodicTable.push_back({ "Magnesium", "Mg", 12, 24.31 });
    periodicTable.push_back({ "Aluminum", "Al", 13, 26.98 });
    periodicTable.push_back({ "Silicon", "Si", 14, 28.09 });
    periodicTable.push_back({ "Phosphorus", "P", 15, 30.97 });
    periodicTable.push_back({ "Sulfur", "S", 16, 32.07 });
    periodicTable.push_back({ "Chlorine", "Cl", 17, 35.45 });
    periodicTable.push_back({ "Argon", "Ar", 18, 39.95 });
    periodicTable.push_back({ "Potassium", "K", 19, 39.10 });
    periodicTable.push_back({ "Calcium", "Ca", 20, 40.08 });
  
    printPeriodicTable(periodicTable);

}