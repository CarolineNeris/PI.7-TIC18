#include <iostream>
using namespace std;

void imprimirSequenciaFibonacci(int limite) {
    int primeiro = 0, segundo = 1, proximo;

    cout << "Sequência de Fibonacci até " << limite << ": ";

    while (primeiro <= limite) {
        cout << primeiro << " ";

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;
}

int main() {
    int limite;

    
    cout << "Digite um número inteiro para o limite da sequência de Fibonacci: ";
    cin >> limite;

    imprimirSequenciaFibonacci(limite);

    return 0;
}
