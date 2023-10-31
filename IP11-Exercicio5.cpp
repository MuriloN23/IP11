#include <iostream>

using namespace std;

int insere_meio(int vetor[], int &qtde, int elemento, int tamanho) {

    if (qtde >= tamanho) {
        cout << "O vetor está cheio. Não é possível inserir mais elementos." << endl;
        return qtde;
    }

    int meio = qtde / 2;

    for (int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }
    vetor[meio] = elemento;
    qtde++;

    return qtde;
}

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    int elemento = 100;

    cout << "Vetor original: ";
    for (int i = 0; i < qtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int novoQtde = insere_meio(vetor, qtde, elemento, sizeof(vetor) / sizeof(vetor[0]));

    cout << "Vetor após a inserção: ";
    for (int i = 0; i < novoQtde; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
