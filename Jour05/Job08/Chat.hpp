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

    void manger() override
    {
        "Le chat mange du poisson.";
    }

};