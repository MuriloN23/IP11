#include <iostream>

using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; i++) {
        vet[i] *= n; // Multiplica cada elemento pelo multiplicador
    }
}

int main() {
    int qtde, n;

    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> qtde;

    int vetor[qtde];

    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < qtde; i++) {
        cin >> vetor[i];
    }

    cout << "Digite o multiplicador: ";
    cin >> n;

    multiplica_por_n(vetor, qtde, n);

    cout << "Vetor após a multiplicação por " << n << ": ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
