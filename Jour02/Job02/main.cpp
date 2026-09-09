#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    switch(n)
    {                              "affiche erreur ou rien ou alors Nul"
        case 0 : cout << "Nul\n"; "n = 0, affiche Nul"
        case 1 : "n = 1, affiche rien"
        case 2 : cout << "Petit\n";
                        break;
        case 3 :
        case 4 : "n = 4, affiche rien"
        case 5 : cout << "Moyen\n";
        default : cout << "Grand\n"; "n = 10"          
    }


return 0;
}