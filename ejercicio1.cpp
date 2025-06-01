#include <iostream>
using namespace std;

int main() {
	//Entrada
    int n;
    cout << "=============================" << endl;
    cout << "  MULTIPLOS POSITIVOS DE 7  " << endl;
    cout << "=============================" << endl;
    cout << "Ingrese la cantidad de multiplos de 7 que desea ver: ";
    cin >> n;
    // Validación y proceso
    if (n <= 0) {
        cout << "Por favor ingrese un numero positivo mayor que cero." << endl;
    } else {
        cout << "\nLos primeros " << n << " multiplos positivos de 7 son:\n";//Salida
        //Proceso
        int contador = 0;
        int numero = 1;

        while (contador < n) {
            if (numero % 7 == 0) {
                cout << numero << " ";
                contador++;
            }
            numero++;
        }
        cout << endl;
    }

}

