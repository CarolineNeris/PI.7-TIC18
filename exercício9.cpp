#include <iostream>
using namespace std;

bool ehNumeroPerfeito(int numero) {
    int somaDivisores = 0;

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    return somaDivisores == numero;
}

int main() {
    int numero;

    // Obter entrada do usuário
    cout << "Digite um número inteiro: ";
    cin >> numero;

    // Verificar se o número é perfeito e exibir o resultado
    if (ehNumeroPerfeito(numero)) {
        cout << numero << " é um número perfeito." << endl;
    } else {
        cout << numero << " não é um número perfeito." << endl;
    }

    return 0;
}
