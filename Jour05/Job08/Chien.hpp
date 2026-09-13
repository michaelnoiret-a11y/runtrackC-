#include <iostream>
#include <string>
#include "Chat.hpp"

using namespace std;

class Chien : public Animal
{
public :
    void crier() override
    {
        cout << "Wouf!" << endl;
    }

    void manger() override
    {
        "Le chien a une alimentation variée.";
    }

};