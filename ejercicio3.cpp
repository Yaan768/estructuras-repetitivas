#include <iostream>
#include <limits> // Para limpiar errores de entrada
using namespace std;

int main() {
    int N, suma = 0;

    // Interfaz de presentación
    cout << "============================================\n";
    cout << "   SUMA DE LOS N PRIMEROS NUMEROS NATURALES\n";
    cout << "============================================\n";

    // Entrada con validación
    cout << "Ingrese un numero entero positivo (N): ";
    while (!(cin >> N) || N <= 0) {
        cout << "Entrada invalida. Ingrese un numero entero positivo: ";
        cin.clear(); // Limpia error
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer
    }

    // Proceso
    for (int i = 1; i <= N; i++) {
        suma += i;  // suma = suma + i
    }

    // Salida
    cout << "--------------------------------------------\n";
    cout << "La suma de los " << N << " primeros numeros naturales es: " << suma << endl;
    cout << "============================================\n";

}

