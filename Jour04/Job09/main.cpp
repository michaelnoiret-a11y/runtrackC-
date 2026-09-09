#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int>nombres;
    int taille;
    int valeurs;

    if (taille != valeurs) {
    cout << "Entrez la taille du vecteur : ";
    cin >> taille;
    cout << taille;
    cout << "Entrez le nombres d'entiers défini par la taille du vecteur";
    cin >> valeurs;
    nombres.push_back(valeurs);
    } else {
    for (int i = 0; i < nombres.size(); i++) {
        cout << nombres[i] << " ";
    }

    return 0;
}
}