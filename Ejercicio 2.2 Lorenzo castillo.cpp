#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int numero, limite;

    // Solicitar al usuario que ingrese el número y el límite de multiplicación
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Ingrese el limite de multiplicacion: ";
    cin >> limite;

    // Imprimir la tabla de multiplicar del número hasta el límite especificado
    cout << "Tabla de multiplicar del " << numero << " hasta " << limite << ":" << endl;
    for (int i = 1; i <= limite; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}

