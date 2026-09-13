#include <iostream>
#include <string>
#include "Personne.hpp"
using namespace std;

int main()
{
    Personne p1("", 0, 0);
    p1.afficher("", 0, 0);
    p1.setn("Mage");
    cout << p1.getn() << endl;
    p1.setpDV(80);
    cout << p1.getpDV() << endl;
    p1.setdef(10);
    cout << p1.getdef() << endl;
    Personne p2("", 0, 0);
    p2.afficher("", 0, 0);
    p2.setn("Guerrier");
    cout << p1.getn() << endl;
    p1.setpDV(100);
    cout << p1.getpDV() << endl;
    p1.setdef(20);
    cout << p1.getdef() << endl;
    p2.setn("Voleur");
    cout << p1.getn() << endl;
    p1.setpDV(90);
    cout << p1.getpDV() << endl;
    p1.setdef(15);
    cout << p1.getdef() << endl;
    
return 0;
}