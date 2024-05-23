#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables
    int numero, limite;

    // Solicitar al usuario que ingrese el n�mero y el l�mite de multiplicaci�n
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Ingrese el limite de multiplicacion: ";
    cin >> limite;

    // Imprimir la tabla de multiplicar del n�mero hasta el l�mite especificado
    cout << "Tabla de multiplicar del " << numero << " hasta " << limite << ":" << endl;
    for (int i = 1; i <= limite; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}

