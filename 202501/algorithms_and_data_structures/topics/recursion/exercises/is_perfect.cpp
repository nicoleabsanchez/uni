//Desarrollar un algoritmo con recursividad, que permita identificar si un n�mero es perfecto, 
//un n�mero perfecto es un n�mero entero para el cual la suma de todos sus divisores positivos (excluy�ndose a s� mismo) 
// es igual al n�mero mismo.Por ejemplo, el n�mero 6 es perfecto, porque 1 + 2 + 3 es igual a 6.

#include <iostream>
using namespace std;

int sumDivisores(int n, int divisor) {
    if (divisor == n) {
        return 0;
    }

    if (n % divisor == 0) {
        return divisor + sumDivisores(n, divisor + 1);
    }

    return sumDivisores(n, divisor + 1);
}

bool esPerfecto(int n) {
    return sumDivisores(n, 1) == n;
}

int main() {
    int numero;

    cout << "Introduce un numero: ";
    cin >> numero;

    if (esPerfecto(numero)) {
        cout << numero << " es un numero perfecto." << endl;
    }
    else {
        cout << numero << "no es un numero perfecto." << endl;
    }

    return 0;
}
