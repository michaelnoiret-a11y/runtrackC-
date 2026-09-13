#include <iostream>
#include <string>
#include "Contact.hpp"
#include "Animal.hpp"
#include "Chien.hpp"
#include "Chat.hpp"
using namespace std;

int main()
{
    Chien ch1();
    ch1.crier();
    ch1.manger();

    Chat ch2();
    ch2.crier();
    ch2.manger(repas);
    
return 0;
}