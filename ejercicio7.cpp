#include <iostream>//Promedio de numeros pares e impares 
using namespace std;

int main() {
    int n, num;
    int sumaPares = 0, sumaImpares = 0;
    int contPares = 0, contImpares = 0;

    cout << "¿Cuantos numeros vas a ingresar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num % 2 == 0) {
            sumaPares += num;
            contPares++;
        } else {
            sumaImpares += num;
            contImpares++;
        }
    }

    // Cálculo de promedios con validación para evitar división entre cero
    if (contPares > 0) {
        cout << "Promedio de numeros pares: " << (float)sumaPares / contPares << endl;
    } else {
        cout << "No se ingresaron numeros pares." << endl;
    }

    if (contImpares > 0) {
        cout << "Promedio de numeros impares: " << (float)sumaImpares / contImpares << endl;
    } else {
        cout << "No se ingresaron numeros impares." << endl;
    }

}

