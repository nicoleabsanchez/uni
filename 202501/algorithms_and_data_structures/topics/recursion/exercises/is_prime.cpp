//Desarrollar un algoritmo con recursividad, que permita mostrar si un n�mero es primo.Ejemplo, 7 es primo.
//Solo necesitamos comprobar divisores hasta la ra�z cuadrada de n, porque si un n�mero n tiene un divisor mayor que su ra�z cuadrada, 
//tambi�n tendr� uno menor que ella.Esto reduce el n�mero de divisores que necesitamos verificar.

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
