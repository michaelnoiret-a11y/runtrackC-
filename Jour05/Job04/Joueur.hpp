#include <iostream>
#include <string>
using namespace std;

class Joueur
{
private :
    int x;
    int y;
    string nom;

public :

    Joueur(int x, int y)
    {
        x = x;
        y = y;
    }

    Joueur(int x, int y)
    {
        x = 0;
        y = 0;
    }

    // Joueur(int x, int y)
    // {
    //     x = 0;
    //     y = 0;
    // }

    Joueur(int x, int y, string nom)
    {
        x = 0;
        y = 0;
        nom = "";
    }
    
    int setx(int x)
    {
        cin >> x;
        return x;
    }

    int getx()
    {
        return x;
    }

    int sety(int y)
    {
        cin >> y;
        return y;
    }

    int gety()
    {
        return y;
    }

    string getnom()
    {
        return nom;
    }

    string setnom()
    {
        cin >> nom;
        return nom;
    }

    void afficher(int x,int y, string nom)
    {
        cout << "x vaut : " << x << endl;
        cout << "y vaut : " << y << endl;
        cout << "nom est : " << nom;
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

