#include <iostream>
using namespace std;
int main() {
    int N, suma = 0;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        suma += i;  // suma = suma + i
    }

    cout << "La suma de los " << N << " primeros numeros naturales es: " << suma << endl;
}

