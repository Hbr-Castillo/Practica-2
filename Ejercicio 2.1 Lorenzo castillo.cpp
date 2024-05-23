#include <iostream>
using namespace std;

int main() {
    // Inicializamos el contador
    int i = 0;
    
    // Usamos un bucle do-while para imprimir los números del 0 al 10
    do {
        cout << i << " ";
        i++; // Incrementamos el contador en cada iteración
    } while (i <= 10); // Continuamos mientras el contador sea menor o igual que 10
    
    cout << endl; // Agregamos un salto de línea al final
    
    return 0;
}

