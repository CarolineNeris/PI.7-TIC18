#include <iostream>
//#include <iomanip> // Para formatar a saída

using namespace std;

double calcularMedia(double nota1, double nota2, double nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int main() {
    while (true) {
        int matricula;
        double nota1, nota2, nota3;

        cout << "Digite a matrícula do aluno (apenas números): ";
        cin >> matricula;

        cout << "Digite a nota 1 do aluno: ";
        cin >> nota1;

        cout << "Digite a nota 2 do aluno: ";
        cin >> nota2;

        cout << "Digite a nota 3 do aluno: ";
        cin >> nota3;

        double media = calcularMedia(nota1, nota2, nota3);

        

        cout << "\nMATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "===================================" << endl;
        cout << matricula << "      " << nota1 << "      " << nota2 << "      " << nota3 << "      " << media << endl;

        
    }

    return 0;
}
