#include <iostream>
#include <string>
using namespace std;

class Joueur
{
private :
    int x;
    int y;

public :

    Joueur(int x, int y)
    {
        x = x;
        y = y;
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

    void afficher(int x,int y)
    {
        cout << "x vaut : " << x << endl;
        cout << "y vaut : " << y << endl;
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

