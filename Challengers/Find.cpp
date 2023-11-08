#include <iostream>
#include <string>
using namespace std;

void find(){
    bool T=false;
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
  for(int i=0; i<90; i++){
    if(element == FindElements[i] && T==false){
      cout << "Element: " << element << endl;
      T=true;
    }
    if(i==89 && T==false){
        cout << "Error" << endl;
        find();
    }
  }
}

int main(){
    find();
}