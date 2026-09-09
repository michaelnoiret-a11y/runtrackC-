#include <iostream>
using namespace std;

int main() {
    int chaine1 = 21, chaine3 = 17, chaine5 = 04;
    int* chaine2 = &chaine1; int* chaine6 = &chaine3; int* chaine10 = &chaine5;
    cout <<  *chaine2 << endl;
    cout <<  *chaine6 << endl;
    cout <<  *chaine10 << endl;
    *chaine2 = 22, *chaine6 = 18, *chaine10 = 05;
    cout << *chaine2 << endl;
    cout << *chaine6 << endl; 
    cout << *chaine10 << endl;
    return 0;
}