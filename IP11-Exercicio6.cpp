#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamResultado = tam1 + tam2;
    int *resultado = new int[tamResultado];

    int index1 = 0, index2 = 0, indexResultado = 0;

    while (index1 < tam1 && index2 < tam2) {
        resultado[indexResultado++] = vet1[index1++];
        resultado[indexResultado++] = vet2[index2++];
    }

    while (index1 < tam1) {
        resultado[indexResultado++] = vet1[index1++];
    }

    while (index2 < tam2) {
        resultado[indexResultado++] = vet2[index2++];
    }

    return resultado;
}

int main() {
    int tam1, tam2;

    cout << "Digite o tamanho do primeiro vetor: ";
    cin >> tam1;

    int vetor1[tam1];

    cout << "Digite os elementos do primeiro vetor: ";
    for (int i = 0; i < tam1; i++) {
        cin >> vetor1[i];
    }

    cout << "Digite o tamanho do segundo vetor: ";
    cin >> tam2;

    int vetor2[tam2];

    cout << "Digite os elementos do segundo vetor: ";
    for (int i = 0; i < tam2; i++) {
        cin >> vetor2[i];
    }

    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    int tamResultado = tam1 + tam2;

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tamResultado; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;

    return 0;
}
