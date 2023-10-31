#include <iostream>

using namespace std;

int* encontra_posicoes(const string& str, char letra, int& tamanho) {
    int* posicoes = nullptr;
    tamanho = 0;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            int* novo_vetor = new int[tamanho + 1];
            for (int j = 0; j < tamanho; j++) {
                novo_vetor[j] = posicoes[j];
            }
            novo_vetor[tamanho] = i;
            tamanho++;
            delete[] posicoes;
            posicoes = novo_vetor;
        }
    }

    return posicoes;
}

int main() {
    string texto;
    char letra;

    cout << "Digite uma string de caracteres: ";
    cin >> texto;

    cout << "Digite uma letra para encontrar: ";
    cin >> letra;

    int tamanho;
    int* posicoes = encontra_posicoes(texto, letra, tamanho);

    if (tamanho > 0) {
        cout << "A letra '" << letra << "' foi encontrada nas posições: ";
        for (int i = 0; i < tamanho; i++) {
            cout << posicoes[i] << " ";
        }
        cout << endl;
    } else {
        cout << "A letra '" << letra << "' não foi encontrada na string." << endl;
    }

    delete[] posicoes;

    return 0;
}
