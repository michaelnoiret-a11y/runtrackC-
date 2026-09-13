#include <iostream>
#include <string>
using namespace std;

class Etudiant
{
private :
    string nom;
    string prenom;
    int age;
    int matricule;

public :

    Etudiant::Etudiant(string nom, string prenom, int age, int matricule)
    : nom("Ternoi"), prenom("Kami"), age(30), matricule(000)
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

    string setp(string prenom)
    {
        cin >> prenom;
        return prenom;
    }

    string getp()
    {
        return prenom;
    }

    string setp(string prenom)
    {
        cin >> prenom;
        return prenom;
    }

    int geta()
    {
        return age;
    }

    int seta(int age)
    {
        cin >> age;
        return age;
    }

    int setm()
    {
        cin >> matricule;
        return matricule;
    }
    
    int getm()
    {
        return matricule;
    }

    void afficher(string nom, string prenom, int age, int matricule)
    {
        cout << "nom vaut : " << nom << endl;
        cout << "prenom vaut : " << prenom << endl;
        cout << "age vaut : " << age << endl;
        cout << "matricule vaut : " << matricule << endl;
        
    }

    // int deplacer(int x, int y)
    // {
    //     setx(x++);
    //     sety(y++);
    // }

int main()
{

    return 0;
}
};
