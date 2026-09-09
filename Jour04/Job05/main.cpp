#include <iostream>
using namespace std;

struct Point {
    int x; 
    int y;
    
};

int main() {
    Point classe[2];
    classe[0].x = 9;
    classe[1].y = 1;
    int* z = &classe[0].x;
    int* a = &classe[1].y;
    cout << *z << endl;
    cout << *a << endl;
    *z = 10;
    *a = 2;
    cout << *z << endl;
    cout << *a << endl;
return 0;
}