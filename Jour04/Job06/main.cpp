#include <iostream>
using namespace std;

struct Point {
    int m_integer; 
    float m_float;
    double m_double;
    string m_character;
    
};

int main() {

    Point classe[4];
    classe[0].m_integer = 17;
    classe[1].m_float = 3.14;
    classe[2].m_double = 123.345;
    classe[3].m_character = "La Plateforme";
    int* m_int = &classe[0].m_integer;
    float* m_float = &classe[1].m_float;
    double* m_double = &classe[2].m_double;
    string* m_character = &classe[3].m_character;
    cout << m_int << endl;
    cout << m_float << endl;
    cout << m_double << endl;
    cout << m_character << endl;
    cout << *m_int << endl;
    cout << *m_float << endl;
    cout << *m_double << endl;
    cout << *m_character << endl;
    return 0;
}