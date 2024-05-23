#include <iostream>
using namespace std;

int main() {
    // Variables para los coeficientes de la ecuación cuadrática y el valor de x
    double a, b, c, x;

    // Solicitar al usuario que ingrese los valores de los coeficientes y x
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;
    cout << "Ingrese el valor de x: ";
    cin >> x;

    // Calcular el resultado de la ecuación cuadrática
    double resultado = a * x * x + b * x + c;

    // Mostrar el resultado
    cout << "El resultado de la ecuacion cuadratica es: " << resultado << endl;

    return 0;
}

