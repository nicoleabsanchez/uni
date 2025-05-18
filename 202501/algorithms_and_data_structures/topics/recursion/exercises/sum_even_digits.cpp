//Desarrollar un algoritmo con recursividad, que permita ingresar un número entero positivo, para encontrar la suma de los dígitos pares del número entero.
//Luego se debe mostrar / imprimir el resultado.

#include <iostream>
using namespace std;

int sumarDigitosPares(int n) {
    if (n == 0) { return 0; }

    int ultimoDigito = n % 10;

    if (ultimoDigito % 2 == 0) {
        return ultimoDigito + sumarDigitosPares(n / 10);
    }

    return sumarDigitosPares(n / 10);
}

int main() {
    int numero;

    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    int resultado = sumarDigitosPares(numero);

    cout << "La suma de los digitos pares es: " << resultado << endl;

    return 0;
}
