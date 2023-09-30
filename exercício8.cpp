#include <iostream>
using namespace std;

void padrao1(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void padrao2(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void padrao3(int altura) {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == altura - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int altura;

    // Obter a entrada do usuário para a altura
    cout << "Digite a altura do padrão: ";
    cin >> altura;

    cout << "Padrão 1:" << endl;
    padrao1(altura);

    cout << "\nPadrão 2:" << endl;
    padrao2(altura);

    cout << "\nPadrão 3:" << endl;
    padrao3(altura);

    return 0;
}
