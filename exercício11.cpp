#include <iostream>
#include <cmath>
using namespace std;

int contarDigitos(int numero) {
    int contador = 0;

    while (numero != 0) {
        numero /= 10;
        contador++;
    }

    return contador;
}

bool ehNumeroArmstrong(int numero) {
    int original = numero;
    int soma = 0;
    int numDigitos = contarDigitos(numero);

    while (numero != 0) {
        int digito = numero % 10;
        soma += pow(digito, numDigitos);
        numero /= 10;
    }

    return soma == original;
}

int main() {
    int numero;

    // Obter entrada do usuário
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verificar se o número é um número de Armstrong e exibir o resultado
    if (ehNumeroArmstrong(numero)) {
        cout << numero << " é um número de Armstrong." << endl;
    } else {
        cout << numero << " não é um número de Armstrong." << endl;
    }

    return 0;
}
