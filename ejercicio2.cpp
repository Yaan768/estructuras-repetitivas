#include <iostream>//Repetir hasta que se ingrese num negativo
using namespace std;

int main() {
    int num;
    int contador = 0;

    // Se repite mientras num no sea negativo 
    while (true) {
        cout << "Introduce un numero (negativo para salir): ";
        cin >> num;

        if (num < 0)
            break;

        contador++; // Cuenta solo números válidos
    }

    cout << "Fin de la captura. Se ingresaron " << contador << " numeros validos." << endl;
}

