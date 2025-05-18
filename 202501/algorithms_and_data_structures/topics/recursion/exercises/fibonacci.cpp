//Desarrollar un algoritmo con recursividad, que permita mostrar lo números Fibonacci de acuerdo a un número ingresado por teclado 
// Ejemplo, 8 = 1 1 2 3 5 8 13 21

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0 || n == 1) { return 1; }

    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int cantidad;

    cout << "Introduce la cantidad de numeros Fibonacci que deseas generar: ";
    cin >> cantidad;

    cout << "\nLos primeros " << cantidad << " numeros Fibonacci son: ";

    for (int i = 0; i < cantidad; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
