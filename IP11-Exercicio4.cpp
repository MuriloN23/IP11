#include <iostream>

using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    X = soma;
    Y = subtracao;
}

int main() {
    int X, Y;

    cout << "Digite o valor de X: ";
    cin >> X;
    cout << "Digite o valor de Y: ";
    cin >> Y;

    calcula(X, Y);

    cout << "Depois da operação, X = " << X << " e Y = " << Y << endl;

    return 0;
}
