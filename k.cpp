#include <iostream>

int main() {
    int altura;

    // Solicite ao usuário a altura do padrão
    std::cout << "Digite a altura do padrão: ";
    std::cin >> altura;

    if (altura < 1) {
        std::cout << "A altura deve ser maior ou igual a 1." << std::endl;
        return 1;  // Saia do programa com um código de erro
    }

    std::cout << "Padrão a:" << std::endl;
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < altura; j++) {
            std::cout << "* ";
        }
        std::cout;
    }

    std::cout << "Padrão b:" << std::endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout;
    }

    std::cout << "Padrão c:" << std::endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            if (i == 1 || i == altura || j == 1 || j == altura) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        std::cout <<;
    }

    return 0;
}
