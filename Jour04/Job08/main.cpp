#include <iostream>
#include <string>
using namespace std;

int main() {

struct mon_tab {
    int annee; 
    string ecole; 
    float pi;
    string role;
};
    mon_tab classe[4];
    classe[0].annee = 2019;
    classe[1].ecole = "La Plateforme";
    classe[2].pi = 3.14;
    classe[3].role = "Eudiants";

    
    int* p = &classe[0].annee;
    int* r = &classe[1].annee;
    int* s = &classe[2].annee;
    int* t = &classe[3].annee;
    
    cout << p << endl << *p << endl;
    cout << r << endl << *r << endl;
    cout << s << endl << *s << endl;
    cout << t << endl << *t;
    
    return 0;
}
