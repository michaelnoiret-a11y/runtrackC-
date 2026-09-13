#include <iostream>
#include <string>
#include "Etudiant.hpp"
using namespace std;

int main()
{
    Etudiant et1("", "", 0, 0);
    et1.afficher("", "", 0, 0);
    et1.setn("Noiret");
    cout << et1.getn() << endl;
    cout << et1.getp() << endl;
    et1.setp("Mika");
    cout << et1.geta() << endl;
    et1.seta(31);
    et1.setm(002);
    cout << et1.getm() << endl;
    et1.seta(31);
    
return 0;
}