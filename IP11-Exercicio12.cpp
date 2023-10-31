#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string caracteresComuns(const string& A, const string& B) {
    string C;

    for (char c : A) {
        if (B.find(c) != string::npos && C.find(c) == string::npos) {
            C += c;
        }
    }

    return C;
}

int main() {
    string stringA, stringB;

    cout << "Digite a primeira string: ";
    cin >> stringA;
    cin.ignore();

    cout << "Digite a segunda string: ";
    getline(cin, stringB);

    string resultado = caracteresComuns(stringA, stringB);

    if (resultado.empty()) {
        cout << "Não há caracteres comuns nas duas strings." << endl;
    } else {
        cout << "Caracteres comuns: " << resultado << endl;
    }

    return 0;
}
