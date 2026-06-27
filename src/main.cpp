#include <iostream>
#include <vector>
#include <cctype>
#include "letras.h"
using namespace std;

int main() {

    vector<char> letras = {'L', 'A', ' ', 'M', 'A', 'R', 'C', 'H', 'A', ' ', 'D', 'E'};

    cout << "Original: ";
    for (size_t i = 0; i < letras.size(); ++i) {
        cout << letras[i];
    }
    cout << endl;

    cout << "Inverso: ";
    for (int i = static_cast<int>(letras.size()) - 1; i >= 0; --i) {
        cout << letras[i];
    }
    cout << endl;

    int vocalesOriginal = contarVocales(letras);
    cout << "Número de vocales: " << vocalesOriginal << endl;

    for (char &c : letras) {
        c = tolower(c);
    }

    cout << "Vector en minusculas: ";
    for (char c : letras) {
        cout << c;
    }
    cout << endl;

    vector<char> restoFrase = {' ', 'l', 'a', 's', ' ', 'l', 'e', 't', 'r', 'a', 's'};
    for (char c : restoFrase) {
        letras.push_back(c);
    }

    cout << "Vector Extendido: ";
    for (char c : letras) {
        cout << c;
    }
    cout << endl;

    int vocalesExtendido = contarVocales(letras);
    cout << "Número de vocales en el vector extendido: " << vocalesExtendido << endl;

    return 0;
}