#include <iostream>
#include <cctype> // std::transform() de <algorithm>
#include <string>

void afficherTableau(std::string chaine1, int taille) {
    for (int i = 0; i < taille; i++) {
        std::cout << chaine1[i] << std::endl;
    }
}

int main() {
std::string chaine1[] = {"vive la plateforme !"};
int taille = 22;
afficherTableau(chaine1[], taille)
chaine1[] = std::toupper(chaine1[i]);

return 0;
}