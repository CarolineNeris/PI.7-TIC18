#include <iostream>

using namespace std;

int main() {
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    char caractere = 'A';
    int count = 1;

    for (int i = 1; i <= altura; ++i) {
        for (int j = 1; j <= count; ++j) {
            cout << caractere;
            ++caractere;
        }

        cout << endl;
        count += 2;
    }

    return 0;
}
