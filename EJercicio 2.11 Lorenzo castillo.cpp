#include <iostream>
using namespace std;

int main() {
    double a, b, x;

    // Solicitar al usuario que ingrese los coeficientes de la ecuaci�n
    cout << "Ingrese el coeficiente 'a': ";
    cin >> a;
    cout << "Ingrese el coeficiente 'b': ";
    cin >> b;

    // Solicitar al usuario que ingrese el valor de x
    cout << "Ingrese el valor de 'x': ";
    cin >> x;

    // Calcular el resultado de la ecuaci�n
    double resultado = a * x + b;

    // Mostrar el resultado
    cout << "El resultado de la ecuacion " << a << "x + " << b << " es: " << resultado << endl;

    return 0;
}

