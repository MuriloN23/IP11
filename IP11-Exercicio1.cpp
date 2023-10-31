#include <iostream>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        maximo = 0;
        minimo = 0;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    cout << "Digite o tamanho do vetor: "<< endl ;
    cin >> n;

    int vetor[n];

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int maximo, minimo;
    maxmin(vetor, n, maximo, minimo);

    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}
