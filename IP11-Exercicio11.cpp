#include <iostream>
#include <string>

using namespace std;

// Função para codificar a string
string codificarString(const string& texto) {
    string textoCodificado = texto;

    for (char& c : textoCodificado) {
        if (isalpha(c)) {
            if (c == 'Z') {
                c = 'A';
            } else if (c == 'z') {
                c = 'a';
            } else {
                c++;
            }
        }
    }

    return textoCodificado;
}

// Função para decodificar a string
string decodificarString(const string& textoCodificado) {
    string textoDecodificado = textoCodificado;

    for (char& c : textoDecodificado) {
        if (isalpha(c)) {
            if (c == 'A') {
                c = 'Z';
            } else if (c == 'a') {
                c = 'z';
            } else {
                c--;
            }
        }
    }

    return textoDecodificado;
}

int main() {
    string textoOriginal;

    cout << "Digite uma string para codificar: ";
    getline(cin, textoOriginal);

    string textoCodificado = codificarString(textoOriginal);
    string textoDecodificado = decodificarString(textoCodificado);

    cout << "Texto original: " << textoOriginal << endl;
    cout << "Texto codificado: " << textoCodificado << endl;
    cout << "Texto decodificado: " << textoDecodificado << endl;

    return 0;
}
