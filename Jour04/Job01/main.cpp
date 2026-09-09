#include <iostream>
using namespace std;

int main() {
    int number = 2019;
    int* number2 = &number;
    cout << *number2;
    return 0;
}