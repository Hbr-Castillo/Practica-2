#include <iostream>
using namespace std;

int main() {
    // Inicializamos el contador
    int i = 0;
    
    // Usamos un bucle do-while para imprimir los n�meros del 0 al 10
    do {
        cout << i << " ";
        i++; // Incrementamos el contador en cada iteraci�n
    } while (i <= 10); // Continuamos mientras el contador sea menor o igual que 10
    
    cout << endl; // Agregamos un salto de l�nea al final
    
    return 0;
}

