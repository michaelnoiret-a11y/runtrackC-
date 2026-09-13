#include <iostream>
#include <string>
using namespace std;

class Personne
{
private :
    string nom;
    int pDV;
    float defense;

public :

    Personne::Personne(string nom, int pDV, float defense)
    : nom("Kuzu"), pDV(100), defense(10.00)
    { 
    }
    
    string setn(string nom)
    {
        cin >> nom;
        return nom;
    }

    string getn()
    {
        return nom;
    }

    int setpDV(int pDV)
    {
        cin >> pDV;
        return pDV;
    }

    int getpDV()
    {
        return pDV;
    }

    float setdef(float defense)
    {
        cin >> defense;
        return defense;
    }

    float getdef()
    {
        return defense;
    }

    void afficher(string nom, int pDV, float defense)
    {
        cout << "nom vaut : " << nom << endl;
        cout << "point de vie vaut : " << pDV << endl;
        cout << "defense vaut : " << defense << endl;
    }

int main()
{
    return 0;
}
};