//Desarrollar un algoritmo con recursividad, donde permita ingresar un número mayor a 3 dígitos y realizar la multiplicación de estos dígitos.

#include <iostream>
using namespace std;

int multiplicarDigitos(int n) {
    if (n < 10) { return n; }

    return (n % 10) * multiplicarDigitos(n / 10);
}

int main() {
    int numero;

    cout << "Introduce un numero con mas de 3 digitos: ";
    cin >> numero;

    int resultado = multiplicarDigitos(numero);
    cout << "\nEl resultado de la multiplicacion de los digitos es: " << resultado << endl;
    return 0;
}
