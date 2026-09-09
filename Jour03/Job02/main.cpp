#include <iostream>
#include <cctype> // std::transform() de <algorithm>
#include <string>

void supprimerVoyelleTableau(std::string chaine1, int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << chaine1[i] << std::endl;
    }
}

int main() {
std::string chaine1[] = {"vive la plateforme !"};
std::string voyelle[] = {"a", "e", "i", "o", "u"};
int taille = 20;
afficherTableau(chaine1[], taille);
if (voyelle[] in chaine1[]) {
    delete chaine1.voyelle;
}

return 0;
}