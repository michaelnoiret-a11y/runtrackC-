#include <iostream>
#include <string>
using namespace std;

class Contact
{
private :
    string nom;
    int numeroTel;
    

public :

    Contact::Contact(string nom, int numero);
    : nom("Kami Ternoi"), numeroTel(0000000003)
    Contact(const Contact&) (string nom, int numero)
    nom("Sixela Ternoi"), numeroTel(0000000002)
    Contact(const Contact&) (string nom, int numero)
    nom("Ellebasi Rial"), numeroTel(0000000001)
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

    int setTelNum(int numeroTel)
    {
        cin >> numeroTel;
        return numeroTel;
    }

    int getTelNum()
    {
        return numeroTel;
    }

    void afficher(string nom, int numeroTel)
    {
        cout << "nom vaut : " << nom << endl;
        cout << "numéro de télèphone vaut : " << numeroTel << endl;
    }

int main()
{
    return 0;
}
};