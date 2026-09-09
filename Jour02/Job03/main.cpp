#include <iostream>
using namespace std;

int main() {
    int i, n, sum;
    
    sum = 0;
    while (i < 4) {
        cout << "Donnez un entier : ";
        cin >> n;
        sum += n;
    }

    cout << "Somme : " << sum;

return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i, n, sum;
    
    sum = 0;
    do {
        cout << "Donnez un entier : ";
        cin >> n;
        sum += n;
    } while (i < 4) {
        cout << "Somme : " << sum;
    }
   
    

return 0;
}

