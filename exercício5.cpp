/*Escreva um programa em C++ que simule um jogo de adivinhação. O programa deve
gerar um número aleatório entre 1 e 100, e o usuário deve tentar adivinhar esse
número. O jogo deve informar se o palpite está alto, baixo ou correto, e continuar até
que o usuário acerte o número.*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed para a geração de números aleatórios
    srand(static_cast<unsigned int>(time(0)));

    // Gera um número aleatório entre 1 e 100
    int numeroSecreto = rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao Jogo de Adivinhação!\n";
    cout << "Tente adivinhar o número entre 1 e 100.\n\n";

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;

        // Verifica se o palpite está alto, baixo ou correto
        if (palpite > numeroSecreto) {
            cout << "Palpite muito alto. Tente novamente.\n";
        } else if (palpite < numeroSecreto) {
            cout << "Palpite muito baixo. Tente novamente.\n";
        } else {
            cout << "Parabéns! Você acertou o número em " << tentativas + 1 << " tentativa(s)!\n";
        }

        tentativas++;

    } while (palpite != numeroSecreto);

    return 0;
}

