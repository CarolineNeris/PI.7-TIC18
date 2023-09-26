/*Escreva um programa em C++ que leia um número inteiro e verifique se ele é um
palíndromo. Um número é palíndromo se ele permanece o mesmo quando seus
dígitos são invertidos*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero, palidromo, n;
    cout << "Forneça o número separado por espaço: " << endl;
    cin >> numero;
    palidromo = numero;

    for (int i = palidromo.length() -1; i>=0; i--) {
        n = palidromo[i];
        cout << n;
        
    }

    if (numero == n) {
        cout << "\nEsse número é um palíndromo" << endl;
        }
        else {
        cout << "\nEsse numero não é um palindromo.";
        }
    

    return 0;
}
