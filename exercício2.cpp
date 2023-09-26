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

    return 0;
}
