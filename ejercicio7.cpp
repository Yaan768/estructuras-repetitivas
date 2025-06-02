#include <iostream>
#include <limits> // Para limpiar errores de entrada
using namespace std;

int main() {
    int n, num;
    int sumaPares = 0, sumaImpares = 0;
    int contPares = 0, contImpares = 0;

    // Título
    cout << "=============================================\n";
    cout << "   PROMEDIO DE NUMEROS PARES E IMPARES\n";
    cout << "=============================================\n";

    // Entrada 
    cout << "¿Cuantos numeros vas a ingresar?: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Por favor, ingrese una cantidad valida: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Proceso
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        while (!(cin >> num)) {
            cout << "Entrada invalida. Ingrese un numero entero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (num % 2 == 0) {
            sumaPares += num;
            contPares++;
        } else {
            sumaImpares += num;
            contImpares++;
        }
    }

    // Salida
    cout << "---------------------------------------------\n";
    if (contPares > 0)
        cout << "Promedio de numeros pares: " << (float)sumaPares / contPares << endl;
    else
        cout << "No se ingresaron numeros pares." << endl;

    if (contImpares > 0)
        cout << "Promedio de numeros impares: " << (float)sumaImpares / contImpares << endl;
    else
        cout << "No se ingresaron numeros impares." << endl;

    cout << "=============================================\n";
}

