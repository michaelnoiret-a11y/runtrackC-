#include <iostream>
using namespace std;



int main() {
    int mon_tab[] = {21, 17, 04};
    int *p  = mon_tab;
    cout << p << endl; 
    cout << *p << endl;
    cout << (p+1) << endl;
    cout << (*p+1) << endl;
    cout << (p+2) << endl;
    cout << (*p+2) << endl;
    return 0;
}