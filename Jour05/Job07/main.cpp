#include <iostream>
#include <string>
#include "Contact.hpp"
using namespace std;

int main()
{
    Contact c1("", 0);
    c1.afficher("", 0);
    c1.setn("Mika Noiret");
    cout << c1.getn() << endl;
    c1.setTelNum(0000000003);
    cout << c1.getTelNum() << endl;

    Contact c2("", 0);
    c2.afficher("", 0);
    c2.setn("Alexis Noiret");
    cout << c2.getn() << endl;
    c2.setTelNum(0000000002);
    cout << c2.getTelNum() << endl;

    Contact c3("", 0);
    c3.afficher("", 0);
    c3.setn("Ellebasi Rial");
    cout << c3.getn() << endl;
    c3.setTelNum(0000000001);
    cout << c3.getTelNum() << endl;
    
return 0;
}