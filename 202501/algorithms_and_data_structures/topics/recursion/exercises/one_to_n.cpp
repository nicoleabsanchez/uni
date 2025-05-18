//Desarrollar un programa que utilice una función recursiva, donde se debe ingresar un número para mostrar los números primos, 
// cumplir con el siguiente requisito. El número debe ser positivo y menor a 1000.

#include <iostream>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void mostrarPrimos(int n, int count = 0, int current = 2) {
    if (count == n) return; //Si ya se han mostrado 'n' numeros primos, salir de la recursión

    if (esPrimo(current)) {
        cout << current << endl;
        count++;
    }

    mostrarPrimos(n, count, current + 1);
}

int main() {
    int n;
    cout << "Ingresa un numero positivo y menor a 1000: ";
    cin >> n;

    while (n <= 0 || n >= 1000) {
        cout << "Por favor, ingresa un numero valido (positivo y menor a 1000): ";
        cin >> n;
    }

    cout << "Los primeros " << n << " numeros primos son: " << endl;
    mostrarPrimos(n);
    cout << endl;
    return 0;
}
