#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <Windows.h>
#include <conio.h>

using namespace std;

struct Element {
    string name;
    string symbol;
    int atomicNumber;
    double atomicWeight;
};


string element;
string FindElements[118] = {
      "H","He",
      "Li","Be","B","C","N","O","F","Ne",
      "Na","Mg","Al","Si","P","S","Cl","Ar",
      "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
      "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te"," I","Xe",
      "Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu",
      "Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn",
      "Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm","Md","No","Lr",
      "Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"
};


int find_output()
{
    for (int i = 0; i < 118; i++)
    {
        if (element == FindElements[i])
        {
            return i + 1;
            break;
        }
    }
}


void find()
{
    bool T = false;
    cout << "Enter the element: ";
    cin >> element;
    cout << endl;
    for (int i = 0; i < 118; i++) {
        if (element == FindElements[i] && T == false) {
            cout << "Element: " << element << endl;
            T = true;
        }
        if (i == 117 && T == false) {
            cout << "Error" << endl;
            find();
        }
    }
    system("cls");
}

bool is_element(string input)
{
    bool result = false;
    for (int i = 0; i < 118; i++)
    {
        if (input == FindElements[i])result = true;
    }
    return result;
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


void TextElement()
{

    /////////////////////////////////////////

    HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
    switch (find_output())
    {
    case 1:SetConsoleTextAttribute(hc, 7);
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
        break;

    case 2:SetConsoleTextAttribute(hc, 7);
        cout << "Helium (He):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific and Medical Advancements: Helium is essential for various scientific and medical applications, including magnetic resonance imaging (MRI) machines, which are widely used in the healthcare industry for diagnosis and research. Its availability supports advancements in medical technology, contributing to improved patient care." << endl << endl;
        cout << "2. Aerospace and Defense: Helium is used in various applications within the aerospace and defense industries, such as in airships, weather balloons, and rocket propulsion. It aids in surveillance, research, and national security." << endl << endl;
        cout << "3. Industrial Uses: Helium is used in various industrial processes, including cooling and welding. It plays a crucial role in maintaining and enhancing industrial operations, contributing to efficiency and productivity." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Limited Supply: Helium is relatively rare on Earth, and its extraction and production are limited. The helium supply is finite, and overreliance on helium for non-essential applications can lead to potential shortages and price volatility." << endl << endl;
        cout << "2. Economic Vulnerability: The helium market can be vulnerable to price fluctuations due to supply constraints. This can impact industries that depend on helium, such as medical and manufacturing, by leading to increased costs." << endl << endl;
        cout << "3. Competition with Scientific Research: The use of helium in non-essential applications may divert resources away from scientific research and medical purposes where its unique properties are indispensable." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 3:SetConsoleTextAttribute(hc, 7);
        cout << "Lithium (Li):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Batteries and Energy Storage: Lithium-ion batteries are widely used in various applications, including electric vehicles (EVs), consumer electronics, and grid energy storage. The growth of the electric vehicle industry, in particular, has led to increased demand for lithium, creating economic opportunities in manufacturing and technology development." << endl << endl;
        cout << "2. Clean Energy Transition: Lithium plays a crucial role in the transition to clean energy sources. It is a key component in the development of renewable energy technologies, such as solar and wind power, as well as the storage of energy from these sources. This contributes to reduced greenhouse gas emissions and a more sustainable energy future." << endl << endl;
        cout << "3. Economic Growth: Lithium mining and processing can stimulate economic growth in regions with significant lithium deposits. It can lead to increased export revenue, investments in infrastructure, and the development of related industries." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: The extraction of lithium from the Earth's crust, particularly through open-pit mining and evaporation ponds, can have environmental impacts, including habitat disruption, water resource depletion, and chemical pollution. Sustainable mining practices are essential to mitigate these negative effects." << endl << endl;
        cout << "2. Resource Concentration: A significant portion of the world's lithium reserves is concentrated in a few countries, primarily in South America and Australia. This can lead to geopolitical and economic concerns, as countries with limited lithium resources may become dependent on a small number of lithium-rich nations." << endl << endl;
        cout << "3. Price Volatility: The price of lithium can be subject to fluctuations due to supply and demand dynamics. This can affect industries that rely on lithium, such as battery manufacturers, by potentially increasing production costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 4:
        SetConsoleTextAttribute(hc, 7);
        cout << "Beryllium (Be):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Aerospace and Defense: Beryllium is highly valued in the aerospace and defense industries for its unique combination of properties, including its high strength-to-weight ratio, thermal stability, and electrical conductivity. It is used in components for aircraft, satellites, missiles, and space exploration, contributing to advancements in these sectors." << endl << endl;
        cout << "2. Nuclear Industry: Beryllium is used in nuclear reactors as a neutron reflector and a moderator. It enhances the efficiency and safety of nuclear energy generation, which can contribute to clean energy production." << endl << endl;
        cout << "3. Medical and Scientific Instruments: Beryllium's low thermal expansion and high stiffness make it suitable for X-ray machines, CT scanners, and other medical and scientific instruments. It supports advancements in medical technology and scientific research." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Health Hazards: Beryllium is considered a toxic element, and exposure to beryllium dust or fumes can lead to lung diseases, such as chronic beryllium disease (CBD). Proper safety measures are crucial for workers in beryllium-related industries to prevent health risks." << endl << endl;
        cout << "2. Limited Supply: Beryllium is relatively rare in nature, and mining and processing it can be expensive and challenging. The limited supply can lead to price volatility, which may affect industries reliant on beryllium." << endl << endl;
        cout << "3. Environmental Concerns: The extraction and processing of beryllium can have environmental impacts, including habitat disturbance and potential contamination of soil and water. Sustainable mining practices are important to mitigate these issues." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 5:
        SetConsoleTextAttribute(hc, 7);
        cout << "Boron (B):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Boron is an essential micronutrient for plant growth. It is used in agriculture through boron-containing fertilizers to improve crop yields and quality. This contributes to increased food production and supports the agricultural industry." << endl << endl;
        cout << "2. Glass and Ceramics: Boron compounds, particularly borosilicate glass, are used in various applications, including laboratory glassware, optical lenses, and smartphone screens. The production and use of boron-based materials drive economic activity in the glass and ceramics industries." << endl << endl;
        cout << "3. Semiconductors and Electronics: Boron is used in the semiconductor industry for doping silicon and as an insulating material. It plays a crucial role in the manufacturing of electronic devices, such as computer chips and solar cells, contributing to advancements in technology." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Health and Safety Concerns: Boron compounds, when handled improperly, can be harmful to human health. Occupational exposure to boron dust and fumes can lead to respiratory issues. Proper safety measures and regulations are necessary to minimize health risks in boron-related industries." << endl << endl;
        cout << "2. Environmental Impact: The mining and processing of boron-containing minerals can have environmental consequences, such as habitat disruption and the release of contaminants. Sustainable mining practices are important for mitigating these impacts." << endl << endl;
        cout << "3. Limited Supply: Boron resources are not as abundant as some other elements, and their availability is not evenly distributed globally. This can lead to price volatility and potential supply chain disruptions for industries reliant on boron." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 6:
        SetConsoleTextAttribute(hc, 7);
        cout << "Carbon (C):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Energy Production: Carbon-based fuels, such as coal, natural gas, and oil, are significant sources of energy for power generation, heating, and transportation. These energy sources have historically fueled economic growth and industrial development." << endl << endl;
        cout << "2. Manufacturing: Carbon is a fundamental element in various manufacturing processes. It is used in the production of steel, cement, plastics, and a wide range of industrial materials, supporting economic activity in the manufacturing sector." << endl << endl;
        cout << "3. Technology and Innovation: Carbon-based materials, including carbon fiber and graphene, are used in advanced technologies such as aerospace, automotive, and electronics. These materials contribute to technological advancements and innovation, leading to economic growth." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Carbon Emissions: The burning of carbon-based fuels releases carbon dioxide (CO2) and other greenhouse gases into the atmosphere, contributing to climate change and global warming. This has potential long-term economic consequences, including increased costs related to adaptation and mitigation efforts." << endl << endl;
        cout << "2. Environmental Degradation: The extraction, processing, and use of carbon-based resources can lead to environmental degradation, including habitat destruction, air and water pollution, and resource depletion. These impacts can have economic costs in terms of environmental restoration and health-related expenses." << endl << endl;
        cout << "3. Resource Depletion: Fossil fuel reserves, which are major sources of carbon, are finite. As these resources deplete, there may be economic consequences related to energy security, energy transition costs, and market volatility." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 7:
        SetConsoleTextAttribute(hc, 7);
        cout << "Nitrogen (N):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Nitrogen is a primary component of fertilizers, which are essential for crop production. Fertilizers containing nitrogen compounds like ammonia, urea, and nitrate boost agricultural yields, contributing to food security and supporting the agricultural industry. This, in turn, helps stimulate the economy." << endl << endl;
        cout << "2. Food Production: Nitrogen is a critical component of proteins and is essential for plant and animal growth. It plays a fundamental role in food production, contributing to the agricultural and food processing sectors." << endl << endl;
        cout << "3. Industrial Applications: Nitrogen is used in various industrial applications, such as food packaging (to extend shelf life), electronics manufacturing (to create inert atmospheres), and chemical production (e.g., in the synthesis of ammonia, nitric acid, and explosives). These applications drive economic activity in these industries." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Water Pollution: Excess nitrogen from agricultural runoff, wastewater, and industrial sources can lead to water pollution. Nitrogen compounds, such as nitrates, can contaminate groundwater and surface water, posing health risks and economic costs for water treatment and environmental cleanup." << endl << endl;
        cout << "2. Air Pollution: Nitrogen oxides (NOx) released from combustion processes, especially in vehicles and industrial facilities, contribute to air pollution. NOx can lead to respiratory issues, smog formation, and the economic burden of healthcare costs associated with air pollution-related illnesses." << endl << endl;
        cout << "3. Eutrophication: Nitrogen runoff into water bodies can lead to eutrophication, which causes excessive algal growth and can harm aquatic ecosystems. Eutrophication can disrupt fisheries, tourism, and property values, impacting local economies." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 8:
        SetConsoleTextAttribute(hc, 7);
        cout << "Oxygen (O):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Healthcare: Oxygen is a vital component in the field of healthcare. It is used in medical settings for various treatments and therapies, such as respiratory support for patients with breathing difficulties and anesthesia during surgeries. This indirectly supports the healthcare industry, which is a significant sector of the economy." << endl << endl;
        cout << "2. Welding and Metal Fabrication: Oxygen is a critical component in oxyfuel welding and cutting processes used in metal fabrication. The metalworking industry relies on these processes for cutting, shaping, and joining metals, contributing to economic activity in this sector." << endl << endl;
        cout << "3. Health and Productivity: Clean air with an adequate supply of oxygen is crucial for human health. A healthy workforce is generally more productive, resulting in a positive impact on the economy. Good air quality can reduce the incidence of respiratory diseases and related healthcare costs." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Energy Costs: In certain industrial processes, oxygen may be required for combustion. The use of oxygen in industrial applications can increase energy costs, which can impact the overall cost of production for businesses." << endl << endl;
        cout << "2. Environmental Concerns: While oxygen itself is not a pollutant, the burning of fossil fuels in the presence of oxygen can produce carbon dioxide (CO2) and other pollutants that contribute to environmental challenges such as climate change and air pollution. These issues can lead to economic costs related to mitigation and adaptation efforts." << endl << endl;
        cout << "3. Healthcare Costs: While oxygen is essential for medical treatments, the healthcare industry can also face challenges related to the cost of medical oxygen supplies and equipment, which can affect healthcare budgets and costs for patients." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 9:
        SetConsoleTextAttribute(hc, 7);
        cout << "Fluorine (F):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Chemical Industry: Fluorine and its compounds have numerous applications in the chemical industry. It is used in the production of various chemicals, including fluoropolymers like Teflon, which are valuable in manufacturing processes, such as non-stick coatings for cookware. These applications contribute to economic activity in the chemical sector." << endl << endl;
        cout << "2. Pharmaceuticals: Fluorine is frequently incorporated into drug molecules to enhance their effectiveness and stability. The pharmaceutical industry benefits from fluorinated compounds that improve the bioavailability and pharmacokinetics of drugs, leading to economic growth in this sector." << endl << endl;
        cout << "3. Dental Health: Fluoride is commonly added to drinking water and dental products for its role in preventing tooth decay. Improved dental health can lead to reduced healthcare costs associated with dental treatments and increased workforce productivity due to better oral health." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Health and Safety Concerns: Fluorine is highly toxic and corrosive. Occupational exposure to fluorine and its compounds can lead to health and safety concerns for workers in industries that handle these substances. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "2. Environmental Impact: The production and disposal of certain fluorinated compounds can contribute to environmental pollution. Perfluorinated compounds, for example, have raised concerns due to their persistence in the environment and potential health effects. Addressing these environmental concerns may require additional costs for cleanup and regulation." << endl << endl;
        cout << "3. Resource Depletion: The production of fluorine compounds often relies on the extraction of fluorite (calcium fluoride). While fluorite is relatively abundant, overexploitation can lead to resource depletion and potential environmental impacts in mining areas." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 10:
        SetConsoleTextAttribute(hc, 7);
        cout << "Neon (Ne):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Neon Signs and Lighting: Neon is widely used in the creation of neon signs and lighting. These vibrant and eye-catching displays are commonly used for advertising, branding, and decoration. The neon sign industry contributes to economic activity in the signage and advertising sectors." << endl << endl;
        cout << "2. Tourism and Aesthetics: Neon signs are often associated with vibrant urban landscapes and are popular in tourist areas. The aesthetic appeal of neon lighting can contribute to the attractiveness of cityscapes, encouraging tourism and supporting businesses in the hospitality and entertainment sectors." << endl << endl;
        cout << "3. Signage Industry: Neon lights are widely used in the signage industry for advertising and decorative purposes. Neon signs can attract attention and enhance the visibility of businesses, contributing to marketing and branding efforts. This can positively impact businesses in retail, hospitality, and entertainment sectors." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Energy Consumption: Neon lighting, while visually appealing, is not energy-efficient. Neon signs can consume more electricity compared to modern LED alternatives. Higher energy consumption can lead to increased operating costs for businesses that use neon lighting." << endl << endl;
        cout << "2. Environmental Impact: Neon gas itself is inert and non-toxic, but the manufacturing of neon signs and lights may involve other potentially hazardous materials and processes. Proper disposal and recycling of old neon signs and lights are necessary to minimize environmental impact." << endl << endl;
        cout << "3. Economic Dependency: In some cases, businesses heavily reliant on neon signage may face economic challenges if there are significant shifts in consumer preferences, technological advancements, or regulatory changes that affect the use of neon lights." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 11:
        SetConsoleTextAttribute(hc, 7);
        cout << "Sodium (Na):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Chemical Industry: Sodium and its compounds have various applications in the chemical industry. For example, sodium hydroxide (caustic soda) is used in the production of soaps, detergents, and various chemicals, contributing to economic activity in this sector." << endl << endl;
        cout << "2. Metallurgy: Sodium can be used as a reducing agent in the extraction of certain metals, such as titanium and zirconium. It plays a role in the metallurgical industry, aiding in the production of metals and alloys." << endl << endl;
        cout << "3. Food Industry: Sodium compounds like sodium chloride (table salt) are widely used in the food industry as a seasoning and preservative. While excessive sodium consumption can pose health risks, moderate use of sodium in food production contributes to economic activities in the food sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Reactivity and Safety Concerns: Sodium is highly reactive, particularly when it comes into contact with moisture or water. Handling and storage of sodium and sodium compounds require strict safety measures to prevent accidents and mitigate potential hazards. The risk of fires and explosions in sodium-related processes can lead to economic and safety concerns." << endl << endl;
        cout << "2. Environmental Impact: Improper disposal or mishandling of sodium and its compounds can result in environmental pollution, particularly in aquatic ecosystems. Sodium, when released into water bodies, can have adverse effects on aquatic life. Environmental cleanup efforts can lead to economic costs." << endl << endl;
        cout << "3. Health and Safety Regulations: Industries that use or produce sodium compounds are subject to stringent health and safety regulations due to the potential hazards associated with their handling and transportation. Compliance with these regulations can result in additional costs for businesses." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 12:
        SetConsoleTextAttribute(hc, 7);
        cout << "Magnesium (Mg):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Manufacturing: Magnesium and its alloys are used in various manufacturing processes, particularly in the aerospace, automotive, and consumer goods industries. Magnesium's lightweight and strong properties make it valuable for producing components that reduce weight and improve fuel efficiency, contributing to economic activity in these sectors." << endl << endl;
        cout << "2. Healthcare: Magnesium is used in various medical applications, including in the manufacturing of medical devices and as a dietary supplement. It plays a role in supporting the healthcare industry and improving patient care." << endl << endl;
        cout << "3. Agriculture: Magnesium is an essential nutrient for plant growth and is often used in agricultural fertilizers. The use of magnesium-containing fertilizers helps improve crop yields, contributing to the agricultural sector's economic viability." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Depletion: Magnesium resources are not as abundant as some other metals, and their extraction can lead to resource depletion and potential environmental impacts in mining areas. Overexploitation can result in increased mining costs and environmental restoration efforts." << endl << endl;
        cout << "2. Energy Consumption: The production of magnesium and its alloys can be energy-intensive, particularly in the extraction and refining processes. High energy consumption can contribute to production costs and environmental concerns related to energy usage." << endl << endl;
        cout << "3. Environmental Impact: The disposal and recycling of magnesium-containing materials can pose challenges. Magnesium alloys can be challenging to recycle, and the accumulation of magnesium scrap can lead to environmental concerns if not managed properly." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 13:
        SetConsoleTextAttribute(hc, 7);
        cout << "Aluminum (Al):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Manufacturing and Construction: Aluminum is widely used in manufacturing, particularly in the automotive, aerospace, and construction industries. Its lightweight and corrosion-resistant properties make it valuable for producing components, vehicles, and infrastructure, contributing to economic activity in these sectors." << endl << endl;
        cout << "2. Packaging: Aluminum is commonly used in the packaging industry for cans, foils, and containers. The beverage and food packaging sectors benefit from the use of aluminum materials, which are recyclable and have a relatively low environmental footprint." << endl << endl;
        cout << "3. Energy Efficiency: Aluminum is used in the production of energy-efficient products, such as aluminum windows and building materials. These products can help reduce energy consumption in residential and commercial buildings, resulting in long-term cost savings and sustainability benefits." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Energy Intensity: The production of primary aluminum from bauxite ore is energy-intensive. High energy consumption in the extraction and refining processes can contribute to production costs and environmental concerns related to energy use." << endl << endl;
        cout << "2. Environmental Impact: The mining of bauxite, the primary ore source for aluminum, can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "3. Emissions and Air Pollution: Primary aluminum production emits greenhouse gases, particularly in the form of perfluorocarbon (PFC) emissions. PFCs are potent greenhouse gases and contribute to global warming. Reductions in PFC emissions are essential for mitigating the environmental impact." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 14:
        SetConsoleTextAttribute(hc, 7);
        cout << "Silicon (Si):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics and Semiconductor Industry: Silicon is the fundamental material in the manufacturing of semiconductors, integrated circuits, and microchips. The electronics industry heavily relies on silicon, and the ongoing technological advancements in this sector contribute to economic growth." << endl << endl;
        cout << "2. Solar Energy: Silicon is a primary material used in photovoltaic cells for solar panels. The growing demand for solar energy systems has led to a significant economic impact, fostering job creation, research, and investment in renewable energy technologies." << endl << endl;
        cout << "3. Manufacturing and Construction: Silicones, derived from silicon, are versatile materials used in a wide range of applications, including adhesives, sealants, and insulation. These materials contribute to manufacturing processes and construction activities." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Intensive: The extraction and purification of silicon from silicon dioxide (usually in the form of quartz or sand) can be resource-intensive and energy-consuming. This can contribute to environmental concerns and energy costs." << endl << endl;
        cout << "2. Environmental Impact: The mining and processing of silicon-containing minerals can have environmental impacts, including habitat disruption and potential contamination of soil and water. Sustainable mining practices are important to mitigate these issues." << endl << endl;
        cout << "3. E-Waste: The rapid technological advancements in electronics, particularly in the semiconductor industry, can lead to increased electronic waste (e-waste) generation. Proper disposal and recycling of silicon-based electronic components are essential to minimize environmental impact." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 15:
        SetConsoleTextAttribute(hc, 7);
        cout << "Phosphorus (P):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Phosphorus is a critical component of fertilizers and plays a vital role in plant growth and crop production. The agricultural industry relies on phosphorus-based fertilizers to improve soil fertility, boost crop yields, and ensure food security. This contributes to economic activity in the agricultural sector." << endl << endl;
        cout << "2. Food Production: Phosphorus is essential for food production and the food processing industry. It is a key element in the creation of food additives, such as phosphates, which enhance food preservation and texture. The food industry benefits from these additives, supporting economic growth in this sector." << endl << endl;
        cout << "3. Energy Production: Phosphorus is used in various energy storage applications, such as in rechargeable batteries and in the production of phosphoric acid, which is used in fuel cells. Phosphorus-based technologies support advancements in the energy sector, which is crucial for the economy." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: The excessive use of phosphorus-based fertilizers in agriculture can lead to environmental problems, including water pollution. Runoff of phosphorus into water bodies can cause eutrophication, disrupting aquatic ecosystems and affecting fisheries and tourism, which can have economic consequences." << endl << endl;
        cout << "2. Resource Depletion: Phosphorus is primarily obtained from phosphate rock, and its extraction can be resource-intensive. Overexploitation of phosphate rock reserves can lead to resource depletion and potential environmental impacts in mining regions." << endl << endl;
        cout << "3. Energy Consumption: The production of phosphorus-based products, such as phosphoric acid and fertilizers, can be energy-intensive. High energy consumption in these processes can contribute to production costs and environmental concerns related to energy use." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 16:
        SetConsoleTextAttribute(hc, 7);
        cout << "Sulfur (S):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Sulfur is a vital nutrient for plant growth. Sulfur-containing fertilizers are used to improve crop yields and the quality of agricultural products. The agricultural sector benefits from the use of sulfur in fertilizers, supporting food production and contributing to the economy." << endl << endl;
        cout << "2. Chemical Industry: Sulfur is used in the production of various chemicals and industrial materials. It is a key element in the manufacture of sulfuric acid, which is a fundamental chemical used in a wide range of industrial processes, including the production of fertilizers, batteries, and other chemicals." << endl << endl;
        cout << "3. Energy Production: Sulfur is used as a fuel source in various industries, particularly in the petrochemical and metallurgical sectors. The combustion of sulfur-rich materials, such as coal and crude oil, contributes to energy production, which is essential for economic growth." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Pollution: The burning of sulfur-rich fossil fuels can release sulfur dioxide (SO2) and other sulfur compounds into the atmosphere. These emissions contribute to air pollution, acid rain, and related environmental problems, leading to economic costs associated with mitigation and cleanup efforts." << endl << endl;
        cout << "2. Health and Safety Concerns: The handling and processing of sulfur and its compounds can pose health and safety hazards for workers in industries that use this element. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Resource Depletion: Sulfur is extracted from natural sources, and overexploitation can lead to resource depletion and potential environmental impacts in mining areas." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 17:
        SetConsoleTextAttribute(hc, 7);
        cout << "Chlorine (Cl):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Water Treatment: Chlorine is widely used for disinfection in water treatment processes. It helps to kill harmful microorganisms and ensure safe drinking water. The provision of clean and safe water is essential for public health and supports economic growth." << endl << endl;
        cout << "2. Chemical Industry: Chlorine is a fundamental element in the chemical industry. It is used in the production of various chemicals, including plastics, solvents, and other industrial materials. These applications contribute to economic activity in the chemical sector." << endl << endl;
        cout << "3. Pulp and Paper Industry: Chlorine-based chemicals are used in the pulp and paper industry for bleaching processes, which are essential for paper production. This industry supports economic activity by providing paper products." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Health and Safety Concerns: Chlorine gas can be toxic, and its handling and transportation pose health and safety risks to workers in industries that use this element. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "2. Environmental Impact: The use of chlorine and its compounds in various industrial processes can lead to environmental concerns. The release of chlorine compounds into the environment, particularly when not properly managed, can have adverse effects on ecosystems and water quality, leading to economic costs for environmental cleanup and restoration." << endl << endl;
        cout << "3. Resource Depletion: Chlorine is typically produced from sodium chloride (table salt) through electrolysis. Overexploitation of salt resources can lead to resource depletion and potential environmental impacts in mining areas." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 18:
        SetConsoleTextAttribute(hc, 7);
        cout << "Argon (Ar):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Welding and Metal Fabrication: Argon is commonly used as a shielding gas in welding processes, particularly in TIG (Tungsten Inert Gas) welding. This application is critical in the manufacturing and construction industries, as it enhances the quality of welds and contributes to economic activity in these sectors." << endl << endl;
        cout << "2. Chemical Analysis and Laboratories: Argon is used as a carrier gas in gas chromatography and as a blanketing gas in analytical chemistry. These applications support scientific research, chemical analysis, and quality control, contributing to the economy in these fields." << endl << endl;
        cout << "3. Scientific and Medical Applications: Argon has applications in scientific research, including its use in gas chromatography and as a carrier gas in analytical instruments. In the medical field, argon is used in certain medical procedures. Advances in these areas can contribute to economic development through technological innovation and improved healthcare." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Intensity: Argon is extracted as a byproduct of the air separation process in the production of industrial gases, and its extraction can be resource-intensive. High energy consumption in the air separation process can contribute to production costs and environmental concerns related to energy usage." << endl << endl;
        cout << "2. Energy Consumption: The production of argon and other industrial gases can be energy-intensive. This energy consumption contributes to operational costs for businesses and environmental concerns." << endl << endl;
        cout << "3. Occupational Health and Safety: The handling and transportation of argon and related gases pose safety hazards to workers in industries that use these gases. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 19:
        SetConsoleTextAttribute(hc, 7);
        cout << "Potassium (K):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Potassium is a crucial nutrient for plant growth and crop production. Potassium-containing fertilizers, often referred to as potash, are used to improve soil fertility and enhance crop yields. The agricultural industry relies on these fertilizers to ensure food security and boost agricultural production, contributing to the economy." << endl << endl;
        cout << "2. Food Processing: Potassium is essential for human nutrition and is found in a variety of foods. The food processing industry benefits from the use of potassium additives in various products, such as canned goods and processed foods, supporting economic growth in this sector." << endl << endl;
        cout << "3. Industrial Applications: Potassium compounds, such as potassium hydroxide, have various industrial applications, including in the production of soaps, detergents, and certain chemicals. These applications contribute to economic activities in the manufacturing sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: The excessive use of potassium-based fertilizers in agriculture can lead to environmental issues, including water pollution. Runoff of potassium into water bodies can disrupt aquatic ecosystems and affect water quality, leading to economic costs related to mitigation and environmental cleanup." << endl << endl;
        cout << "2. Resource Depletion: Potassium is primarily obtained from mining potash deposits, which can be resource-intensive. Overexploitation of potash reserves can lead to resource depletion and potential environmental impacts in mining areas." << endl << endl;
        cout << "3. Energy Consumption: The production of potassium-containing fertilizers can be energy-intensive, particularly in the extraction and processing of potash. High energy consumption in these processes can contribute to production costs and environmental concerns related to energy usage." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 20:
        SetConsoleTextAttribute(hc, 7);
        cout << "Calcium (Ca):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Calcium is essential for plant growth and is often added to soils and fertilizers to improve soil structure and nutrient availability. It plays a crucial role in ensuring healthy crops and improving agricultural productivity, contributing to the agricultural sector." << endl << endl;
        cout << "2. Food and Beverage Industry: Calcium is widely used as a food additive in various products, including dairy, fortified foods, and beverages. The food and beverage industry benefits from calcium fortification, which enhances the nutritional value of products and supports economic growth in this sector." << endl << endl;
        cout << "3. Construction and Building Materials: Calcium compounds, particularly calcium carbonate, are used in the construction industry for making cement, concrete, and building materials. These materials are essential for infrastructure development, contributing to economic activity in the construction sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Depletion: The mining of calcium-containing minerals, such as limestone and gypsum, can lead to resource depletion and potential environmental impacts in mining areas. Overexploitation can result in increased mining costs and environmental restoration efforts." << endl << endl;
        cout << "2. Energy Consumption: The production of calcium-based materials and compounds, such as cement, can be energy-intensive. High energy consumption in these processes can contribute to production costs and environmental concerns related to energy use." << endl << endl;
        cout << "3. Environmental Impact: The extraction and processing of calcium-containing minerals can have environmental consequences, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these issues." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 21:
        SetConsoleTextAttribute(hc, 7);
        cout << "Scandium (Sc):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Aerospace and Defense: Scandium-aluminum alloys offer lightweight and high-strength materials that can be used in aerospace and defense applications, such as aircraft components and missile systems. These materials can reduce fuel consumption and enhance performance, contributing to technological advancements and economic activity in these industries." << endl << endl;
        cout << "2. Solid Oxide Fuel Cells: Scandium-stabilized zirconia is used in solid oxide fuel cells (SOFCs), which have the potential to provide clean and efficient energy. Advances in SOFC technology could lead to economic benefits in the energy sector and reduce environmental impacts." << endl << endl;
        cout << "3. Alloy Strengthening: Scandium can be added to aluminum alloys to enhance their strength and performance. This results in lightweight and high-strength materials, which can find applications in aerospace, automotive, and other industries. The development of scandium-aluminum alloys can contribute to advancements in manufacturing and technology." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Limited Availability: Scandium is relatively rare, and its availability is limited. As a result, the cost of scandium is relatively high, making it less accessible for widespread industrial and commercial use." << endl << endl;
        cout << "2. Resource Extraction: Mining scandium can be challenging and expensive, potentially leading to environmental impacts in mining areas. Overexploitation of scandium resources may result in increased extraction costs and environmental restoration efforts." << endl << endl;
        cout << "3. Market Uncertainty: The market for scandium-based products is relatively small and niche, which can create economic uncertainty for businesses investing in scandium-related technologies." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 22:
        SetConsoleTextAttribute(hc, 7);
        cout << "Titanium (Ti):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Aerospace Industry: Titanium is a critical material in the aerospace sector. It is used in the production of aircraft components, including structural elements, landing gear, and engine parts. Titanium's lightweight properties and high strength contribute to fuel efficiency and improved performance, fostering technological advancements and economic growth in the aerospace industry." << endl << endl;
        cout << "2. Medical Devices: Titanium is widely used in the medical industry for the production of surgical implants, dental implants, and prosthetics. Its biocompatibility and resistance to corrosion make it an ideal material for these applications, supporting advancements in healthcare and contributing to economic activity in the medical device sector." << endl << endl;
        cout << "3. Military and Defense: Titanium is used in the military and defense industry for various applications, including armor, missiles, and naval vessels. Its strength and resistance to corrosion play a vital role in enhancing defense capabilities and contributing to economic activity in this sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Intensive: The extraction of titanium from titanium-containing minerals, such as ilmenite and rutile, can be resource-intensive and energy-consuming. This can contribute to environmental concerns and extraction costs." << endl << endl;
        cout << "2. Energy Consumption: The production of titanium, especially in the extraction and processing of titanium-containing minerals, can be energy-intensive. High energy consumption in these processes can contribute to production costs and environmental concerns related to energy use." << endl << endl;
        cout << "3. Environmental Impact: The extraction and processing of titanium-containing minerals can have environmental consequences, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 23:
        SetConsoleTextAttribute(hc, 7);
        cout << "Vanadium (V):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Steel and Alloys: Vanadium is commonly used as an alloying element in the production of high-strength and corrosion-resistant steel. Vanadium steel, often known as ""high - strength low - alloy"" (HSLA) steel, is used in construction, transportation (such as bridges and pipelines), and the manufacturing of machinery and vehicles. The use of vanadium in these applications contributes to economic growth in the construction and manufacturing sectors." << endl << endl;
        cout << "2. Energy Storage: Vanadium redox flow batteries (VRFBs) use vanadium-based electrolytes for energy storage. VRFBs are considered a promising technology for grid-scale energy storage and renewable energy integration. The development and implementation of VRFBs can support advancements in the energy sector and contribute to economic growth in the renewable energy industry." << endl << endl;
        cout << "3. Chemical Industry: Vanadium compounds have various applications in the chemical industry, including as catalysts for chemical reactions and in the production of pigments and ceramics. These applications contribute to economic activity in the chemical sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining and extraction of vanadium-bearing minerals, such as vanadinite and magnetite, can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are essential to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of vanadium and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Energy Consumption: The production of vanadium, especially in the extraction and processing of vanadium-bearing minerals, can be energy-intensive. High energy consumption in these processes can contribute to production costs and environmental concerns related to energy use." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 24:
        SetConsoleTextAttribute(hc, 7);
        cout << "Chromium (Cr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Stainless Steel Production: Chromium is a crucial component in the production of stainless steel. Stainless steel is widely used in various industries, including construction, manufacturing, and transportation. Its corrosion resistance and strength make it valuable in producing durable and long-lasting products, contributing to economic growth in these sectors." << endl << endl;
        cout << "2. Chemical Industry: Chromium compounds are used in various chemical applications, such as pigments, dyes, and catalysts. These applications contribute to economic activity in the chemical sector." << endl << endl;
        cout << "3. Aerospace and Automotive: Chromium's protective properties make it valuable for coating aircraft and automotive components. It enhances resistance to corrosion and wear, contributing to the performance and durability of aerospace and automotive products." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: The mining and processing of chromium-containing minerals, such as chromite, can lead to environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of chromium and its compounds, particularly hexavalent chromium, can pose safety hazards to workers in industries that use these substances. Hexavalent chromium is a known carcinogen, and proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Market Volatility: The price of chromium can be subject to market volatility, which can affect businesses and industries that rely on chromium as an input." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 25:
        SetConsoleTextAttribute(hc, 7);
        cout << "Manganese (Mn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Steel Production: Manganese is a crucial component in the production of steel. It is used to deoxidize and desulfurize steel, resulting in improved steel quality and strength. Manganese-containing steel is used in various industries, including construction, automotive manufacturing, and infrastructure development. The use of manganese in steel production contributes to economic growth in these sectors." << endl << endl;
        cout << "2. Battery Technology: Manganese is used in certain types of batteries, including lithium-ion and alkaline batteries. Advances in battery technology are essential for renewable energy storage and the electrification of vehicles, contributing to economic growth in the energy and transportation sectors." << endl << endl;
        cout << "3. Chemical Industry: Manganese compounds have various applications in the chemical industry, including as catalysts and pigments. These applications contribute to economic activity in the chemical sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining and extraction of manganese-containing minerals, such as pyrolusite, can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of manganese and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Market Volatility: The price of manganese can be subject to market volatility, which can affect businesses and industries that rely on manganese as an input." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 26:
        SetConsoleTextAttribute(hc, 7);
        cout << "Iron (Fe):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Construction and Infrastructure: Iron is a primary component in the production of structural steel, which is used in the construction of buildings, bridges, roads, and various infrastructure projects. The construction industry benefits from iron's strength and durability, contributing to economic growth in this sector." << endl << endl;
        cout << "2. Manufacturing: Iron and iron alloys are widely used in manufacturing processes, including the automotive industry, machinery production, and consumer goods manufacturing. Iron's versatility and affordability make it a valuable material for producing a wide range of products, supporting economic activity in these sectors." << endl << endl;
        cout << "3. Transportation: Iron is essential in the transportation industry, particularly for the manufacturing of vehicles, trains, and ships. Iron's strength and low cost contribute to the efficiency and affordability of transportation systems." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Impact: The mining of iron ore and its processing can have environmental consequences, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of iron ore and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Resource Intensive: The mining and extraction of iron ore can be resource-intensive and energy-consuming. This can contribute to environmental concerns and extraction costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 27:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cobalt (Co):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Battery Technology: Cobalt is a critical component in the production of lithium-ion batteries. These batteries are used in various applications, including electric vehicles (EVs), portable electronics, and renewable energy storage. The growth of the electric vehicle market and the demand for energy storage systems contribute to economic growth in the energy and transportation sectors." << endl << endl;
        cout << "2. Aerospace and Defense: Cobalt-containing superalloys are used in the aerospace and defense industries for applications such as jet engines and gas turbines. Cobalt's high-temperature resistance and strength are essential for enhancing the performance and reliability of aerospace and defense systems." << endl << endl;
        cout << "3. Chemical Industry: Cobalt compounds are used as catalysts in various chemical processes, including the production of petrochemicals, plastics, and pharmaceuticals. These applications support economic activity in the chemical sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Child Labor and Ethical Concerns: A significant portion of the world's cobalt production occurs in the Democratic Republic of Congo (DRC), where there have been concerns about child labor, unsafe working conditions, and environmental issues in the cobalt mining industry. Ethical and sustainability concerns related to cobalt supply chains can impact market perceptions and affect businesses using cobalt." << endl << endl;
        cout << "2. Resource Extraction: The mining and extraction of cobalt-containing ores can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "3. Resource Availability: Cobalt is primarily obtained as a byproduct of copper and nickel mining. Its availability can be limited, leading to market supply challenges and potential price volatility." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 28:
        SetConsoleTextAttribute(hc, 7);
        cout << "Nickel (Ni):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Stainless Steel Production: Nickel is a vital component in the production of stainless steel. Stainless steel is widely used in various industries, including construction, manufacturing, and transportation. Its corrosion resistance and strength make it valuable in producing durable and long-lasting products, contributing to economic growth in these sectors." << endl << endl;
        cout << "2. Battery Technology: Nickel is used in various battery chemistries, including lithium-ion and nickel-metal hydride (NiMH) batteries. The growth of electric vehicles (EVs) and renewable energy storage systems has increased the demand for nickel, contributing to economic growth in the energy and transportation sectors." << endl << endl;
        cout << "3. Aerospace and Defense: Nickel-containing superalloys are used in the aerospace and defense industries for applications such as jet engines, gas turbines, and missile systems. Nickel's high-temperature resistance and strength are essential for enhancing the performance and reliability of aerospace and defense systems." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining and extraction of nickel-containing ores can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of nickel and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Market Volatility: The price of nickel can be subject to market volatility, which can affect businesses and industries that rely on nickel as an input." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 29:
        SetConsoleTextAttribute(hc, 7);
        cout << "Copper (Cu):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Construction and Infrastructure: Copper is widely used in the construction industry for electrical wiring, plumbing, and roofing. It is also used in infrastructure projects, such as bridges and pipelines. Copper's excellent electrical conductivity, corrosion resistance, and durability contribute to economic growth in the construction and infrastructure sectors." << endl << endl;
        cout << "2. Electronics: Copper is a fundamental component in the production of electrical and electronic components, including circuit boards, cables, and connectors. The electronics industry relies on copper's electrical conductivity, making it essential for the manufacturing of various electronic devices and supporting technological advancements." << endl << endl;
        cout << "3. Energy Production: Copper is used in power generation and transmission systems. It is vital for the construction of electrical transformers, motors, and power cables. Copper's conductivity and heat resistance contribute to the efficiency and reliability of energy systems, supporting economic growth in the energy sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining and extraction of copper-containing ores can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of copper and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Market Volatility: The price of copper can be subject to market volatility, which can affect businesses and industries that rely on copper as an input." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 30:
        SetConsoleTextAttribute(hc, 7);
        cout << "Zinc (Zn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Galvanization: Zinc is widely used for galvanizing steel, which provides corrosion resistance to steel structures, vehicles, and various consumer products. The construction and automotive industries benefit from the use of zinc-coated steel, contributing to economic growth in these sectors." << endl << endl;
        cout << "2. Battery Technology: Zinc is used in various battery chemistries, including zinc-carbon batteries, zinc-nickel batteries, and zinc-air batteries. These batteries are used in applications such as portable electronics and hearing aids, contributing to economic growth in the energy storage and medical device sectors." << endl << endl;
        cout << "3. Chemical Industry: Zinc compounds are used in various chemical applications, including as catalysts, pigments, and in the production of rubber and plastics. These applications contribute to economic activity in the chemical sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining and extraction of zinc-containing ores can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of zinc and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Market Volatility: The price of zinc can be subject to market volatility, which can affect businesses and industries that rely on zinc as an input." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 31:
        SetConsoleTextAttribute(hc, 7);
        cout << "Gallium (Ga):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Semiconductor Industry: Gallium is used in the production of gallium arsenide (GaAs) and gallium nitride (GaN) semiconductors. These materials are essential for certain high-frequency and high-power electronic devices, such as microwave transistors and LEDs. The growth of the semiconductor industry, especially in the development of 5G technology and power electronics, contributes to economic growth in the technology and telecommunications sectors." << endl << endl;
        cout << "2. Solar Panels: Gallium is used in the production of thin-film solar cells, which are an alternative to traditional silicon-based solar cells. Thin-film solar technology has the potential to contribute to renewable energy generation and reduce the cost of solar power, supporting economic growth in the renewable energy sector." << endl << endl;
        cout << "3. Electronics Industry: Gallium is a crucial component in the production of gallium arsenide, a semiconductor material used in various electronic devices, including solar cells, LEDs (light-emitting diodes), and microwave devices. The electronics industry benefits from the use of gallium in the manufacturing of advanced technologies." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Depletion: The extraction of gallium from bauxite, a mineral containing aluminum, can lead to resource depletion, which may affect aluminum production and environmental impacts in mining areas." << endl << endl;
        cout << "2. Environmental Impact: The production and processing of gallium-containing materials may have environmental consequences. Efforts to minimize environmental impacts and promote responsible mining and production practices are important." << endl << endl;
        cout << "3. Limited Availability: Gallium is a relatively rare element, and its availability is limited. The cost of gallium is relatively high, which can limit its widespread use and affordability." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 32:
        SetConsoleTextAttribute(hc, 7);
        cout << "Germanium (Ge):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics Industry: Germanium is used in the production of certain semiconductor devices, such as photodetectors, infrared detectors, and high-frequency transistors. These devices are used in various electronic applications, including telecommunications, aerospace, and imaging systems. The growth of the electronics industry, especially in the development of advanced sensors and communication technologies, contributes to economic growth in the technology and telecommunications sectors." << endl << endl;
        cout << "2. Fiber Optics: Germanium is used in the production of optical fibers, which are essential for high-speed data transmission in telecommunications and data networking. As demand for high-bandwidth communication and internet services continues to grow, the use of germanium in fiber optics supports economic activity in the telecommunications sector." << endl << endl;
        cout << "3. Solar Technology: Germanium is used in certain types of solar cells, especially in multi-junction solar cells used in space applications. These cells are known for their high efficiency in converting sunlight into electricity. As the demand for solar energy technologies increases, the use of germanium in solar applications can positively impact the renewable energy sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Depletion: The extraction of germanium from zinc ores can lead to resource depletion, potentially affecting the zinc mining industry and creating environmental impacts in mining areas." << endl << endl;
        cout << "2. Market Volatility: The price of germanium can be subject to market volatility, which can affect businesses and industries that rely on germanium as an input." << endl << endl;
        cout << "3. Limited Availability: Germanium is a relatively rare element, and its availability is limited. The cost of germanium is relatively high, which can limit its widespread use and affordability." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 33:
        SetConsoleTextAttribute(hc, 7);
        cout << "Arsenic (As):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Industrial Applications: Arsenic, in certain compounds, has historically been used in various industrial applications, such as in the production of semiconductors, glass, and wood preservatives. However, due to its toxicity, many of these uses have been phased out or regulated, and alternatives have been sought." << endl << endl;
        cout << "2. Semiconductor Industry: Arsenic compounds were once used in the semiconductor industry for doping silicon wafers. However, with advancements in technology and concerns about toxicity, alternatives are now more commonly used." << endl << endl;
        cout << "3. Historical Industrial Uses: Arsenic-based compounds, such as arsenic trioxide, were once used in wood preservatives to protect against decay and insect damage. While this served a purpose in extending the lifespan of wood products, it's crucial to note that the negative impacts, including environmental contamination and health risks, have led to regulatory restrictions and a shift toward safer alternatives." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Contamination: Arsenic contamination in the environment, particularly in soil and water, can lead to health and environmental concerns. It may result from industrial activities, mining, and the disposal of arsenic-containing waste. Cleanup and remediation efforts to address environmental contamination can be costly and have economic implications." << endl << endl;
        cout << "2. Healthcare Costs: Arsenic exposure, even at low levels, can have severe health effects, including an increased risk of cancer, skin lesions, and various chronic health problems. Treating individuals with arsenic-related health issues can lead to increased healthcare costs." << endl << endl;
        cout << "3. Regulatory Compliance: Businesses and industries that release or handle arsenic-containing materials are subject to stringent environmental regulations. Compliance with these regulations requires investments in pollution control, waste management, and worker safety measures, which can increase operating costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 34:
        SetConsoleTextAttribute(hc, 7);
        cout << "Selenium (Se):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Agriculture: Selenium is important for plant and animal nutrition. In agriculture, selenium is used as a dietary supplement for livestock to prevent selenium deficiency, which can lead to health issues in animals. Selenium supplementation supports animal health and can contribute to the livestock and agriculture industries." << endl << endl;
        cout << "2. Solar Energy: Selenium is used in the production of certain types of thin-film photovoltaic solar cells, such as cadmium selenide (CdSe) and copper indium gallium selenide (CIGS) solar cells. These solar technologies can help generate renewable energy and reduce greenhouse gas emissions, supporting economic growth in the renewable energy sector." << endl << endl;
        cout << "3. Photovoltaic Industry: Selenium is used in the production of thin-film solar cells, contributing to the development of solar energy technologies. The growth of the solar energy sector can positively impact economic activities, providing renewable and sustainable energy sources." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: Excessive selenium in the environment can lead to pollution and harm ecosystems. Selenium can accumulate in water bodies, posing risks to aquatic life and wildlife when levels become toxic. Addressing selenium pollution and its environmental impact can require mitigation efforts, which can be costly." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of selenium and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Resource Availability: Selenium is relatively rare, and its availability can be limited. As a result, the cost of selenium may be relatively high, which can affect its use in various industries." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 35:
        SetConsoleTextAttribute(hc, 7);
        cout << "Bromine (Br):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Chemical Industry: Bromine and its compounds have various applications in the chemical industry. They are used in the production of flame retardants, drilling fluids in the oil and gas industry, pharmaceuticals, and agricultural chemicals. These applications contribute to economic activity in the chemical sector." << endl << endl;
        cout << "2. Photography: Bromine compounds were traditionally used in photography, particularly in the production of silver bromide emulsions for photographic film. While digital photography has largely replaced traditional film, there may still be niche applications for bromine in photography." << endl << endl;
        cout << "3. Flame Retardants: Bromine compounds are commonly used as flame retardants in various products, including textiles, electronics, and construction materials. This application enhances fire safety, contributing to the prevention and mitigation of fire-related damages. Industries that produce flame-retardant materials benefit from this use of bromine." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: Some bromine compounds, particularly brominated flame retardants, have raised environmental concerns. These compounds can persist in the environment and may be bioaccumulative, potentially affecting ecosystems and wildlife. Efforts to mitigate environmental contamination and health risks associated with bromine compounds can be costly." << endl << endl;
        cout << "2. Resource Extraction: The production of bromine involves extracting it from brine deposits. This process can have environmental impacts and requires the sustainable management of resources to prevent resource depletion and habitat disruption." << endl << endl;
        cout << "3. Occupational Health and Safety: The handling and processing of bromine and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 36:
        SetConsoleTextAttribute(hc, 7);
        cout << "Krypton (Kr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Lighting: Krypton is sometimes used in certain types of high-intensity discharge (HID) lamps and fluorescent lamps. It can enhance the efficiency and brightness of these lamps, contributing to improved lighting in various industrial and commercial settings." << endl << endl;
        cout << "2. Laser Technology: Krypton is used in some types of gas lasers, particularly krypton fluoride (KrF) lasers. These lasers have applications in areas like lithography for semiconductor manufacturing and scientific research. The development and use of krypton-based lasers can support advancements in technology and research." << endl << endl;
        cout << "3. Scientific Research: Krypton, particularly in its isotope form krypton-85, is used in scientific research, including environmental studies and radiometric dating. Its presence in the atmosphere allows scientists to gain insights into atmospheric circulation and mixing processes. In radiometric dating, krypton-85 can be used to estimate the age of groundwater and ice cores, providing valuable information for various scientific disciplines." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Krypton is a rare and relatively expensive noble gas. Its limited availability can make it costly for specific industrial applications, affecting their economic viability." << endl << endl;
        cout << "2. Energy Consumption: The production and use of krypton in lighting and laser technologies can be energy-intensive, contributing to higher energy costs and potential environmental concerns." << endl << endl;
        cout << "3. Economic Niche: Krypton's applications are relatively niche, and its contribution to the overall economy is limited compared to other more commonly used gases and materials." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 37:
        SetConsoleTextAttribute(hc, 7);
        cout << "Rubidium (Rb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Rubidium is used in atomic physics and research applications, particularly in the development of atomic clocks and studies of quantum mechanics. These scientific advancements contribute to our understanding of fundamental physics and technology, which can have indirect economic benefits in terms of technological innovation." << endl << endl;
        cout << "2. Medical Applications: Rubidium-82, a radioactive isotope of rubidium, is used in positron emission tomography (PET) scans for medical imaging. These scans play a crucial role in diagnosing and monitoring various medical conditions, contributing to advancements in healthcare." << endl << endl;
        cout << "3. Specialized Technologies: Rubidium has applications in certain specialized technologies, including atomic clocks and certain types of electronic devices. Atomic clocks that use rubidium frequency standards are used in applications such as global navigation systems and telecommunications, contributing to advancements in technology." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Rubidium is relatively rare and expensive compared to more abundant elements. Its limited availability can make it costly for research and specialized technology applications, potentially increasing the cost of equipment that uses rubidium." << endl << endl;
        cout << "2. Niche Applications: Rubidium's applications are highly specialized and limited to scientific research, atomic clocks, and certain technology sectors. Its contribution to the broader economy is minimal compared to other more commonly used materials and resources." << endl << endl;
        cout << "3. Environmental Concerns: While rubidium itself is not considered highly toxic, its compounds can have environmental impacts if not managed properly. Mining and extraction processes may result in environmental disruption, and the disposal of waste materials containing rubidium should be done responsibly." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 38:
        SetConsoleTextAttribute(hc, 7);
        cout << "Strontium (Sr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Fireworks and Pyrotechnics: Strontium compounds, particularly strontium nitrate and strontium carbonate, are used to produce red flames in fireworks and pyrotechnics. Strontium-based fireworks create visually appealing displays during celebrations and events, contributing to the entertainment industry." << endl << endl;
        cout << "2. Medical Imaging: Strontium isotope, specifically strontium-89, is used in nuclear medicine for the treatment of bone pain associated with certain cancers. This application contributes to the healthcare sector and provides therapeutic options for patients." << endl << endl;
        cout << "3. Flares and Signal Devices: Strontium compounds are used in the production of flares and signal devices, where their bright red flame enhances visibility. These applications contribute to the defense sector, search and rescue operations, and marine safety." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Strontium is not as abundant as some other elements, and its availability can be limited. This scarcity can affect the cost of strontium compounds used in fireworks and other applications, potentially impacting the cost of producing fireworks." << endl << endl;
        cout << "2. Niche Applications: Strontium's applications are specialized and limited to fireworks, pyrotechnics, and some minor roles in the glass and ceramic industries. Its contribution to the broader economy is relatively small compared to more commonly used materials and resources." << endl << endl;
        cout << "3. Health Concerns: While stable strontium is not considered highly toxic, excessive intake of strontium can have health implications, particularly if it substitutes for calcium in bones. Efforts to manage strontium exposure are crucial to prevent potential health risks." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 39:
        SetConsoleTextAttribute(hc, 7);
        cout << "Yttrium (Y):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. High-Tech Manufacturing: Yttrium is used in various high-tech applications, particularly in the manufacturing of phosphors for color television tubes and LEDs. It is essential for producing red phosphors used in display technologies, which contribute to the consumer electronics and entertainment industries." << endl << endl;
        cout << "2. Laser Technology: Yttrium-aluminum-garnet (YAG) crystals are used in solid-state lasers, which have applications in medical devices, industrial cutting and welding, and scientific research. The development and use of YAG lasers support advancements in technology and research." << endl << endl;
        cout << "3. Ceramics and Superconductors: Yttrium oxide is used in the production of high-temperature superconductors and certain ceramic materials. These materials have applications in electronics, energy transmission, and other industries, contributing to advancements in technology." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Yttrium is a rare earth element, and its availability is limited. The cost of yttrium can be relatively high due to its rarity, which can affect the affordability of products that rely on yttrium." << endl << endl;
        cout << "2. Environmental Concerns: The extraction and processing of rare earth elements, including yttrium, can have environmental impacts, including habitat disruption and potential water pollution. Sustainable mining practices and environmental protections are essential to mitigate these effects." << endl << endl;
        cout << "3. Occupational Health and Safety: The handling and processing of yttrium and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 40:
        SetConsoleTextAttribute(hc, 7);
        cout << "Zirconium (Zr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Industry: Zirconium is primarily used in the nuclear industry for the construction of fuel rods and cladding materials in nuclear reactors. It has excellent resistance to corrosion and high temperatures, making it a vital material for ensuring the safe operation of nuclear power plants. The growth of the nuclear energy sector contributes to economic activity in this industry." << endl << endl;
        cout << "2. Aerospace and Defense: Zirconium-based alloys are used in the aerospace and defense industries for applications such as aircraft components, gas turbine engines, and missile systems. Zirconium's strength and heat resistance contribute to the performance and reliability of aerospace and defense systems." << endl << endl;
        cout << "3. Chemical Industry: Zirconium compounds are used as catalysts in various chemical processes and in the production of ceramics and refractories. These applications support economic activity in the chemical and materials sectors." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Availability: While zirconium is relatively abundant in the Earth's crust, obtaining high-purity zirconium can be challenging. The refining and processing of zirconium can be resource-intensive, which can affect its availability and market price." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of zirconium and its compounds can pose safety hazards to workers in industries that use these substances. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Environmental Impact: The production and processing of zirconium-containing materials may have environmental consequences. Efforts to minimize environmental impacts and promote responsible mining and production practices are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 41:
        SetConsoleTextAttribute(hc, 7);
        cout << "Niobium (Nb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Steel and Alloy Production: Niobium is primarily used as an alloying element in the production of high-strength, low-alloy (HSLA) steel. HSLA steel is used in various applications, including automotive manufacturing, construction, and infrastructure projects. The use of niobium in steel production contributes to economic growth in these sectors." << endl << endl;
        cout << "2. Aerospace and Defense: Niobium-containing superalloys are used in the aerospace and defense industries for applications such as aircraft engines, gas turbines, and rocket engines. Niobium's high-temperature resistance and strength enhance the performance and reliability of aerospace and defense systems." << endl << endl;
        cout << "3. Electronics: Niobium is used in the production of capacitors and superconductors. Superconducting materials have applications in various electronic devices and medical equipment. The growth of the electronics and medical technology industries contributes to economic activity in these sectors." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Availability: While niobium is relatively abundant, obtaining high-purity niobium can be challenging. The refining and processing of niobium can be resource-intensive, affecting its availability and market price." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of niobium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Environmental Impact: The production and processing of niobium-containing materials may have environmental consequences. Efforts to minimize environmental impacts and promote responsible mining and production practices are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 42:
        SetConsoleTextAttribute(hc, 7);
        cout << "Molybdenum (Mo):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Steel and Alloy Production: Molybdenum is a crucial alloying element in the production of high-strength, low-alloy (HSLA) steel and stainless steel. HSLA steel is used in applications such as automotive manufacturing, construction, and infrastructure projects, while stainless steel is widely used in the manufacturing of consumer goods, cookware, and industrial equipment. The use of molybdenum in steel and alloy production contributes to economic growth in these sectors." << endl << endl;
        cout << "2. Aerospace and Defense: Molybdenum-containing superalloys are used in the aerospace and defense industries for applications such as aircraft engines, gas turbines, and missile systems. Molybdenum's high-temperature resistance and strength enhance the performance and reliability of aerospace and defense systems." << endl << endl;
        cout << "3. Chemical Industry: Molybdenum compounds are used as catalysts in various chemical processes, including the production of petrochemicals, plastics, and pharmaceuticals. These applications support economic activity in the chemical sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Availability: While molybdenum is relatively abundant, obtaining high-purity molybdenum can be challenging. The refining and processing of molybdenum can be resource-intensive, affecting its availability and market price." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of molybdenum and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Environmental Impact: The production and processing of molybdenum-containing materials may have environmental consequences. Efforts to minimize environmental impacts and promote responsible mining and production practices are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 43:
        SetConsoleTextAttribute(hc, 7);
        cout << "Technetium (Tc):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Medical Imaging: Technetium-99m, a radioactive isotope of technetium, is used in nuclear medicine for diagnostic imaging procedures, such as single-photon emission computed tomography (SPECT) scans. It plays a crucial role in the field of medical imaging, helping to diagnose and monitor various medical conditions." << endl << endl;
        cout << "2. Diagnostic Advancements: Technetium-99m plays a vital role in advancing diagnostic capabilities in medicine. It allows for non-invasive imaging of internal structures and physiological functions, aiding in the early detection and accurate diagnosis of various medical conditions. This can lead to more effective and targeted treatment plans, contributing positively to healthcare outcomes." << endl << endl;
        cout << "3. Research and Development: The study and development of technetium-based radiopharmaceuticals for medical imaging contribute to ongoing research and innovation in the field of nuclear medicine. This research not only enhances diagnostic techniques but also opens avenues for the development of new radiopharmaceuticals with potential applications in treatment and therapy." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Waste Management: Technetium-99m has a relatively short half-life, but it still produces radioactive waste that must be safely managed and disposed of. The handling and storage of radioactive materials can be costly and pose environmental and safety challenges." << endl << endl;
        cout << "2. Resource Scarcity: Technetium is a man-made element, primarily produced in nuclear reactors or particle accelerators. The production process can be complex and costly, and the availability of technetium is limited." << endl << endl;
        cout << "3. Nuclear Proliferation Concerns: The production and use of radioactive isotopes, including technetium-99m, are subject to strict regulations and controls to prevent their misuse in nuclear weapons or other illicit activities. These regulations can increase compliance costs for industries using technetium." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 44:
        SetConsoleTextAttribute(hc, 7);
        cout << "Ruthenium (Ru):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics: Ruthenium is used in the production of electrical contacts and resistors due to its high-temperature resistance and excellent conductivity. These components are essential in various electronic devices and equipment, contributing to the electronics industry." << endl << endl;
        cout << "2. Catalysis: Ruthenium compounds serve as catalysts in chemical processes, including the production of chemicals, fuels, and pharmaceuticals. These catalytic applications support economic activity in the chemical industry." << endl << endl;
        cout << "3. Solar Energy: Ruthenium complexes are used in the development of dye-sensitized solar cells, a type of next-generation photovoltaic technology. The growth of renewable energy sources, such as dye-sensitized solar cells, contributes to economic activity in the energy sector." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Ruthenium is a rare and expensive metal, and its availability is limited. The cost of ruthenium can be relatively high, affecting its affordability for various industrial applications." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of ruthenium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Environmental Impact: The production and processing of ruthenium-containing materials may have environmental consequences. Efforts to minimize environmental impacts and promote responsible mining and production practices are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 45:
        SetConsoleTextAttribute(hc, 7);
        cout << "Rhodium (Rh):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Automotive Industry: Rhodium is a crucial component in catalytic converters, which are used in vehicles to reduce emissions of harmful pollutants, such as nitrogen oxides (NOx) and carbon monoxide (CO). The automotive industry relies on rhodium to comply with stringent environmental regulations. As environmental standards become more stringent worldwide, the demand for rhodium in catalytic converters continues to grow, supporting the automotive sector." << endl << endl;
        cout << "2. Jewelry Industry: Rhodium is used to electroplate white gold and platinum jewelry, giving it a reflective and corrosion-resistant finish. The jewelry industry benefits from rhodium's aesthetic properties, as it enhances the appearance and durability of precious metal jewelry." << endl << endl;
        cout << "3. Electronics: Rhodium is used in electrical connectors, particularly in high-frequency applications, due to its excellent electrical conductivity. This contributes to the electronics industry, particularly in the manufacturing of high-performance electronic devices." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Rhodium is one of the rarest and most expensive elements in the Earth's crust. Its limited availability can result in significant market price volatility, which can affect industries that rely on rhodium." << endl << endl;
        cout << "2. Environmental Concerns: The extraction and processing of rhodium-containing materials may have environmental consequences. Additionally, the mining of platinum group metals, including rhodium, can have environmental impacts. Efforts to minimize these impacts and promote responsible mining practices are important." << endl << endl;
        cout << "3. Occupational Health and Safety: The handling and processing of rhodium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 46:
        SetConsoleTextAttribute(hc, 7);
        cout << "Palladium (Pd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Automotive Industry: Palladium is a critical component in catalytic converters, which are used in vehicles to reduce emissions of harmful pollutants, such as nitrogen oxides (NOx) and carbon monoxide (CO). The automotive industry relies on palladium to meet stringent environmental regulations. As environmental standards become more stringent worldwide, the demand for palladium in catalytic converters continues to grow, supporting the automotive sector." << endl << endl;
        cout << "2. Electronics: Palladium is used in various electronic applications, including the production of multilayer ceramic capacitors (MLCCs), which are essential components in electronics, including smartphones, laptops, and other consumer electronics. The electronics industry benefits from palladium's properties that enhance the performance of electronic components." << endl << endl;
        cout << "3. Jewelry Industry: Palladium is used to create jewelry, particularly as an alternative to white gold and platinum. Its lightweight and corrosion-resistant properties make it an attractive choice for jewelry designers and consumers." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Palladium is a relatively rare and expensive metal, and its availability is limited. Its scarcity can result in significant market price volatility, which can affect industries that rely on palladium." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of palladium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Environmental Concerns: The extraction and processing of palladium-containing materials may have environmental consequences. Additionally, the mining of platinum group metals, including palladium, can have environmental impacts. Efforts to minimize these impacts and promote responsible mining practices are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 47:
        SetConsoleTextAttribute(hc, 7);
        cout << "Silver (Ag):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Jewelry and Decorative Arts: Silver is widely used in the jewelry and decorative arts industry, contributing to the production of rings, necklaces, bracelets, and other accessories, as well as silverware, sculptures, and decorative pieces. The design and craftsmanship of silver jewelry and decorative items generate economic activity in the luxury and artistic sectors." << endl << endl;
        cout << "2. Photography: While digital photography has largely replaced traditional film, silver compounds, such as silver halides, were traditionally used in photographic film and paper. This application historically contributed to the photography industry, though its impact has diminished with the shift to digital photography." << endl << endl;
        cout << "3. Electronics: Silver is used in various electronic applications, particularly as a conductor in printed circuit boards and components. Its excellent electrical conductivity enhances the performance of electronic devices, supporting the electronics industry." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource and Environmental Concerns: The mining and refining of silver ores can have environmental impacts, including habitat disruption and potential water pollution. Sustainable and responsible mining practices are important to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of silver and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Market Price Volatility: The price of silver can be subject to market volatility, which can affect businesses and industries that rely on silver as an input or store of value." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 48:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cadmium (Cd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Pigments in Art and Ceramics: Cadmium compounds have been historically used as pigments in art and ceramics. Cadmium-based pigments, such as cadmium red and cadmium yellow, were valued for their bright and stable colors. While these pigments were widely used in the past, concerns about toxicity have led to increased use of alternative, safer pigments in contemporary art and manufacturing." << endl << endl;
        cout << "2. Nickel-Cadmium Batteries (Historical): Historically, nickel-cadmium (NiCd) batteries were widely used in various applications, including portable electronics and power tools. However, their use has decreased due to environmental concerns and the adoption of alternative battery technologies." << endl << endl;
        cout << "3. Metal Alloys: Cadmium is used as an alloying element in certain metal alloys, such as those used in the production of solder and certain types of corrosion-resistant coatings. These alloys contribute to the manufacturing of various products, including electronics and coatings for steel." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Regulatory Compliance: Businesses and industries that release or handle cadmium-containing materials are subject to stringent environmental regulations. Compliance with these regulations requires investments in pollution control, waste management, and worker safety measures, which can increase operating costs." << endl << endl;
        cout << "2. Healthcare Costs: Cadmium exposure is associated with serious health risks, including lung and prostate cancer, kidney damage, and respiratory issues. Treating individuals with cadmium-related health problems can lead to increased healthcare costs." << endl << endl;
        cout << "3. Environmental Pollution: Cadmium contamination can result from various industrial activities, such as mining, smelting, and the production of batteries, plastics, and pigments. Cadmium pollution can lead to soil and water contamination, harming ecosystems and wildlife. Cleanup and remediation efforts to address environmental contamination can be costly and have economic implications." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 49:
        SetConsoleTextAttribute(hc, 7);
        cout << "Indium (In):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronic and Display Technologies: Indium is a key component in the production of indium tin oxide (ITO), a transparent and conductive material used in the manufacturing of flat-panel displays (LCDs, OLEDs), touchscreens, and thin-film solar cells. The growth of the electronics and renewable energy industries contributes to economic development." << endl << endl;
        cout << "2. Photovoltaics: Indium is used in the production of copper indium gallium selenide (CIGS) solar cells, a thin-film technology for solar panels. The development and use of CIGS technology contribute to the renewable energy sector." << endl << endl;
        cout << "3. Semiconductor Industry: Indium is used in the production of certain types of semiconductors, contributing to the semiconductor and electronics industry." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Availability: Indium is a relatively rare metal, and its availability can be limited. Its scarcity can affect the cost and availability of indium-containing materials for various industries." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of indium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks and associated costs." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of indium-containing ores may have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 50:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tin (Sn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Packaging Industry: Tin is commonly used as a coating material for tinplate, which is used to manufacture cans for food and beverage packaging. The packaging industry benefits from tin's corrosion resistance and ability to protect the contents of cans, contributing to the preservation and distribution of food and beverages." << endl << endl;
        cout << "2. Electronics: Tin is a key component in the production of solder, which is used in electronic components and circuit boards. The electronics industry relies on tin-based solder for the assembly of electronic devices, including smartphones, computers, and other consumer electronics." << endl << endl;
        cout << "3. Alloys: Tin is used as an alloying element in various alloys, such as bronze and pewter. These alloys have applications in the manufacturing of coins, statues, decorative items, and other metal products." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining and extraction of tin ore can have environmental impacts, including habitat disruption and soil erosion. Sustainable mining practices are essential to mitigate these effects." << endl << endl;
        cout << "2. Occupational Health and Safety: The mining and processing of tin and its compounds can pose safety hazards to workers. Additionally, exposure to certain tin compounds can have adverse health effects. Proper safety measures and regulations are necessary to minimize risks." << endl << endl;
        cout << "3. Environmental Impact: The production and processing of tin-containing materials may result in environmental consequences. Efforts to minimize environmental impacts, promote responsible mining practices, and address waste management are crucial." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 51:
        SetConsoleTextAttribute(hc, 7);
        cout << "Antimony (Sb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Flame Retardants: Antimony compounds are used as flame retardants in various materials, including plastics, textiles, and electronics. This application enhances fire safety in consumer products, contributing to the manufacturing and safety sectors." << endl << endl;
        cout << "2. Alloys: Antimony is used as an alloying element in lead-based alloys, such as lead-antimony alloys. These alloys have applications in the production of batteries, ammunition, and certain types of bearings." << endl << endl;
        cout << "3. Catalysis: Antimony compounds serve as catalysts in certain chemical processes, supporting economic activity in the chemical and manufacturing industries." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental and Health Concerns: Antimony can have adverse environmental and health effects, especially when released into the air, water, or soil. Mining and processing of antimony ores may contribute to environmental contamination, and exposure to antimony can have health implications for workers and nearby communities." << endl << endl;
        cout << "2. Occupational Health and Safety: Workers involved in the mining, processing, and manufacturing of antimony and its compounds may face occupational health risks. Proper safety measures and regulations are necessary to minimize these risks." << endl << endl;
        cout << "3. Resource Scarcity: While antimony is not as rare as some other elements, its availability can be limited. The mining and extraction of antimony may contribute to resource depletion." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 52:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tellurium (Te):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Photovoltaics: Tellurium is a crucial component in the production of thin-film solar cells, particularly cadmium telluride (CdTe) solar cells. These cells have applications in solar panels for renewable energy production. The growth of the solar energy sector contributes to economic development." << endl << endl;
        cout << "2. Thermoelectric Devices: Tellurium alloys, such as bismuth telluride, are used in thermoelectric devices for converting heat into electricity. These devices have applications in power generation and cooling systems, contributing to energy efficiency." << endl << endl;
        cout << "3. Alloys: Tellurium is used as an alloying element in the production of certain alloys, including lead alloys. Lead-tellurium alloys have applications in the manufacturing of bearings and other products." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Tellurium is a relatively rare element, and its availability can be limited. The mining and extraction of tellurium may contribute to resource depletion." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of tellurium and its compounds can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The production and processing of tellurium-containing materials may have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 53:
        SetConsoleTextAttribute(hc, 7);
        cout << "Iodine (I):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Medical and Pharmaceutical Industry: Iodine is widely used in the medical and pharmaceutical industries. It is an essential component in the production of various pharmaceuticals, including antiseptics, disinfectants, and thyroid medications. Iodine's role in healthcare contributes to the pharmaceutical sector and public health." << endl << endl;
        cout << "2. Nutritional Supplements: Iodine is a crucial element for thyroid function, and it is added to salt and certain foods as a nutritional supplement. Iodized salt, for example, helps prevent iodine deficiency disorders, contributing to public health." << endl << endl;
        cout << "3. Dyes and Stains: Iodine is used in the production of dyes and stains, which have applications in the textile and laboratory industries. Its use in these applications contributes to the manufacturing sector and scientific research." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Concerns: The release of iodine into the environment, particularly through industrial processes, can contribute to environmental contamination. Certain iodine compounds can have adverse effects on aquatic ecosystems and soil." << endl << endl;
        cout << "2. Occupational Health and Safety: Workers involved in the production and handling of iodine and its compounds may face occupational health risks. Proper safety measures and regulations are necessary to minimize these risks." << endl << endl;
        cout << "3. Resource Availability: While iodine is not a rare element, its availability can be influenced by geopolitical factors and the concentration of iodine-containing minerals in certain regions." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 54:
        SetConsoleTextAttribute(hc, 7);
        cout << "Xenon (Xe):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Medical Imaging: Xenon is used in medical imaging, particularly in xenon CT (computed tomography) scans. It has applications in imaging the blood flow to the brain, providing valuable information for medical diagnosis." << endl << endl;
        cout << "2. Lighting: While not a primary application, xenon gas is used in certain types of high-intensity discharge lamps, such as xenon arc lamps. These lamps have applications in projection systems, automotive headlights, and other specialized lighting." << endl << endl;
        cout << "3. Space Exploration: Xenon is used as a propellant in ion thrusters for spacecraft. The use of xenon in space exploration contributes to advancements in aerospace technology and related industries." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Xenon is a rare and inert gas, and its availability is limited. The extraction and production of xenon are often byproducts of the liquefaction and separation of air, where xenon is present in trace amounts. The scarcity of xenon contributes to its relatively high cost." << endl << endl;
        cout << "2. High Cost: Xenon is an expensive gas due to its rarity and the energy-intensive process required to extract and purify it. This high cost can limit its widespread use in certain applications." << endl << endl;
        cout << "3. Environmental Impact: While xenon itself is inert and non-toxic, the processes involved in its production, such as air separation and liquefaction, can have environmental impacts. Energy-intensive methods for xenon extraction may contribute to greenhouse gas emissions." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 55:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cesium (Cs):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Atomic Clocks: Cesium is used in atomic clocks, specifically in devices called cesium atomic clocks. These clocks are highly accurate and are used in various applications, including scientific research, telecommunications, and global positioning systems (GPS). Accurate timekeeping is essential for synchronization in various technological systems." << endl << endl;
        cout << "2. Oil and Gas Exploration: Cesium magnetometers, which measure variations in the Earth's magnetic field, are used in oil and gas exploration. They help identify subsurface structures and can contribute to the discovery of underground resources." << endl << endl;
        cout << "3. Medical Imaging: Cesium-137, a radioactive isotope of cesium, is used in nuclear medicine for cancer treatment and certain imaging procedures. The medical applications of cesium contribute to advancements in healthcare and provide therapeutic options for patients." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Cesium is a relatively rare element, and its availability is limited. The extraction and production of cesium can be challenging, contributing to its relatively high cost." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of cesium and its compounds can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: While cesium itself is not generally considered highly toxic, the processes involved in its production, as well as potential contamination during mining, can have environmental impacts. Sustainable practices and proper waste disposal are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 56:
        SetConsoleTextAttribute(hc, 7);
        cout << "Barium (Ba):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Oil and Gas Industry: Barium sulfate, in the form of barite, is a key component in drilling fluids used in the oil and gas industry. It helps control well pressure, lubricate drill bits, and prevent blowouts during drilling operations. The demand for barite in oil and gas exploration contributes to economic activity in this sector." << endl << endl;
        cout << "2. Medical Imaging: Barium is used in medical imaging procedures, specifically in barium swallow tests and barium enemas. These tests help visualize the gastrointestinal tract, aiding in the diagnosis of various medical conditions. The use of barium in healthcare contributes to the medical and pharmaceutical industries." << endl << endl;
        cout << "3. Consumer Products: Barium compounds have applications in the production of consumer products such as fireworks, glass, and ceramics. The use of barium in these products contributes to economic activities in the manufacturing and entertainment industries." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Occupational Health and Safety: The handling and processing of barium and its compounds, particularly in industrial settings, can pose safety hazards to workers. Barium exposure may have adverse health effects, and proper safety measures and regulations are necessary to minimize risks." << endl << endl;
        cout << "2. Environmental Impact: The mining and processing of barium-containing minerals, such as barite, can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        cout << "3. Waste Disposal: Barium-containing waste generated from various industries, such as mining and manufacturing, requires proper disposal to prevent environmental contamination. Effective waste management practices are essential to mitigate negative impacts." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 57:
        SetConsoleTextAttribute(hc, 7);
        cout << "Lanthanum (La):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Catalysis: Lanthanum compounds are used as catalysts in various industrial processes, including petroleum refining and the production of chemicals. The catalytic properties of lanthanum contribute to increased efficiency and yield in these processes." << endl << endl;
        cout << "2. Automotive Catalysts: Lanthanum is used in the manufacturing of automotive catalysts, particularly in catalytic converters. Catalytic converters help reduce emissions from vehicles, contributing to environmental regulations and air quality improvements." << endl << endl;
        cout << "3. Electronics: Lanthanum is used in the production of certain electronic components, such as nickel-metal hydride (NiMH) batteries and phosphors for display screens. Its use in electronics supports advancements in technology and contributes to the electronics industry." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Lanthanum is a rare-earth element, and its availability can be limited. The extraction and production of lanthanum may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of lanthanum and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of lanthanum-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 58:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cerium (Ce):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Catalysis: Cerium compounds are widely used as catalysts in various industrial processes, including automotive catalysts (catalytic converters) and petroleum refining. The catalytic properties of cerium contribute to increased efficiency and reduced emissions in these processes." << endl << endl;
        cout << "2. Polishing and Finishing: Cerium oxide is commonly used in glass polishing, lens polishing, and other applications in the optics and glass industries. Its use contributes to the production of high-quality optical products." << endl << endl;
        cout << "3. Cerium Alloys: Cerium is used as an alloying element in certain alloys, such as mischmetal (a mixture of rare-earth metals). Mischmetal has applications in the production of lighter flints, ferrocerium fire starters, and some aluminum alloys." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Cerium is a rare-earth element, and its availability can be limited. The extraction and production of cerium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of cerium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of cerium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 59:
        SetConsoleTextAttribute(hc, 7);
        cout << "Praseodymium (Pr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Magnets and Electronics: Praseodymium is a key component in the production of high-strength magnets, particularly neodymium-iron-boron (NdFeB) magnets. These magnets are used in various electronic devices, including headphones, speakers, electric motors, and generators, contributing to the electronics and technology industries." << endl << endl;
        cout << "2. Catalysis: Praseodymium compounds are used as catalysts in certain industrial processes, including the production of plastics and petroleum refining. The catalytic properties of praseodymium contribute to increased efficiency and reduced environmental impact in these processes." << endl << endl;
        cout << "3. Hybrid and Electric Vehicles: Praseodymium-containing magnets play a crucial role in the motors of hybrid and electric vehicles, contributing to the development of cleaner and more energy-efficient transportation technologies." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Praseodymium is a rare-earth element, and its availability can be limited. The extraction and production of praseodymium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of praseodymium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of praseodymium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 60:
        SetConsoleTextAttribute(hc, 7);
        cout << "Neodymium (Nd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Permanent Magnets: Neodymium is a crucial component in the production of high-strength magnets, particularly neodymium-iron-boron (NdFeB) magnets. These magnets are essential in various electronic devices, including headphones, speakers, electric motors, and generators. The use of neodymium magnets contributes to the electronics, automotive, and renewable energy industries." << endl << endl;
        cout << "2. Wind Turbines: Neodymium magnets are widely used in the generators of wind turbines. The growth of the wind energy sector, which relies on neodymium-containing magnets for efficient power generation, contributes to renewable energy development." << endl << endl;
        cout << "3. Electric Vehicles: Neodymium magnets are used in the motors of electric and hybrid vehicles, contributing to the development of cleaner and more energy-efficient transportation technologies." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Neodymium is a rare-earth element, and its availability can be limited. The extraction and production of neodymium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of neodymium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of neodymium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 61:
        SetConsoleTextAttribute(hc, 7);
        cout << "Promethium (Pm):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Batteries: Promethium-147, a radioactive isotope of promethium, has been used in nuclear batteries. These batteries have been employed in situations where a long-lasting and compact power source is needed, such as in spacecraft, pacemakers, and certain remote sensors." << endl << endl;
        cout << "2. Thickness Gauges: Promethium has been used in thickness gauges for industrial applications, particularly in the measurement of materials like paper, plastics, and metal. These gauges contribute to quality control processes in manufacturing." << endl << endl;
        cout << "3. Smoke Detectors: Promethium has historically been used in some types of ionization chamber smoke detectors. The ionization chamber contains a small amount of promethium-147, which emits alpha particles. When smoke particles enter the chamber, they disrupt the flow of the alpha particles, triggering an alarm. This application contributes to fire safety in residential and commercial buildings." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Nature: Promethium is radioactive, and its handling and use pose potential health risks due to ionizing radiation. Proper safety measures and regulations are necessary to minimize these risks, and the disposal of waste containing promethium requires careful management to prevent environmental contamination." << endl << endl;
        cout << "2. Resource Scarcity: Promethium is relatively scarce and is not naturally abundant. Its availability is limited, and obtaining significant quantities involves artificial production or extraction from nuclear waste." << endl << endl;
        cout << "3. Regulatory Challenges: Due to its radioactive nature, the use, handling, and disposal of promethium are subject to strict regulatory controls. Compliance with these regulations adds to the complexity and cost of using promethium in various applications." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 62:
        SetConsoleTextAttribute(hc, 7);
        cout << "Samarium (Sm):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Permanent Magnets: Samarium is used in the production of samarium-cobalt (SmCo) magnets, which are high-performance permanent magnets. These magnets have applications in various industries, including aerospace, defense, and certain medical devices." << endl << endl;
        cout << "2. Catalysis: Samarium compounds are used as catalysts in certain industrial processes, contributing to increased efficiency and reduced environmental impact in areas such as chemical production." << endl << endl;
        cout << "3. Nuclear Reactors: Samarium-149 isotope has been used in control rods for nuclear reactors. It has a high neutron absorption cross-section, making it effective for regulating the nuclear reaction in certain reactor designs." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Samarium is a rare-earth element, and its availability can be limited. The extraction and production of samarium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of samarium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of samarium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 63:
        SetConsoleTextAttribute(hc, 7);
        cout << "Europium (Eu):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Phosphors for Lighting: Europium compounds are widely used as phosphors in fluorescent lamps, LEDs, and cathode ray tubes (CRTs). These phosphors emit various colors of light when exposed to electrons, contributing to energy-efficient lighting technologies." << endl << endl;
        cout << "2. Color TV Screens: Europium compounds are used in the production of red phosphors for color television screens and other display technologies. The use of europium enhances the color accuracy and vibrancy of displays." << endl << endl;
        cout << "3. Catalysis: Europium compounds have applications as catalysts in certain chemical processes, contributing to increased efficiency and reduced environmental impact in the chemical industry." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Europium is a rare-earth element, and its availability can be limited. The extraction and production of europium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of europium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of europium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 64:
        SetConsoleTextAttribute(hc, 7);
        cout << "Gadolinium (Gd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Magnetic Resonance Imaging (MRI): Gadolinium is commonly used as a contrast agent in magnetic resonance imaging (MRI) scans. It enhances the visibility of certain tissues and blood vessels, contributing to improved medical diagnostics and healthcare." << endl << endl;
        cout << "2. Nuclear Reactors: Gadolinium-155 and gadolinium-157 isotopes are used in nuclear reactors as burnable poisons. These isotopes help control the rate of nuclear reactions by absorbing excess neutrons, contributing to the safety and efficiency of certain reactor designs." << endl << endl;
        cout << "3. Electronics and Technology: Gadolinium is used in the production of certain electronic components and technologies. Its magnetic properties make it suitable for various applications, including magnetostrictive materials and bubble memory devices." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Gadolinium is a rare-earth element, and its availability can be limited. The extraction and production of gadolinium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of gadolinium and its compounds, especially in medical and industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of gadolinium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 65:
        SetConsoleTextAttribute(hc, 7);
        cout << "Terbium (Tb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Magnets and Electronics: Terbium is used in the production of terbium-dysprosium-iron magnets, which are important for certain electronic devices, including headphones, speakers, and electric motors. These magnets contribute to the electronics and automotive industries." << endl << endl;
        cout << "2. Phosphors for Lighting and Displays: Terbium compounds are used in phosphors for fluorescent lamps and certain types of displays. The phosphors emit specific colors of light when excited, contributing to energy-efficient lighting and display technologies." << endl << endl;
        cout << "3. Nuclear Reactors: Terbium has applications in nuclear reactors, particularly in control rods. Terbium-based materials can absorb neutrons and help regulate the rate of nuclear reactions in certain reactor designs." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Terbium is a rare-earth element, and its availability can be limited. The extraction and production of terbium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of terbium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of terbium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 66:
        SetConsoleTextAttribute(hc, 7);
        cout << "Dysprosium (Dy):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Magnets and Electronics: Dysprosium is a key component in the production of neodymium-iron-boron (NdFeB) magnets, which are crucial for various electronic devices, including electric vehicles, wind turbines, and other applications requiring strong permanent magnets." << endl << endl;
        cout << "2. Clean Energy Technologies: Dysprosium is used in certain clean energy technologies, such as high-performance permanent magnets for wind turbines and electric vehicle motors. These technologies contribute to the transition to renewable energy and sustainable transportation." << endl << endl;
        cout << "3. Nuclear Reactors: Dysprosium has applications in nuclear reactors, particularly in control rods. Dysprosium-based materials can absorb neutrons and help regulate the rate of nuclear reactions in certain reactor designs." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Dysprosium is a rare-earth element, and its availability can be limited. The extraction and production of dysprosium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of dysprosium and its compounds can pose safety hazards to workers in industries that use these materials. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of dysprosium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 67:
        SetConsoleTextAttribute(hc, 7);
        cout << "Holmium (Ho):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Medical Applications: Holmium has medical applications, particularly in the field of nuclear medicine. Holmium-166, a radioactive isotope of holmium, is used in certain cancer treatments, such as brachytherapy, where radioactive sources are placed directly into or near tumors." << endl << endl;
        cout << "2. Lasers: Holmium is used as a dopant in certain types of lasers, such as holmium-doped yttrium aluminum garnet (YAG) lasers. These lasers have applications in medical procedures, laser surgery, and scientific research." << endl << endl;
        cout << "3. Research and Development: Holmium, like other rare earth elements, is used in the research and development of advanced technologies. Its unique properties make it valuable for specific applications in materials science, electronics, and telecommunications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Holmium is a rare-earth element, and its availability can be limited. The extraction and production of holmium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of holmium and its compounds, especially in medical and industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of holmium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 68:
        SetConsoleTextAttribute(hc, 7);
        cout << "Erbium (Er):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Fiber Optic Communications: Erbium is a key component in erbium-doped fiber amplifiers (EDFAs), which are used to amplify signals in long-distance fiber optic communication systems. The use of erbium in fiber optics contributes to efficient and high-capacity telecommunications." << endl << endl;
        cout << "2. Laser Technology: Erbium is used as a dopant in certain laser technologies, including erbium-doped lasers. These lasers have applications in medical procedures, telecommunications, and scientific research." << endl << endl;
        cout << "3. Medical Imaging: Erbium is used in medical imaging systems, particularly in certain types of laser systems used for skin resurfacing and dental procedures." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Erbium is a rare-earth element, and its availability can be limited. The extraction and production of erbium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of erbium and its compounds, especially in industrial and medical settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of erbium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 69:
        SetConsoleTextAttribute(hc, 7);
        cout << "Thulium (Tm):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Medical Applications: Thulium-170, a radioactive isotope of thulium, has applications in medical imaging and certain cancer treatments. Thulium lasers are also used in medical procedures, such as laser surgery." << endl << endl;
        cout << "2. Scientific Research: Thulium is used in scientific research, particularly in spectroscopy and studies of materials. Its unique properties make it valuable for specific analytical techniques." << endl << endl;
        cout << "3. Research and Development: Thulium, like other rare earth elements, is used in the research and development of advanced technologies. Its unique properties make it valuable for specific applications in materials science, electronics, and telecommunications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Thulium is a rare-earth element, and its availability can be limited. The extraction and production of thulium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of thulium and its compounds, especially in medical and industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of thulium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 70:
        SetConsoleTextAttribute(hc, 7);
        cout << "Ytterbium (Yb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Lasers: Ytterbium is used in certain laser technologies, such as ytterbium-doped lasers. These lasers have applications in various fields, including materials processing, telecommunications, and medical procedures." << endl << endl;
        cout << "2. Scientific Research: Ytterbium is used in scientific research, particularly in studies involving lasers, spectroscopy, and materials science. Its unique properties make it valuable for specific applications in analytical techniques." << endl << endl;
        cout << "3. Nuclear Reactors: Ytterbium has applications in nuclear reactors, where certain isotopes of ytterbium can be used for neutron absorption and control rod applications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Ytterbium is a rare-earth element, and its availability can be limited. The extraction and production of ytterbium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of ytterbium and its compounds, especially in industrial and research settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of ytterbium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 71:
        SetConsoleTextAttribute(hc, 7);
        cout << "Lutetium (Lu):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Medical Applications: Lutetium-177, a radioactive isotope of lutetium, has applications in targeted radionuclide therapy for certain types of cancer. Lutetium compounds are used in radiopharmaceuticals for medical imaging and therapeutic purposes." << endl << endl;
        cout << "2. Scientific Research: Lutetium is used in scientific research, particularly in studies involving the development of new materials, catalysts, and certain high-tech applications." << endl << endl;
        cout << "3. Research and Development: Lutetium, like other rare earth elements, is used in the research and development of advanced technologies. Its unique properties make it valuable for specific applications in materials science, electronics, and telecommunications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Lutetium is a rare-earth element, and its availability can be limited. The extraction and production of lutetium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of lutetium and its compounds, especially in medical and industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of lutetium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 72:
        SetConsoleTextAttribute(hc, 7);
        cout << "Hafnium (Hf):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Reactors: Hafnium has applications in nuclear reactors, where it can be used as a neutron absorber in control rods. Hafnium-based control rods are utilized in some reactor designs to regulate the rate of nuclear reactions." << endl << endl;
        cout << "2. Semiconductor Manufacturing: Hafnium compounds, particularly hafnium oxide, are used in the manufacturing of semiconductors. Hafnium-based materials contribute to the development of advanced electronic devices." << endl << endl;
        cout << "3. Aerospace Industry: Hafnium alloys have been used in aerospace applications, particularly in high-temperature environments. The unique properties of hafnium make it suitable for certain components in jet engines and spacecraft, contributing to advancements in aerospace technology." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Hafnium is relatively scarce, and its availability can be limited. The extraction and production of hafnium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of hafnium and its compounds, especially in industries such as nuclear and semiconductor manufacturing, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of hafnium-containing minerals can have environmental consequences. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 73:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tantalum (Ta):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics Manufacturing: Tantalum is a crucial component in the production of capacitors, which are widely used in electronic devices such as smartphones, laptops, and other consumer electronics. Tantalum capacitors are known for their high capacitance and stability, contributing to the miniaturization and performance of electronic devices." << endl << endl;
        cout << "2. Aerospace and Defense: Tantalum is used in certain aerospace and defense applications, such as turbine blades, missile components, and high-temperature alloys. Its high melting point and corrosion resistance make it valuable in these demanding environments." << endl << endl;
        cout << "3. Medical Devices: Tantalum has applications in the medical industry, particularly in the production of implants and medical devices. Its biocompatibility and resistance to corrosion make it suitable for use in various medical applications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Availability: Tantalum resources are limited, and the extraction process can be associated with geopolitical and ethical concerns. Some tantalum mining operations are located in regions with social and political instability, leading to challenges related to fair labor practices and environmental regulations." << endl << endl;
        cout << "2. Conflict Minerals: Tantalum is classified as a ""conflict mineral"" when sourced from regions involved in armed conflict, contributing to concerns about human rights abuses and the financing of armed groups. Efforts have been made to establish responsible sourcing practices to avoid the use of conflict minerals." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of tantalum ore can have environmental consequences, including deforestation, soil erosion, and water pollution. Sustainable mining practices and efforts to reduce the environmental impact are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 74:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tungsten (W):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Industrial Applications: Tungsten is widely used in various industrial applications, including the production of cemented carbides, cutting tools, and wear-resistant materials. Its hardness and durability make it valuable in industries such as mining, construction, and metalworking." << endl << endl;
        cout << "2. Electronics and Technology: Tungsten is used in the production of electronic devices, such as lightbulb filaments and electrical contacts. It is also used in the aerospace and defense industries for the production of components like jet engine parts and missiles." << endl << endl;
        cout << "3. Medical Applications: Tungsten alloys are used in medical imaging and radiation therapy equipment. Its high density makes it suitable for shielding against radiation in X-ray machines and other medical devices." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Availability: Tungsten resources are limited, and the extraction process can be associated with environmental challenges. Mining activities may contribute to deforestation, soil erosion, and habitat disruption." << endl << endl;
        cout << "2. Occupational Health and Safety: Tungsten mining and processing can pose risks to the health and safety of workers. Exposure to tungsten dust and compounds may lead to respiratory issues and other health concerns. Proper safety measures and regulations are necessary to minimize these risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of tungsten ore can have environmental consequences, including soil and water pollution. Sustainable mining practices and efforts to reduce the environmental impact are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 75:
        SetConsoleTextAttribute(hc, 7);
        cout << "Rhenium (Re):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Aerospace and Defense: Rhenium is used in the production of superalloys, which are crucial for high-temperature applications in jet engines, turbine blades, and certain aerospace components. Its ability to withstand extreme temperatures contributes to the efficiency and performance of aerospace technologies." << endl << endl;
        cout << "2. Catalysts: Rhenium is used as a catalyst in the production of high-octane gasoline. It improves the efficiency of certain catalytic processes, contributing to the petroleum refining industry." << endl << endl;
        cout << "3. Medical Imaging: Rhenium-188, a radioactive isotope of rhenium, has applications in nuclear medicine for therapeutic purposes, such as cancer treatment. It is used in radiopharmaceuticals for targeted radiation therapy." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Rhenium is relatively scarce, and its availability can be limited. The extraction and production of rhenium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of rhenium and its compounds, especially in industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of rhenium-containing minerals can have environmental consequences, including soil and water pollution. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 76:
        SetConsoleTextAttribute(hc, 7);
        cout << "Osmium (Os):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics and Technology: Osmium has applications in certain electronic components, particularly in the production of specialized electrical contacts and switches. Its hardness and durability make it suitable for specific technological applications." << endl << endl;
        cout << "2. Catalysis: Osmium compounds are used as catalysts in some chemical processes, contributing to increased efficiency and reduced environmental impact in the chemical industry." << endl << endl;
        cout << "3. Alloys: Osmium is alloyed with other metals, such as platinum, to create alloys with desirable properties. These alloys are used in certain specialized applications, including the production of pen tips, electrical contacts, and some medical devices." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Osmium is one of the rarest elements on Earth, and its availability is extremely limited. The extraction and production of osmium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of osmium and its compounds, especially in industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of osmium-containing minerals can have environmental consequences, including soil and water pollution. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 77:
        SetConsoleTextAttribute(hc, 7);
        cout << "Iridium (Ir):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics and Technology: Iridium is used in certain electronic components, particularly in the production of electrical contacts and spark plugs. Its high melting point and resistance to corrosion make it suitable for specific technological applications." << endl << endl;
        cout << "2. Catalysis: Iridium compounds serve as catalysts in various chemical processes, contributing to increased efficiency and reduced environmental impact in the chemical and pharmaceutical industries." << endl << endl;
        cout << "3. Space Exploration: Iridium is used in certain spacecraft components and instruments due to its resistance to extreme temperatures and harsh conditions. It has been used in satellite technologies, enhancing communication and navigation systems." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Iridium is one of the rarest elements on Earth, and its availability is limited. The extraction and production of iridium may contribute to resource scarcity and potential geopolitical considerations." << endl << endl;
        cout << "2. Occupational Health and Safety: The handling and processing of iridium and its compounds, especially in industrial settings, can pose safety hazards to workers. Proper safety measures and regulations are necessary to minimize health risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of iridium-containing minerals can have environmental consequences, including soil and water pollution. Sustainable mining practices and efforts to minimize environmental impacts are important considerations." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 78:
        SetConsoleTextAttribute(hc, 7);
        cout << "Platinum (Pt):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Automotive Industry: Platinum is a crucial component in catalytic converters used in vehicles to reduce harmful emissions. The automotive industry relies on platinum to meet emissions standards, contributing to air quality improvement." << endl << endl;
        cout << "2. Jewelry and Luxury Goods: Platinum is highly valued for its rarity and durability, making it a sought-after material for jewelry and luxury goods. Its use in high-end products contributes to the jewelry and luxury goods markets." << endl << endl;
        cout << "3. Electronics: Platinum is used in certain electronic components and devices, including hard disk drives and certain sensors, contributing to the manufacturing of advanced electronic technologies." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Scarcity: Platinum is relatively scarce, and its extraction can have environmental consequences. Mining activities may lead to habitat disruption, soil erosion, and water pollution." << endl << endl;
        cout << "2. Occupational Health and Safety: The mining and processing of platinum can pose risks to the health and safety of workers. Exposure to platinum dust and compounds may lead to respiratory issues and other health concerns. Proper safety measures and regulations are necessary to minimize these risks." << endl << endl;
        cout << "3. Environmental Impact: The mining and processing of platinum-containing minerals can have environmental consequences, including deforestation, soil and water pollution, and ecosystem disruption. Sustainable mining practices are essential to mitigate these impacts." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 79:
        SetConsoleTextAttribute(hc, 7);
        cout << "Gold (Au):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Jewelry and Luxury Goods: Gold is highly valued for its rarity, beauty, and durability, making it a sought-after material for jewelry and luxury goods. Its use in high-end products contributes significantly to the jewelry and luxury goods markets." << endl << endl;
        cout << "2. Investment: Gold is often considered a safe-haven asset and a hedge against inflation. Many individuals and institutional investors allocate funds to gold as a store of value, especially during times of economic uncertainty." << endl << endl;
        cout << "3. Electronics: Gold is an excellent conductor of electricity and is used in the production of electronic components, such as connectors, switches, and circuit boards. Its use in electronics contributes to the manufacturing of a wide range of devices." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Resource Extraction: The mining of gold can have significant environmental and social impacts. Large-scale mining operations may lead to deforestation, habitat destruction, soil erosion, and water pollution. The use of toxic chemicals, such as cyanide, in the extraction process poses environmental risks." << endl << endl;
        cout << "2. Labor Practices: Gold mining can be associated with poor labor practices, including unsafe working conditions, inadequate wages, and exploitation of labor in some regions. Social and ethical concerns related to mining practices are important considerations." << endl << endl;
        cout << "3. Conflict Gold: In some regions, gold mining has been linked to conflict financing. ""Conflict gold"" refers to gold sourced from areas where armed conflict and human rights abuses occur. Efforts have been made to establish responsible sourcing practices to avoid the use of conflict gold." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 80:
        SetConsoleTextAttribute(hc, 7);
        cout << "Mercury (Hg):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics and Industrial Applications: Mercury has historically been used in various industrial processes and electronic devices, including switches, thermometers, and certain types of batteries. Its unique properties, such as electrical conductivity and fluidity, made it valuable for specific applications." << endl << endl;
        cout << "2. Artisanal and Small-Scale Gold Mining (ASGM): Mercury has been used in ASGM as a means of extracting gold from ore. The amalgamation process, which involves mixing mercury with gold-containing materials, has been a common method in some regions." << endl << endl;
        cout << "3. Medical Devices: Some medical devices, such as thermometers and blood pressure monitors, historically used mercury. While the use of mercury in medical devices has decreased due to environmental and health concerns, it has contributed to the healthcare industry." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Environmental Contamination: Mercury is a potent neurotoxin, and its use and release into the environment can lead to contamination of air, water, and soil. Once released, mercury can transform into methylmercury, a highly toxic form that bioaccumulates in aquatic ecosystems, posing risks to human and environmental health." << endl << endl;
        cout << "2. Human Health Concerns: Exposure to mercury, especially in its methylmercury form, can have severe health impacts on humans, including neurological and developmental issues. This is particularly concerning in ASGM, where miners and nearby communities may be exposed to mercury through inhalation, ingestion, or dermal contact." << endl << endl;
        cout << "3. Ecosystem Disruption: Mercury pollution can lead to ecosystem disruption, especially in aquatic environments. It can negatively impact fish and other aquatic organisms, affecting entire food chains. This has implications for fisheries and the livelihoods of communities dependent on aquatic resources." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 81:
        SetConsoleTextAttribute(hc, 7);
        cout << "Thallium (Tl):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Electronics and Optics: Thallium compounds have been used in the electronics and optics industries. Thallium-based materials, such as thallium bromide and thallium iodide, have been employed in infrared detectors and certain optical systems." << endl << endl;
        cout << "2. Medical Imaging: Thallium-201, a radioactive isotope of thallium, has been used in nuclear medicine for imaging purposes, particularly in heart imaging studies to assess blood flow to the heart muscle." << endl << endl;
        cout << "3. Optics and Glass Manufacturing: Thallium oxide has been used in the manufacturing of special types of glass and lenses for specific optical applications. This contributes to advancements in optics and certain high-tech glass products." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Toxicity: Thallium is highly toxic to humans and can pose serious health risks. Exposure to thallium can occur through inhalation, ingestion, or skin contact. Acute and chronic thallium poisoning can lead to a range of health issues, including neurological damage, gastrointestinal problems, and organ failure." << endl << endl;
        cout << "2. Environmental Contamination: The improper disposal of thallium-containing waste or the release of thallium into the environment, whether through industrial processes or other means, can lead to environmental contamination. Thallium is persistent and can accumulate in soil and water, impacting ecosystems." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or produce thallium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of thallium exposure in the workplace." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 82:
        SetConsoleTextAttribute(hc, 7);
        cout << "Lead (Pb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Battery Manufacturing: Lead-acid batteries are a significant application of lead and are widely used for various purposes, including automotive batteries for vehicles, backup power supplies, and renewable energy storage. The battery industry contributes to economic activity and provides energy storage solutions." << endl << endl;
        cout << "2. Construction: Lead is used in construction materials, particularly in roofing, pipes, and certain alloys. Its properties, such as corrosion resistance and malleability, make it suitable for certain construction applications." << endl << endl;
        cout << "3. Ammunition: Lead has been used in the production of ammunition and bullets due to its density. Lead bullets are still widely used for certain applications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Toxicity: Lead is highly toxic to humans, especially to children, and can cause severe health issues, including developmental delays, cognitive impairment, and neurological damage. Exposure to lead can occur through various sources, including lead-based paints, contaminated water, and lead-containing products." << endl << endl;
        cout << "2. Environmental Contamination: Improper disposal of lead-containing waste and emissions from industrial processes can lead to environmental contamination. Lead can persist in soil and water, posing risks to ecosystems and wildlife." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or process lead, such as battery manufacturing or construction, may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of lead exposure in the workplace." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 83:
        SetConsoleTextAttribute(hc, 7);
        cout << "Bismuth (Bi):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Pharmaceuticals: Bismuth compounds, such as bismuth subsalicylate, have been used in medications to treat gastrointestinal issues, including indigestion and diarrhea. Bismuth-based drugs contribute to the pharmaceutical industry." << endl << endl;
        cout << "2. Alloys: Bismuth is used in certain alloys, such as bismuth-tin alloys, which have low melting points. These alloys find applications in soldering and casting." << endl << endl;
        cout << "3. Cosmetics: Bismuth oxychloride, a compound of bismuth, is used in cosmetics, such as face powders. Its properties contribute to the production of cosmetic products with a smooth texture and pearly appearance." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Limited Commercial Use: Bismuth has limited direct applications compared to more common metals. Its use is often niche and specific to certain industries, which limits its overall economic impact." << endl << endl;
        cout << "2. Resource Availability: While bismuth is not as scarce as some other metals, its availability is still limited. The mining and extraction of bismuth may face challenges related to resource availability and geopolitical considerations." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in the mining and processing of bismuth, as well as in industries using bismuth compounds, may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 84:
        SetConsoleTextAttribute(hc, 7);
        cout << "Polonium (Po):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Industry: Polonium-210 has been used in certain applications within the nuclear industry, particularly in nuclear reactors. It can serve as a neutron initiator in some nuclear weapons designs." << endl << endl;
        cout << "2. Static Elimination: Polonium has been used in certain industrial applications for static elimination, primarily in the printing industry. Its radioactive properties contribute to its effectiveness in neutralizing static charges on surfaces." << endl << endl;
        cout << "3. Scientific Research: Polonium has contributed to scientific research, particularly in the early 20th century when its discovery by Marie and Pierre Curie expanded our understanding of radioactive elements. This scientific knowledge has had broader implications for nuclear physics and chemistry." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Polonium is highly radioactive, and exposure to its decay products, particularly polonium-210, can pose severe health risks. The alpha particles emitted during its decay are harmful if ingested, inhaled, or come into contact with living tissues." << endl << endl;
        cout << "2. Occupational Health and Safety: Workers involved in industries using polonium or working in proximity to polonium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        cout << "3. Nuclear Proliferation Concerns: Polonium-210 has been associated with nuclear weapons, and its use or possession raises concerns about nuclear proliferation. International efforts are in place to monitor and regulate the use of radioactive materials to prevent their misuse." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 85:
        SetConsoleTextAttribute(hc, 7);
        cout << "Astatine (At):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Research and Scientific Studies: Astatine is primarily used in scientific research, particularly in nuclear physics and medicine. Its radioactivity and unique properties make it valuable for studying fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Scientific Research: Astatine has value in scientific research, particularly in nuclear physics and chemistry. Its properties and behavior contribute to the understanding of the periodic table and the behavior of halogens." << endl << endl;
        cout << "3. Medical Research: Despite its limitations for practical applications, astatine is of interest in medical research for its potential use in targeted alpha-particle cancer therapy. Research is ongoing to explore the feasibility of using astatine-labeled compounds to selectively deliver radiation to cancer cells." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Astatine is highly radioactive, and its use or handling poses significant health risks due to radiation exposure. The short half-life of astatine isotopes adds to the challenges of working with this element." << endl << endl;
        cout << "2. Limited Commercial Use: Astatine has very limited practical applications outside of scientific research. It is not used in industrial processes or consumer products, which means it does not contribute significantly to economic activities." << endl << endl;
        cout << "3. Nuclear Proliferation Concerns: While not a major concern given its limited availability and use, any material with potential nuclear applications, including astatine, raises some level of concern about nuclear proliferation. Stringent regulations and controls are in place to monitor the use of radioactive materials." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 86:
        SetConsoleTextAttribute(hc, 7);
        cout << "Radon (Rn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Radon is used in scientific research, particularly in studies related to radioactive decay and the behavior of radionuclides. Research involving radon can contribute to a better understanding of radioactivity." << endl << endl;
        cout << "2. Radon Measurement and Mitigation Industry: The need to address radon issues has led to the development of an industry focused on radon measurement and mitigation. This industry includes professionals who test for radon levels, provide mitigation services, and install radon-resistant construction practices. The growth of this industry contributes to job creation and economic activity." << endl << endl;
        cout << "3. Public Awareness and Education: Efforts to raise awareness about the dangers of radon and educate the public about mitigation strategies contribute to public health. While not directly economic, these awareness programs can lead to healthier populations, potentially reducing the economic burden of healthcare costs associated with radon-related illnesses." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Health Risks: Radon exposure is a significant health concern as it is the second leading cause of lung cancer after smoking. Radon gas can accumulate in enclosed spaces, particularly in buildings, and inhaling radon decay products can lead to an increased risk of lung cancer. The associated health costs and impact on workforce productivity can be substantial." << endl << endl;
        cout << "2. Construction Costs: Mitigating radon exposure in buildings often involves additional construction measures, such as installing radon barriers, ventilation systems, or using radon-resistant construction techniques. While these measures are essential for public health, they can contribute to increased construction costs." << endl << endl;
        cout << "3. Real Estate Impact: Radon levels can affect the value and marketability of real estate properties. High radon levels in a building may require remediation efforts, potentially affecting property values and the real estate market." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 87:
        SetConsoleTextAttribute(hc, 7);
        cout << "Francium (Fr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Francium is used in scientific research, particularly in nuclear physics, as it provides insights into atomic structure and decay processes. However, these applications are limited to laboratory settings." << endl << endl;
        cout << "2. Nuclear Physics Advancements: The study of francium can contribute to advancements in nuclear physics, helping scientists understand fundamental properties of atomic structures and contributing to the broader scientific knowledge base." << endl << endl;
        cout << "3. Educational Value: The study of francium in academic settings provides educational value. It serves as an example in chemistry and physics classrooms to illustrate principles related to radioactivity, atomic structure, and the periodic table. Educating students about rare and exotic elements like francium contributes to a broader understanding of the natural world." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Francium is highly radioactive, and its decay products pose significant health risks. Handling or working with francium requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity and short half-life of francium make it impractical for any commercial applications. It is not used in industrial processes, consumer products, or technology due to its scarcity and radioactivity." << endl << endl;
        cout << "3. Cost of Production: Francium is primarily produced in minute quantities in laboratories through nuclear reactions. The cost of producing even small amounts of francium is high, further limiting its practical utility." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 88:
        SetConsoleTextAttribute(hc, 7);
        cout << "Radium (Ra):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Historical Uses: In the early to mid-20th century, radium was used in various consumer products, such as glow-in-the-dark paints, watch dials, and medical treatments. Its luminescent properties made it valuable for these applications." << endl << endl;
        cout << "2. Medical Applications: Historically, radium was used in medicine for cancer treatments and in certain medical devices. However, modern medical practices have largely shifted away from radium due to its radioactive nature and associated health risks." << endl << endl;
        cout << "3. Contributions to Scientific Knowledge: Radium's discovery by Marie Curie and Pierre Curie in 1898 played a crucial role in advancing our understanding of radioactivity. Their groundbreaking work on radium and other radioactive elements earned them the Nobel Prize in Physics in 1903. Radium's unique properties contributed to the development of the field of nuclear physics and paved the way for subsequent scientific discoveries. The pursuit of knowledge and the scientific insights gained from the study of radium represent a positive contribution to human understanding of the natural world." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Health Risks: Radium is a highly radioactive material, and exposure to its decay products poses significant health risks, including an increased risk of cancer. The historical use of radium in consumer products and medical treatments has led to cases of radiation poisoning among workers and consumers." << endl << endl;
        cout << "2. Environmental Contamination: Improper disposal of radium-containing materials or contamination from industrial processes can lead to environmental issues. Radium can persist in soil and water, posing risks to ecosystems." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that historically used radium, such as watchmaking or certain industrial processes, may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 89:
        SetConsoleTextAttribute(hc, 7);
        cout << "Actinium (Ac):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Actinium is used in scientific research, particularly in nuclear physics and the study of radioactive decay. Its properties make it valuable for understanding fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Neutron Production: Actinium-227, a decay product of uranium-235, can be used as a neutron source in certain applications, such as in neutron radiography and research reactors." << endl << endl;
        cout << "3. Potential for Medical Applications: While not extensively utilized, actinium-225 is being investigated for potential use in targeted alpha-particle cancer therapy. The unique properties of actinium-225, including its alpha-emitting radiation, make it a candidate for delivering highly localized radiation to cancer cells. Research and development in this area could contribute to advancements in cancer treatment, offering a more targeted and effective approach." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Actinium is highly radioactive, and its decay products pose significant health risks. Handling or working with actinium requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity and short half-life of actinium make it impractical for any widespread commercial applications. It is not used in industrial processes, consumer products, or technology due to its scarcity and radioactivity." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle actinium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 90:
        SetConsoleTextAttribute(hc, 7);
        cout << "Thorium (Th):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Energy: Thorium is being explored as a potential fuel for advanced nuclear reactors. Some proponents argue that thorium-based nuclear power could offer advantages such as increased safety, reduced nuclear waste, and proliferation resistance compared to traditional uranium-based nuclear reactors." << endl << endl;
        cout << "2. Rare Earth Elements: Thorium is often found in association with rare earth elements (REEs). REEs are essential components in various high-tech applications, such as electronics, magnets, and renewable energy technologies. Thorium extraction as a byproduct of REE mining could contribute to the supply chain for these industries." << endl << endl;
        cout << "3. Medical Applications: Thorium-232 and its decay products have been used in certain medical applications, such as radiation therapy for cancer treatment." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Waste: While thorium itself is not highly radioactive, its decay products can pose radiation hazards. The long-lived decay products of thorium, such as radium-228, can contribute to radioactive waste concerns if not managed properly." << endl << endl;
        cout << "2. Nuclear Proliferation Concerns: Although thorium-based nuclear reactors have potential non-proliferation advantages, the technology is not yet widely deployed. The nuclear fuel cycle, including thorium, requires careful management to prevent potential misuse for weapons production." << endl << endl;
        cout << "3. Technology Development Costs: The development and deployment of thorium-based nuclear technologies may require significant research and development investments. Establishing a thorium-based nuclear industry would involve costs associated with building new reactor designs, infrastructure, and regulatory frameworks." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 91:
        SetConsoleTextAttribute(hc, 7);
        cout << "Protactinium (Pa):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Protactinium is used in scientific research, particularly in nuclear physics and the study of radioactive decay. Its properties make it valuable for understanding fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Neutron Production: Protactinium-233, a decay product of thorium-232, can be used to produce neutrons. Neutrons have applications in various fields, including scientific research, materials testing, and certain industrial processes." << endl << endl;
        cout << "3. Potential Role in Advanced Nuclear Reactors: Protactinium-233 can be bred from thorium-232 in certain nuclear reactor designs. The utilization of thorium as a nuclear fuel, with protactinium-233 as an intermediate step in the thorium fuel cycle, is being explored in advanced nuclear reactor research. The potential use of protactinium in advanced reactor technologies could contribute to the development of more efficient and sustainable nuclear energy solutions." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Protactinium is highly radioactive, and its decay products pose significant health risks. Handling or working with protactinium requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity and short half-life of protactinium make it impractical for any widespread commercial applications. It is not used in industrial processes, consumer products, or technology due to its scarcity and radioactivity." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle protactinium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 92:
        SetConsoleTextAttribute(hc, 7);
        cout << "Uranium (U):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Power Generation: Uranium is a key fuel for nuclear power plants, which contribute a significant portion of the world's electricity. Nuclear power is a low-carbon energy source that can help meet growing energy demands while reducing greenhouse gas emissions." << endl << endl;
        cout << "2. Job Creation: The nuclear power industry, from uranium mining to power plant operation and maintenance, creates jobs. This includes positions in mining, engineering, construction, and various support services." << endl << endl;
        cout << "3. Energy Security: Uranium contributes to diversifying the energy mix and reducing dependence on fossil fuels. This can enhance energy security by providing a stable and reliable source of electricity." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Waste: Nuclear power generation produces radioactive waste that requires careful management and disposal. The long-lived nature of some radioactive isotopes can pose challenges for waste storage and containment." << endl << endl;
        cout << "2. Nuclear Accidents: Accidents at nuclear power plants, while rare, can have severe economic and environmental consequences. Events like the Chernobyl disaster and the Fukushima Daiichi nuclear disaster have led to significant economic costs, including cleanup, compensation, and the decommissioning of affected facilities." << endl << endl;
        cout << "3. ecurity Risks: Uranium is a key component in the production of nuclear weapons. The proliferation of nuclear weapons and the risk of nuclear terrorism are significant concerns associated with the mining and trade of uranium." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 93:
        SetConsoleTextAttribute(hc, 7);
        cout << "Neptunium (Np):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Neptunium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving neptunium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Potential Nuclear Fuel: Neptunium-237 can be produced in nuclear reactors, and there is ongoing research into its potential use as a nuclear fuel. In certain reactor designs, neptunium could undergo fission, contributing to energy production." << endl << endl;
        cout << "3. Potential for Nuclear Waste Transmutation: Neptunium-237, which is a byproduct of nuclear reactors, can be challenging to manage due to its long half-life. Some advanced nuclear reactor designs explore the possibility of transmuting neptunium and other long-lived transuranic elements into shorter-lived or stable isotopes. This process, known as nuclear waste transmutation, has the potential to reduce the long-term radiotoxicity of nuclear waste and make the management of radioactive materials more sustainable." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Neptunium is highly radioactive, and its decay products pose significant health risks. Handling or working with neptunium requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of neptunium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle neptunium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 94:
        SetConsoleTextAttribute(hc, 7);
        cout << "Plutonium (Pu):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Nuclear Power Generation: Plutonium is used as a fuel in nuclear reactors, contributing to the generation of electricity. Nuclear power is a low-carbon energy source that can provide a stable and reliable supply of electricity." << endl << endl;
        cout << "2. Energy Security: The use of plutonium in nuclear power helps diversify the energy mix, reducing dependence on fossil fuels. This can enhance energy security by providing a reliable source of electricity." << endl << endl;
        cout << "3. Nuclear Medicine: Certain isotopes of plutonium have medical applications, including the treatment of certain types of cancer. Plutonium-238, in particular, has been used in the production of radioisotope thermoelectric generators (RTGs) for space exploration missions." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Waste: The use of plutonium in nuclear reactors produces radioactive waste that requires careful management and disposal. The long-lived nature of some plutonium isotopes adds to the challenges of waste storage and containment." << endl << endl;
        cout << "2. Nuclear Weapons Proliferation: Plutonium-239, a fissile isotope of plutonium, is a key material in the production of nuclear weapons. The potential for nuclear weapons proliferation is a significant concern associated with the mining, production, and trade of plutonium." << endl << endl;
        cout << "3. Security Risks: The handling, transportation, and storage of plutonium pose security risks due to its potential use in nuclear weapons. Measures to prevent theft, unauthorized access, and trafficking of plutonium are critical for international security." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 95:
        SetConsoleTextAttribute(hc, 7);
        cout << "Americium (Am):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Smoke Detectors: Americium-241 is used in ionization-type smoke detectors. These detectors are commonly used in residential and commercial buildings to detect the presence of smoke and provide early warning in case of fire." << endl << endl;
        cout << "2. Industrial Gauging Devices: Americium-241 has been used in certain industrial gauging devices, particularly in the measurement of density and thickness. These devices contribute to quality control processes in industries such as manufacturing, providing accurate measurements for materials." << endl << endl;
        cout << "3. Potential for Neutron Sources: Americium-241 can serve as a neutron source in certain applications, contributing to scientific research and industrial applications that require controlled neutron radiation. Neutron sources are used in various fields, including materials testing and analysis." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Americium is highly radioactive, and its decay products pose significant health risks. Handling or working with americium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The scarcity of americium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. Apart from smoke detectors, it is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle americium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 96:
        SetConsoleTextAttribute(hc, 7);
        cout << "Curium (Cm):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Curium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving curium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Nuclear Fuel Production: Curium-244 has been considered as a potential fuel for advanced nuclear reactors. Research is ongoing to explore its use in the production of electricity through nuclear fission." << endl << endl;
        cout << "3. Potential for Neutron Sources: Certain isotopes of curium, such as curium-244, can serve as neutron sources. These sources are used in scientific research, including experiments that require controlled neutron radiation. Neutron sources also find applications in materials testing and analysis." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Curium is highly radioactive, and its decay products pose significant health risks. Handling or working with curium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of curium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle curium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 97:
        SetConsoleTextAttribute(hc, 7);
        cout << "Berkelium (Bk):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Berkelium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving berkelium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Isotope Production: Certain isotopes of berkelium, such as berkelium-249, can be used in the production of other elements through neutron irradiation. These isotopes may have applications in scientific research and industrial processes." << endl << endl;
        cout << "3. Potential for Neutron Sources: Certain isotopes of berkelium, such as berkelium-249, can serve as neutron sources. These sources are used in scientific research, including experiments that require controlled neutron radiation. Neutron sources also find applications in materials testing and analysis." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Berkelium is highly radioactive, and its decay products pose significant health risks. Handling or working with berkelium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of berkelium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle berkelium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 98:
        SetConsoleTextAttribute(hc, 7);
        cout << "Californium (Cf):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Californium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving californium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Neutron Source: Californium-252 is a powerful neutron source and is used in certain industrial and scientific applications, including neutron radiography, moisture gauges, and in the detection of metals." << endl << endl;
        cout << "3. Potential for Cancer Treatment: While in the early stages of exploration, some research has investigated the use of californium-252 in cancer treatment. The intense neutron radiation emitted by californium-252 could be utilized in boron neutron capture therapy (BNCT), a technique that targets cancer cells with high precision. The potential application of californium in cancer therapy represents an area of ongoing research with the aim of developing more effective and targeted treatments for certain types of cancer." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Californium is highly radioactive, and its decay products pose significant health risks. Handling or working with californium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of californium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle californium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 99:
        SetConsoleTextAttribute(hc, 7);
        cout << "Einsteinium (Es):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Einsteinium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving einsteinium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Isotope Production: Certain isotopes of einsteinium, such as einsteinium-254, can be used in the production of other elements through neutron irradiation. These isotopes may have applications in scientific research and industrial processes." << endl << endl;
        cout << "3. Potential for Neutron Sources: Einsteinium-254, one of its isotopes, can serve as a neutron source. This isotope has applications in scientific research, including experiments requiring controlled neutron radiation." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Einsteinium is highly radioactive, and its decay products pose significant health risks. Handling or working with einsteinium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of einsteinium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle einsteinium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 100:
        SetConsoleTextAttribute(hc, 7);
        cout << "Fermium (Fm):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Fermium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving fermium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Isotope Production: Certain isotopes of fermium, such as fermium-255, can be used in the production of other elements through neutron irradiation. These isotopes may have applications in scientific research and industrial processes." << endl << endl;
        cout << "3. Contributions to the Periodic Table: The discovery and study of fermium, along with other transuranic elements, have expanded our understanding of the periodic table. Fermium's placement in the actinide series contributes to the overall organization of chemical elements." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Fermium is highly radioactive, and its decay products pose significant health risks. Handling or working with fermium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of fermium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle fermium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 101:
        SetConsoleTextAttribute(hc, 7);
        cout << "Mendelevium (Md):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Mendelevium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving mendelevium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Isotope Production: Certain isotopes of mendelevium, such as mendelevium-256, can be used in the production of other elements through neutron irradiation. These isotopes may have applications in scientific research and industrial processes." << endl << endl;
        cout << "3. Contributions to the Periodic Table: Mendelevium's discovery and study, along with other transuranic elements, have expanded our understanding of the periodic table. Mendelevium's placement in the actinide series contributes to the overall organization of chemical elements." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Mendelevium is highly radioactive, and its decay products pose significant health risks. Handling or working with mendelevium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of mendelevium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle mendelevium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 102:
        SetConsoleTextAttribute(hc, 7);
        cout << "Nobelium (No):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Nobelium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving nobelium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Isotope Production: Certain isotopes of nobelium, such as nobelium-259, can be used in the production of other elements through neutron irradiation. These isotopes may have applications in scientific research and industrial processes." << endl << endl;
        cout << "3. Contributions to the Periodic Table: The discovery and study of nobelium, along with other transuranic elements, have expanded our understanding of the periodic table. Nobelium's placement in the actinide series contributes to the overall organization of chemical elements." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Nobelium is highly radioactive, and its decay products pose significant health risks. Handling or working with nobelium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of nobelium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale" << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle nobelium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 103:
        SetConsoleTextAttribute(hc, 7);
        cout << "Lawrencium (Lr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Lawrencium is used in scientific research, particularly in studies related to nuclear physics and the behavior of radioactive elements. Research involving lawrencium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Isotope Production: Certain isotopes of lawrencium, such as lawrencium-257, can be used in the production of other elements through neutron irradiation. These isotopes may have applications in scientific research and industrial processes." << endl << endl;
        cout << "3. Technological Applications: Although lawrencium itself may not have direct applications, the techniques developed to produce and study it could have broader applications in areas such as materials science, chemistry, or nuclear physics, potentially leading to new technologies that could impact the economy." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Lawrencium is highly radioactive, and its decay products pose significant health risks. Handling or working with lawrencium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of lawrencium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle lawrencium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 104:
        SetConsoleTextAttribute(hc, 7);
        cout << "Rutherfordium (Rf):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Rutherfordium is primarily used in scientific research, particularly in studies related to nuclear physics and the behavior of heavy elements. Research involving rutherfordium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, rutherfordium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Scientific Knowledge and Technological Advancements: The discovery and study of elements contribute to our understanding of fundamental science. The knowledge gained from researching elements like rutherfordium can lead to advancements in technology and materials science, which may eventually have economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Rutherfordium is highly radioactive, and its decay products pose significant health risks. Handling or working with rutherfordium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of rutherfordium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle rutherfordium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 105:
        SetConsoleTextAttribute(hc, 7);
        cout << "Dubnium (Db):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Dubnium is primarily used in scientific research, particularly in studies related to nuclear physics and the behavior of heavy elements. Research involving dubnium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, dubnium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Technological Innovation: The techniques developed for the synthesis and study of dubnium could potentially have broader applications in nuclear physics, materials science, or other related fields. These innovations may contribute to technological advancements with economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Dubnium is highly radioactive, and its decay products pose significant health risks. Handling or working with dubnium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of dubnium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle dubnium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 106:
        SetConsoleTextAttribute(hc, 7);
        cout << "Seaborgium (Sg):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Seaborgium is primarily used in scientific research, particularly in studies related to nuclear physics and the behavior of heavy elements. Research involving seaborgium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, seaborgium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Technological Innovation: Techniques developed for the synthesis and study of seaborgium may have broader applications in nuclear physics, materials science, or other scientific disciplines. These innovations could potentially contribute to technological advancements with economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Seaborgium is highly radioactive, and its decay products pose significant health risks. Handling or working with seaborgium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of seaborgium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle seaborgium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure" << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 107:
        SetConsoleTextAttribute(hc, 7);
        cout << "Bohrium (Bh):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Bohrium is primarily used in scientific research, particularly in studies related to nuclear physics and the behavior of heavy elements. Research involving bohrium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, bohrium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Technological Innovation: Techniques developed for the synthesis and study of bohrium may have broader applications in nuclear physics, materials science, or other scientific disciplines. These innovations could potentially contribute to technological advancements with economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Bohrium is highly radioactive, and its decay products pose significant health risks. Handling or working with bohrium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of bohrium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle bohrium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 108:
        SetConsoleTextAttribute(hc, 7);
        cout << "Hassium (Hs):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Hassium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving hassium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, hassium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Educational and Training Opportunities: Research involving hassium and other synthetic elements can provide valuable educational and training opportunities for scientists, researchers, and students. This can contribute to the development of a skilled workforce in the fields of nuclear physics, chemistry, and materials science, fostering innovation and expertise that may have broader economic benefits in the long term." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Hassium is highly radioactive, and its decay products pose significant health risks. Handling or working with hassium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of hassium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle hassium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 109:
        SetConsoleTextAttribute(hc, 7);
        cout << "Meitnerium (Mt):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Meitnerium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving meitnerium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, meitnerium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. International Collaboration: The study of synthetic elements often involves collaboration among scientists and research institutions globally. International cooperation can foster scientific progress, exchange of knowledge, and cultural understanding, which can have positive diplomatic and economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Meitnerium is highly radioactive, and its decay products pose significant health risks. Handling or working with meitnerium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of meitnerium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle meitnerium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 110:
        SetConsoleTextAttribute(hc, 7);
        cout << "Darmstadtium (Ds):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Darmstadtium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving darmstadtium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, darmstadtium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Educational and Training Opportunities: Research involving darmstadtium and other synthetic elements provides educational and training opportunities for scientists, researchers, and students. This contributes to the development of a skilled workforce in fields such as nuclear physics and materials science, fostering innovation and expertise that may have broader economic benefits in the long term. Additionally, advancements in education and training can contribute to the overall scientific and technological capabilities of a nation or region." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Darmstadtium is highly radioactive, and its decay products pose significant health risks. Handling or working with darmstadtium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of darmstadtium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle darmstadtium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 111:
        SetConsoleTextAttribute(hc, 7);
        cout << "Roentgenium (Rg):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Roentgenium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving roentgenium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, roentgenium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. International Collaboration: The study of synthetic elements often involves collaboration among scientists and research institutions globally. International cooperation can foster scientific progress, exchange of knowledge, and cultural understanding, which can have positive diplomatic and economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Roentgenium is highly radioactive, and its decay products pose significant health risks. Handling or working with roentgenium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of roentgenium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle roentgenium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 112:
        SetConsoleTextAttribute(hc, 7);
        cout << "Copernicium (Cn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Copernicium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving copernicium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, copernicium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. International Collaboration: The study of synthetic elements often involves collaboration among scientists and research institutions globally. International cooperation can foster scientific progress, exchange of knowledge, and cultural understanding, which can have positive diplomatic and economic implications." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Copernicium is highly radioactive, and its decay products pose significant health risks. Handling or working with copernicium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of copernicium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle copernicium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 113:
        SetConsoleTextAttribute(hc, 7);
        cout << "Nihonium (Nh):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Nihonium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving nihonium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, nihonium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Educational and Training Opportunities: Research involving nihonium and other synthetic elements provides educational and training opportunities for scientists, researchers, and students. This contributes to the development of a skilled workforce in fields such as nuclear physics and materials science, fostering innovation and expertise that may have broader economic benefits in the long term. Additionally, advancements in education and training can contribute to the overall scientific and technological capabilities of a nation or region." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Nihonium is highly radioactive, and its decay products pose significant health risks. Handling or working with nihonium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of nihonium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle nihonium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 114:
        SetConsoleTextAttribute(hc, 7);
        cout << "Flerovium (Fl):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Flerovium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving flerovium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, flerovium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle flerovium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Flerovium is highly radioactive, and its decay products pose significant health risks. Handling or working with flerovium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of flerovium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Ethical Considerations: In some cases, there may be ethical considerations related to the production and study of synthetic elements. Issues such as safety, public perception, and ethical use of resources may need to be addressed." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 115:
        SetConsoleTextAttribute(hc, 7);
        cout << "Moscovium (Mc):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Moscovium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving moscovium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, moscovium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Inspiration for STEM Education and Innovation: The exploration of synthetic elements like moscovium can serve as a source of inspiration for students and researchers in the fields of science, technology, engineering, and mathematics (STEM). High-profile scientific discoveries capture public interest and can encourage the pursuit of STEM education and careers. A well-educated and innovative workforce is crucial for driving economic growth and competitiveness." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Moscovium is highly radioactive, and its decay products pose significant health risks. Handling or working with moscovium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of moscovium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle moscovium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 116:
        SetConsoleTextAttribute(hc, 7);
        cout << "Livermorium (Lv):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Livermorium is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving livermorium contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, livermorium is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Educational and Workforce Development: Research involving livermorium and other synthetic elements provides educational and training opportunities for scientists, researchers, and students. This contributes to the development of a skilled workforce in fields such as nuclear physics and materials science, fostering innovation and expertise. Additionally, advancements in education can contribute to the overall scientific and technological capabilities of a nation or region." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Livermorium is highly radioactive, and its decay products pose significant health risks. Handling or working with livermorium-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of livermorium, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle livermorium-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 117:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tennessine (Ts):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Tennessine is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving tennessine contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, tennessine is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Advanced Instrumentation: Techniques developed for the study and synthesis of tennessine may contribute to the advancement of experimental methods and instrumentation. These advancements can have broader applications in analytical techniques, potentially influencing the development of high-precision instruments used in various scientific and industrial settings. Such technologies can contribute to improvements in measurement accuracy and reliability." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Tennessine is highly radioactive, and its decay products pose significant health risks. Handling or working with tennessine-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Limited Commercial Use: The extreme rarity of tennessine, its synthetic nature, and the challenges associated with its production make it impractical for widespread commercial applications. It is not used in industrial processes, consumer products, or technology on a large scale." << endl << endl;
        cout << "3. Occupational Health and Safety: Workers involved in industries that use or handle tennessine-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 118:
        SetConsoleTextAttribute(hc, 7);
        cout << "Oganesson (Og):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Scientific Research: Oganesson is primarily used in scientific research, especially in studies related to nuclear physics and the behavior of heavy elements. Research involving oganesson contributes to a better understanding of fundamental atomic and nuclear processes." << endl << endl;
        cout << "2. Elemental Studies: As a transactinide element, oganesson is part of the periodic table's exploration and helps scientists understand the properties and behavior of elements in the heavy atomic number range." << endl << endl;
        cout << "3. Inspiration for Education and Outreach: Scientific discoveries, even in the realm of synthetic elements like oganesson, can serve as a source of inspiration for students and the general public. Educational programs and outreach initiatives related to the exploration of oganesson can stimulate interest in science, technology, engineering, and mathematics (STEM) fields. An informed and engaged public can contribute to a society that values scientific inquiry and innovation." << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Radioactive Hazard: Oganesson is highly radioactive, and its decay products pose significant health risks. Handling or working with oganesson-containing materials requires specialized equipment and safety measures due to its intense radioactivity." << endl << endl;
        cout << "2. Occupational Health and Safety: Workers involved in industries that use or handle oganesson-containing materials may face occupational health risks. Proper safety measures and regulations are necessary to minimize the risk of exposure." << endl << endl;
        cout << "3. Nuclear Proliferation Concerns: As with other transactinide elements, certain isotopes of oganesson could potentially be used in the production of nuclear weapons. Strict controls and safeguards are necessary to prevent their misuse and proliferation." << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;
    }


    string userInput;

    do {
        cout << "Input: ";
        cin >> userInput;

        if (userInput == "Exit") {
            system("cls");
            table();
            find();
            TextElement();

        }
        else if (is_element(userInput)) {
            element = userInput;
            TextElement();
        }
        else {
            cout << "ERROR. Try again! \n";
        }
    } while (userInput == "Exit" || is_element(userInput));
}