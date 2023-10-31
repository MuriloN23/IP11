#include <iostream>

using namespace std;

void ordenarCrescente(float &a, float &b, float &c, float &d) {
    float temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Digite quatro números float: ";
    cin >> num1 >> num2 >> num3 >> num4;

    ordenarCrescente(num1, num2, num3, num4);

    cout << "Números em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
