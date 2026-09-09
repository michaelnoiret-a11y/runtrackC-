#include <iostream>
#include <cctype> // std::transform() de <algorithm>
#include <string>

void comparaisonTableau(std::string chaine1, int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << chaine1[i] << std::endl;
    }
}

int main() {
std::string chaine1[] = {"vive la plateforme !"};
std::string voyelle[] = {"a", "e", "i", "o", "u"};
int taille = 20;
int taille2 = 5;
comparaisonTableau(chaine1[], taille);
if (voyelle[] == chaine1[]) {
    return 0;
}
else {
    return 1;
}    
}