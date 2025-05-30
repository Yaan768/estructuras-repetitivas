#include <iostream> // Relacionar número con vocal
using namespace std;

int main() {
    int num;

    // Entrada
    cout << "Ingrese un número del 1 al 5: ";
    cin >> num;

    // Validación
    if (num < 1 || num > 5) {
        cout << "Error: el número debe estar entre 1 y 5." << endl;
    } else {
        // Proceso
        switch (num) {
            case 1: cout << "La vocal es A." << endl; break;
            case 2: cout << "La vocal es E." << endl; break;
            case 3: cout << "La vocal es I." << endl; break;
            case 4: cout << "La vocal es O." << endl; break;
            case 5: cout << "La vocal es U." << endl; break;
        }
    }
}

