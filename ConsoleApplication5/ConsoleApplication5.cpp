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
string FindElements[90] = {
      "H","He",
      "Li","Be","B","C","N","O","F","Ne",
      "Na","Mg","Al","Si","P","S","Cl","Ar",
      "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
      "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te"," I","Xe",
      "Cs","Ba","La","Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn",
      "Fr","Ra","Ac","Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn","Nh","Fl","Mc","Lv","Ts","Og"
};


int find_output()
{
    for (int i = 0; i < 90; i++)
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
        cout << "3. " << endl << endl;

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
        cout << "3. " << endl << endl;

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
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. Energy Consumption: Neon lighting, while visually appealing, is not energy-efficient. Neon signs can consume more electricity compared to modern LED alternatives. Higher energy consumption can lead to increased operating costs for businesses that use neon lighting." << endl << endl;
        cout << "2. Environmental Impact: Neon gas itself is inert and non-toxic, but the manufacturing of neon signs and lights may involve other potentially hazardous materials and processes. Proper disposal and recycling of old neon signs and lights are necessary to minimize environmental impact." << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 11:
        SetConsoleTextAttribute(hc, 7);
        cout << "Sodium (Na):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. Chemical Industry: Sodium and its compounds have various applications in the chemical industry. For example, sodium hydroxide (caustic soda) is used in the production of soaps, detergents, and various chemicals, contributing to economic activity in this sector." << endl << endl;
        cout << "2. Metallurgy: Sodium can be used as a reducing agent in the extraction of certain metals, such as titanium and zirconium. It plays a role in the metallurgical industry, aiding in the production of metals and alloys." << endl << endl;
        cout << "3. " << endl << endl;

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
        cout << "3. " << endl << endl;

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
        cout << "3. " << endl << endl;

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
        cout << "3. " << endl << endl;

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
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 27:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cobalt (Co):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 28:
        SetConsoleTextAttribute(hc, 7);
        cout << "Nickel (Ni):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 29:
        SetConsoleTextAttribute(hc, 7);
        cout << "Copper (Cu):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 30:
        SetConsoleTextAttribute(hc, 7);
        cout << "Zinc (Zn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 31:
        SetConsoleTextAttribute(hc, 7);
        cout << "Gallium (Ga):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 32:
        SetConsoleTextAttribute(hc, 7);
        cout << "Germanium (Ge):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 33:
        SetConsoleTextAttribute(hc, 7);
        cout << "Arsenic (As):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 34:
        SetConsoleTextAttribute(hc, 7);
        cout << "Selenium (Se):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 35:
        SetConsoleTextAttribute(hc, 7);
        cout << "Bromine (Br):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 36:
        SetConsoleTextAttribute(hc, 7);
        cout << "Krypton (Kr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 37:
        SetConsoleTextAttribute(hc, 7);
        cout << "Rubidium (Rb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 38:
        SetConsoleTextAttribute(hc, 7);
        cout << "Strontium (Sr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 39:
        SetConsoleTextAttribute(hc, 7);
        cout << "Yttrium (Y):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 40:
        SetConsoleTextAttribute(hc, 7);
        cout << "Zirconium (Zr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 41:
        SetConsoleTextAttribute(hc, 7);
        cout << "Niobium (Nb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 42:
        SetConsoleTextAttribute(hc, 7);
        cout << "Molybdenum (Mo):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 43:
        SetConsoleTextAttribute(hc, 7);
        cout << "Technetium (Tc):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 44:
        SetConsoleTextAttribute(hc, 7);
        cout << "Ruthenium (Ru):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 45:
        SetConsoleTextAttribute(hc, 7);
        cout << "Rhodium (Rh):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 46:
        SetConsoleTextAttribute(hc, 7);
        cout << "Palladium (Pd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 47:
        SetConsoleTextAttribute(hc, 7);
        cout << "Silver (Ag):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 48:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cadmium (Cd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 49:
        SetConsoleTextAttribute(hc, 7);
        cout << "Indium (In):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 50:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tin (Sn):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 51:
        SetConsoleTextAttribute(hc, 7);
        cout << "Antimony (Sb):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 52:
        SetConsoleTextAttribute(hc, 7);
        cout << "Tellurium (Te):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 53:
        SetConsoleTextAttribute(hc, 7);
        cout << "Iodine (I):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 54:
        SetConsoleTextAttribute(hc, 7);
        cout << "Xenon (Xe):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 55:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cesium (Cs):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 56:
        SetConsoleTextAttribute(hc, 7);
        cout << "Barium (Ba):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 57:
        SetConsoleTextAttribute(hc, 7);
        cout << "Lanthanum (La):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 58:
        SetConsoleTextAttribute(hc, 7);
        cout << "Cerium (Ce):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 59:
        SetConsoleTextAttribute(hc, 7);
        cout << "Praseodymium (Pr):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;

    case 60:
        SetConsoleTextAttribute(hc, 7);
        cout << "Neodymium (Nd):" << endl << endl;

        SetConsoleTextAttribute(hc, 2);
        cout << "Positive aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;

        SetConsoleTextAttribute(hc, 7);
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;

        SetConsoleTextAttribute(hc, 4);
        cout << "Negative aspects:" << endl << endl;
        cout << "1. " << endl << endl;
        cout << "2. " << endl << endl;
        cout << "3. " << endl << endl;
        SetConsoleTextAttribute(hc, 7);
        break;
    }
}
        