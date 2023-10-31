#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }

    if (num <= 3) {
        return true;
    }

    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;

    for (int i = 0; i < qtde; i++) {
        if (eh_primo(vet[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    int qtde;

    cout << "Digite a quantidade de elementos do vetor: ";
    cin >> qtde;

    int vetor[qtde];

    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < qtde; i++) {
        cin >> vetor[i];
    }

    int primos = conta_primos(vetor, qtde);

    cout << "Quantidade de números primos no vetor: " << primos << endl;

    return 0;
}
