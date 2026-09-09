#include <iostream>
using namespace std;

int main() 
{
int add(int a, char operateur, int b) {
    
    cout << "insérer deux valeurs";
    cin >> a, operateur, b;
    if (operateur == "+")
    {
    cout << a, operateur, b;
    return a + b;
    }
}
return 0


int sub(int a, int b) {

    cout << "insérer deux valeurs";
     cin >> a, operateur, b;
    if (operateur == "-")
    {
    cout << a, operateur, b;
    return a - b;

return 0;
}
}

int mul(int a, int b) {

    cout << "insérer deux valeurs";
     cin >> a, operateur, b;
    if (operateur == "*")
    {
    cout << a, operateur, b;
    return a * b;

return 0;
}
}

int div(int a, int b) {

    cout << "insérer deux valeurs";
    if (operateur == "/")
    {
        cin >> a, operateur, b;
        cout << a, operateur, b;
    return a / b;

return 0;
}
}
}