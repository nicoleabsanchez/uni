//Desarrollar un algoritmo con recursividad, que permita al usuario introducir una cadena de texto num�rica de m�s de 4 d�gitos 
//y sume estos d�gitos individualmente.

#include <iostream>
#include <string>
using namespace std;

int sumarDigitosCadena(const string& cadena) {
    if (cadena.empty()) { return 0; }

    int primerDigito = cadena[0] - '0';
    return primerDigito + sumarDigitosCadena(cadena.substr(1));
}

int main() {
    string entrada;

    cout << "Introduce una cadena numerica con mas de 4 caracteres: ";
    cin >> entrada;

    int suma = sumarDigitosCadena(entrada);
    cout << "\nLa suma de los digitos es: " << suma << endl;

    return 0;
}

