//Escreva um programa em C++ que imprima todos os números
//primos de 1 a 100.

#include <iostream>

using namespace std;

int main() {
    for (int it = 0; it <= 100; it++) {
        
        int contadorDivisores = 0;
        for (int i = 1; i <= it; i++) {
            if (it % i == 0 ) {
              contadorDivisores++;
            }
        }

        if (contadorDivisores ==2) {
            cout << it << "é primo" << endl;
        }
        
        
    }

    return 0;
}
