// #include <iostream>
// using namespace std;
// Prototypes
// Variables globales
//int main()
// {
// return 0;
// }
// Fonctions"

// int main() {
//     const char* path = std::getenv("PATH"); // Récupère la variable PATH
//     if (path) {
//          std::cout << "PATH = " << path << "\n";
//     } else {
//         std::cout << "La variable PATH n'est pas définie.\n";
//     }
//     return 0;
// }

// #include <iostream>
// #include <cstdlib> // setenv / _putenv_s
// #ifdef _WIN32
// #include <windows.h>
// #endif

// int main() {
// #ifdef _WIN32
//     // Windows : _putenv_s modifie la variable pour le processus courant
//     if (_putenv_s("PATH", "C:\\MonDossier;C:\\Windows\\System32") == 0) {
//         std::cout << "PATH modifié temporairement (Windows)\n";
//     } else {
//         std::cerr << "Erreur lors de la modification du PATH\n";
//     }
// #else
//     // Linux / macOS : setenv
//     if (setenv("PATH", "/usr/local/bin:/usr/bin:/bin", 1) == 0) {
//         std::cout << "PATH modifié temporairement (Unix)\n";
//     } else {
//         perror("Erreur setenv");
//     }
// #endif

//     // Vérification
//     const char* path = std::getenv("PATH");
//     std::cout << "Nouveau PATH = " << (path ? path : "(non défini)") << "\n";

//     return 0;
// }

#include <iostream>
#include <cstdlib> // getenv
using namespace std;
int a; 
int b; 
int c; 
int d; 
int i; 
int n;
int p;
int x;
int y;

int main()
{
a = (x + 5);
a = (x=y) + 2;
a = (x==y);
(a<b) && (c<d);
(i++) * (n+p);

return 0;
}
