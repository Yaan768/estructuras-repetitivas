#include <iostream>//Promedio de numeros no negativos
using namespace std;
int main() {
    int n, num, s = 0, cont = 0; //n: cantidad, num: número a ingresar, s: suma, cont: contador
    
    //Entrada con validación
    cout << "¿Cuantos numeros vas a ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad inválida. Debe ser mayor que cero." << endl;
        return 0;
    }

    for (int i = 0; i < n; i = i + 1) {
        cout << "Introduce el numero " << i + 1 << ": ";
        cin >> num;

        if (num >= 0) {
            s = s + num;
            cont = cont + 1;
        } else {
            cout << "Numero negativo ignorado." << endl;
        }
    }

    //Salida
    if (cont > 0)
        cout << "El promedio es: " << (float)s / cont << endl;
    else
        cout << "No se ingresaron numeros no negativos." << endl;
}

