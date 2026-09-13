#include <iostream>
#include <string>

using namespace std;

class Chat : public Animal
{
public :
    void crier() override
    {
        cout << "Miaou!" << endl;
    }

    void manger(string repas) override
    {
        "Le chat mange :";
        repas = "des croquettes";
        cout << repas << endl;
        return
    }

};