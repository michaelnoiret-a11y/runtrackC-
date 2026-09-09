#include <iostream>
using namespace std;

int main() {
    int num1 = 30;
    int num2 = 37;
    int* num3 = &num1;
    int* num4 = &num2;
*num3 = 37;
*num4 = 30;
cout << *num3;
return 0;
}