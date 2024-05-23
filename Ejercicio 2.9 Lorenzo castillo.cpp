#include <iostream>
using namespace std;

int main() {
    int numero;
    unsigned long long factorial = 1; // Usamos unsigned long long para manejar números grandes

    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;

    // Verificar si el número es negativo
    if (numero < 0) {
        cout << "Error: El factorial no está definido para números negativos." << endl;
        return 1; // Salir del programa con un código de error
    }

    // Calcular el factorial usando un bucle for
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}

