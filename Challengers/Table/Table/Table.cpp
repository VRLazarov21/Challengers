#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include<Windows.h>
#include<conio.h>

using namespace std;

struct Element {
    string name;
    string symbol;
    int atomicNumber;
    double atomicWeight;
};

void find()
{
    bool T = false;
    string FindElements[90] = {
      "H","He",
      "Li","Be","B","C","N","O","F","Ne",
      "Na","Mg","Al","Si","P","S","Cl","Ar",
      "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
      "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te"," I","Xe",
      "Cs","Ba","La","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn",
      "Fr","Ra","Ac","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"
    };
    string element;
    cout << "Enter the element: ";
    cin >> element;
    cout << endl;
    for (int i = 0; i < 90; i++) {
        if (element == FindElements[i] && T == false) {
            cout << "Element: " << element << endl;
            T = true;
        }
        if (i == 89 && T == false) {
            cout << "Error" << endl;
            find();
        }
    }
    system("cls");
}

void table() {


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
    periodicTable.push_back({ "Scandium", "Sc", 21, 44.96 });
    periodicTable.push_back({ "Titanium", "Ti", 22, 47.87 });
    periodicTable.push_back({ "Vanadium", "V", 23, 50.94 });
    periodicTable.push_back({ "Chromium", "Cr", 24, 51.996 });
    periodicTable.push_back({ "Manganese", "Mn", 25, 54.94 });
    periodicTable.push_back({ "Iron", "Fe", 26, 55.85 });
    periodicTable.push_back({ "Cobalt", "Co", 27, 58.93 });
    periodicTable.push_back({ "Nickel", "Ni", 28, 58.69 });
    periodicTable.push_back({ "Copper", "Cu", 29, 63.55 });
    periodicTable.push_back({ "Zinc", "Zn", 30, 65.38 });
    periodicTable.push_back({ "Gallium", "Ga", 31, 69.72 });
    periodicTable.push_back({ "Germanium", "Ge", 32, 72.63 });
    periodicTable.push_back({ "Arsenic", "As", 33, 74.92 });
    periodicTable.push_back({ "Selenium", "Se", 34, 78.97 });
    periodicTable.push_back({ "Bromine", "Br", 35, 79.90 });
    periodicTable.push_back({ "Krypton", "Kr", 36, 83.80 });
    periodicTable.push_back({ "Rubidium", "Rb", 37, 85.47 });
    periodicTable.push_back({ "Strontium", "Sr", 38, 87.62 });
    periodicTable.push_back({ "Yttrium", "Y", 39, 88.91 });
    periodicTable.push_back({ "Zirconium", "Zr", 40, 91.22 });
    periodicTable.push_back({ "Niobium", "Nb", 41, 92.91 });
    periodicTable.push_back({ "Molybdenum", "Mo", 42, 95.96 });
    periodicTable.push_back({ "Technetium", "Tc", 43, 98 });
    periodicTable.push_back({ "Ruthenium", "Ru", 44, 101.1 });
    periodicTable.push_back({ "Rhodium", "Rh", 45, 102.9 });
    periodicTable.push_back({ "Palladium", "Pd", 46, 106.4 });
    periodicTable.push_back({ "Silver", "Ag", 47, 107.9 });
    periodicTable.push_back({ "Cadmium", "Cd", 48, 112.4 });
    periodicTable.push_back({ "Indium", "In", 49, 114.8 });
    periodicTable.push_back({ "Tin", "Sn", 50, 118.7 });
    periodicTable.push_back({ "Antimony", "Sb", 51, 121.8 });
    periodicTable.push_back({ "Tellurium", "Te", 52, 127.6 });
    periodicTable.push_back({ "Iodine", "I", 53, 126.9 });
    periodicTable.push_back({ "Xenon", "Xe", 54, 131.3 });
    periodicTable.push_back({ "Cesium", "Cs", 55, 132.9 });
    periodicTable.push_back({ "Barium", "Ba", 56, 137.3 });
    periodicTable.push_back({ "Lanthanum", "La", 57, 138.9 });
    periodicTable.push_back({ "Cerium", "Ce", 58, 140.1 });
    periodicTable.push_back({ "Praseodymium", "Pr", 59, 140.9 });
    periodicTable.push_back({ "Neodymium", "Nd", 60, 144.2 });
    periodicTable.push_back({ "Promethium", "Pm", 61, 145 });
    periodicTable.push_back({ "Samarium", "Sm", 62, 150.4 });
    periodicTable.push_back({ "Europium", "Eu", 63, 152 });
    periodicTable.push_back({ "Gadolinium", "Gd", 64, 157.3 });
    periodicTable.push_back({ "Terbium", "Tb", 65, 158.9 });
    periodicTable.push_back({ "Dysprosium", "Dy", 66, 162.5 });
    periodicTable.push_back({ "Holmium", "Ho", 67, 164.9 });
    periodicTable.push_back({ "Erbium", "Er", 68, 167.3 });
    periodicTable.push_back({ "Thulium", "Tm", 69, 168.9 });
    periodicTable.push_back({ "Ytterbium", "Yb", 70, 173.1 });
    periodicTable.push_back({ "Lutetium", "Lu", 71, 175 });
    periodicTable.push_back({ "Hafnium", "Hf", 72, 178.5 });
    periodicTable.push_back({ "Tantalum", "Ta", 73, 180.9 });
    periodicTable.push_back({ "Tungsten", "W", 74, 183.8 });
    periodicTable.push_back({ "Rhenium", "Re", 75, 186.2 });
    periodicTable.push_back({ "Osmium", "Os", 76, 190.2 });
    periodicTable.push_back({ "Iridium", "Ir", 77, 192.2 });
    periodicTable.push_back({ "Platinum", "Pt", 78, 195.1 });
    periodicTable.push_back({ "Gold", "Au", 79, 197 });
    periodicTable.push_back({ "Mercury", "Hg", 80, 200.6 });
    periodicTable.push_back({ "Thallium", "Tl", 81, 204.4 });
    periodicTable.push_back({ "Lead", "Pb", 82, 207.2 });
    periodicTable.push_back({ "Bismuth", "Bi", 83, 208.98 });
    periodicTable.push_back({ "Polonium", "Po", 84, 209.98 });
    periodicTable.push_back({ "Astatine", "At", 85, 210 });
    periodicTable.push_back({ "Radon", "Rn", 86, 222 });
    periodicTable.push_back({ "Francium", "Fr", 87, 223 });
    periodicTable.push_back({ "Radium", "Ra", 88, 226 });
    periodicTable.push_back({ "Actinium", "Ac", 89, 227 });
    periodicTable.push_back({ "Thorium", "Th", 90, 232.04 });
    periodicTable.push_back({ "Protactinium", "Pa", 91, 231.04 });
    periodicTable.push_back({ "Uranium", "U", 92, 238.03 });
    periodicTable.push_back({ "Neptunium", "Np", 93, 237 });
    periodicTable.push_back({ "Plutonium", "Pu", 94, 244 });
    periodicTable.push_back({ "Americium", "Am", 95, 243 });
    periodicTable.push_back({ "Curium", "Cm", 96, 247 });
    periodicTable.push_back({ "Berkelium", "Bk", 97, 247 });
    periodicTable.push_back({ "Californium", "Cf", 98, 251 });
    periodicTable.push_back({ "Einsteinium", "Es", 99, 252 });
    periodicTable.push_back({ "Fermium", "Fm", 100, 257 });
    periodicTable.push_back({ "Mendelevium", "Md", 101, 258 });
    periodicTable.push_back({ "Nobelium", "No", 102, 259 });
    periodicTable.push_back({ "Lawrencium", "Lr", 103, 262 });
    periodicTable.push_back({ "Rutherfordium", "Rf", 104, 267 });
    periodicTable.push_back({ "Dubnium", "Db", 105, 270 });
    periodicTable.push_back({ "Seaborgium", "Sg", 106, 271 });
    periodicTable.push_back({ "Bohrium", "Bh", 107, 270 });
    periodicTable.push_back({ "Hassium", "Hs", 108, 269 });
    periodicTable.push_back({ "Meitnerium", "Mt", 109, 278 });
    periodicTable.push_back({ "Darmstadtium", "Ds", 110, 281 });
    periodicTable.push_back({ "Roentgenium", "Rg", 111, 280 });
    periodicTable.push_back({ "Copernicium", "Cn", 112, 285 });
    periodicTable.push_back({ "Nihonium", "Nh", 113, 284 });
    periodicTable.push_back({ "Flerovium", "Fl", 114, 289 });
    periodicTable.push_back({ "Moscovium", "Mc", 115, 288 });
    periodicTable.push_back({ "Livermorium", "Lv", 116, 293 });
    periodicTable.push_back({ "Tennessine", "Ts", 117, 294 });
    periodicTable.push_back({ "Oganesson", "Og", 118, 294 });

    cout << "-----------------------------------------------------------------\n";
    cout << "| Atomic Number | Symbol |     Element Name     | Atomic Weight |\n";
    cout << "-----------------------------------------------------------------\n";
    for (const Element& element : periodicTable) {
        cout << "| " << setw(13) << element.atomicNumber << " | "
            << setw(6) << element.symbol << " | "
            << setw(20) << element.name << " | "
            << setw(13) << element.atomicWeight << " |\n";
    }
    cout << "-----------------------------------------------------------------\n";


}

int main()
{
    table();
    find();

    /////////////////////////////////////////

    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hc, 7);
    cout << "Hydrogen (H2):" << endl << endl;

    SetConsoleTextAttribute(hc, 2);
    cout << "Positive aspects:" << endl << endl;
    cout << "1. Hydrogen Economy: Hydrogen is considered a potentially clean and efficient energy source that can replace conventional fuels. This could reduce greenhouse gas emissions and dependence on oil and gas, which is positive for the economy." << endl << endl;
    cout << "2. Alternative Energy Sources: Hydrogen can be produced from renewable energy sources such as solar and wind. This can stimulate investments in renewable energy technologies and promote economic growth in the renewable energy sector." << endl << endl;
    cout << "3. Innovation and New Jobs: The development of hydrogen technology can lead to the creation of new jobs in research, production, and the distribution of hydrogen technologies." << endl << endl;

    SetConsoleTextAttribute(hc, 7);
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    SetConsoleTextAttribute(hc, 4);
    cout << "Negative aspects:" << endl << endl;
    cout << "1. High Costs: The production, storage, and transportation of hydrogen can be expensive and require significant investments in infrastructure. This can be a financial burden on the economy." << endl << endl;
    cout << "2. Technology Efficiency: Hydrogen technologies are still evolving, and there may be challenges related to their efficiency and reliability. These challenges can lead to financial losses." << endl << endl;
    cout << "3. Competition with Other Technologies: Hydrogen competes with other alternative energy sources like batteries and fuel cells, which can lead to the allocation of investments and resources in the energy technology sector." << endl << endl;

    SetConsoleTextAttribute(hc, 7);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Helium (He):" << endl << endl;

    cout << "Positive aspects:" << endl << endl;
    cout << "1. Scientific and Medical Advancements: Helium is essential for various scientific and medical applications, including magnetic resonance imaging (MRI) machines, which are widely used in the healthcare industry for diagnosis and research. Its availability supports advancements in medical technology, contributing to improved patient care." << endl << endl;
    cout << "2. Aerospace and Defense: Helium is used in various applications within the aerospace and defense industries, such as in airships, weather balloons, and rocket propulsion. It aids in surveillance, research, and national security." << endl << endl;
    cout << "3. Industrial Uses: Helium is used in various industrial processes, including cooling and welding. It plays a crucial role in maintaining and enhancing industrial operations, contributing to efficiency and productivity." << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "Negative aspects:" << endl << endl;
    cout << "1. Limited Supply: Helium is relatively rare on Earth, and its extraction and production are limited. The helium supply is finite, and overreliance on helium for non-essential applications can lead to potential shortages and price volatility." << endl << endl;
    cout << "2. Economic Vulnerability: The helium market can be vulnerable to price fluctuations due to supply constraints. This can impact industries that depend on helium, such as medical and manufacturing, by leading to increased costs." << endl << endl;
    cout << "3. Competition with Scientific Research: The use of helium in non-essential applications may divert resources away from scientific research and medical purposes where its unique properties are indispensable." << endl << endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Lithium (Li):" << endl << endl;

    cout << "Positive aspects:" << endl << endl;
    cout << "1. Batteries and Energy Storage: Lithium-ion batteries are widely used in various applications, including electric vehicles (EVs), consumer electronics, and grid energy storage. The growth of the electric vehicle industry, in particular, has led to increased demand for lithium, creating economic opportunities in manufacturing and technology development." << endl << endl;
    cout << "2. Clean Energy Transition: Lithium plays a crucial role in the transition to clean energy sources. It is a key component in the development of renewable energy technologies, such as solar and wind power, as well as the storage of energy from these sources. This contributes to reduced greenhouse gas emissions and a more sustainable energy future." << endl << endl;
    cout << "3. Economic Growth: Lithium mining and processing can stimulate economic growth in regions with significant lithium deposits. It can lead to increased export revenue, investments in infrastructure, and the development of related industries." << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "Negative aspects:" << endl << endl;
    cout << "1. Environmental Concerns: The extraction of lithium from the Earth's crust, particularly through open-pit mining and evaporation ponds, can have environmental impacts, including habitat disruption, water resource depletion, and chemical pollution. Sustainable mining practices are essential to mitigate these negative effects." << endl << endl;
    cout << "2. Resource Concentration: A significant portion of the world's lithium reserves is concentrated in a few countries, primarily in South America and Australia. This can lead to geopolitical and economic concerns, as countries with limited lithium resources may become dependent on a small number of lithium-rich nations." << endl << endl;
    cout << "3. Price Volatility: The price of lithium can be subject to fluctuations due to supply and demand dynamics. This can affect industries that rely on lithium, such as battery manufacturers, by potentially increasing production costs." << endl << endl;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "Beryllium (Be):" << endl << endl;

    cout << "Positive aspects:" << endl << endl;
    cout << "1. " << endl << endl;
    cout << "2. " << endl << endl;
    cout << "3. " << endl << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

    cout << "Negative aspects:" << endl << endl;
    cout << "1. " << endl << endl;
    cout << "2. " << endl << endl;
    cout << "3. " << endl << endl;
}