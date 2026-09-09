#include <iostream>
#include <string>
#include "Joueur.hpp"
using namespace std;

int main()
{
    Joueur j1(0, 0);
    j1.afficher(0, 0);
    cout << j1.getx() << endl;
    j1.setx(+1);
    cout << j1.gety() << endl;
    j1.sety(1);
    // j1.deplacer(x, y);
    j1.afficher(1, 1);

return 0;
}