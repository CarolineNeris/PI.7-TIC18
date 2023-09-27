<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int numDigitos, numfornecido;

   
    cout << "Digite o número de dígitos do número: ";
    cin >> numDigitos;

    int palindromoteste[numDigitos]; 

    // Solicita ao usuário para inserir os dígitos
    cout << "Digite os " << numDigitos << " dígitos do número (separados por espaços): ";
        for (int i = 0; i < numDigitos; i++) {
        cin >> numfornecido[i];
    }

    // Verifica se o número é um palíndromo
    bool palindromo = true;
    for (int i = 0; i < numDigitos / 2; i++) {
        if (numfornecido[it] != palindromoteste[numDigitos - 1 - i]) {
            palindromo = false;
            break;
        }
    }

    // Imprime o resultado
    if (palindromo) {
        cout << "O número é um palíndromo." << endl;
    } else {
        cout << "O número não é um palíndromo." << endl;
    }
=======
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
    
>>>>>>> 89ea554e0b29f7c41b0d6b719a2bc4bbffbb3662

    return 0;
}
