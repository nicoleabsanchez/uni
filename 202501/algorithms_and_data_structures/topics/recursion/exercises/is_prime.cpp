//Desarrollar un algoritmo con recursividad, que permita mostrar si un número es primo.Ejemplo, 7 es primo.
//Solo necesitamos comprobar divisores hasta la raíz cuadrada de n, porque si un número n tiene un divisor mayor que su raíz cuadrada, 
//también tendrá uno menor que ella.Esto reduce el número de divisores que necesitamos verificar.

#include <iostream>
#include <cmath>
using namespace std;

bool esPrimo(int n, int divisor) {
    if (divisor > sqrt(n)) {
        return true;
    }

    if (n % divisor == 0) {
        return false;
    }

    return esPrimo(n, divisor + 1);
}

bool verificarPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    return esPrimo(n, 2);
}

int main() {
    int numero;

    cout << "Introduce un numero: ";
    cin >> numero;

    if (verificarPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    }
    else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}
