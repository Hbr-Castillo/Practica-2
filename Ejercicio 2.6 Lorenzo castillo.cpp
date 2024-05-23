#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese el número
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }

    return 0;
}

