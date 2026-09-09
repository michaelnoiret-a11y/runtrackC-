#include <iostream>
#include <string>
using namespace std;

string inverserString(string chaine1) {
    cout << "Entrez une chaine de caractères : " ;
    cin >> chaine1;
    for (int i = 0; i < chaine1.size(); i++) {
        cout << chaine1[i];
        string chaine2 = &chaine1[-1];
        cout << "Chaine inversee : ", chaine2 ;
    }
}

int main() {
   inverserString(chaine1);
    return 0;
}