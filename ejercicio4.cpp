#include <iostream> //Determinar si es primo o no 
using namespace std;

int main() {
    // Entrada
    int num; 
    int i = 2;
    bool primo = true;

    cout << "Introduce un numero entero positivo: ";
    cin >> num;

    // Validación
    if (num < 0) {
        cout << "No se permiten numeros negativos." << endl;
        return 0;
    }

    // Proceso
    if (num <= 1) {
        primo = false;
    } else {
        while (i < num && primo) {
            if (num % i == 0) // Comparación de divisibilidad exacta
                primo = false;
            else 
                i = i + 1;
        }
    }

    // Salida
    if (primo)
        cout << num << " Es primo." << endl;
    else 
        cout << num << " No es primo." << endl;
}

