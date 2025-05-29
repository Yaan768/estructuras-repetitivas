#include <iostream>//Repetir hasta que se ingrese num negativo
using namespace std;
int main() {
    int num;
    //Se repite mientras num no sea negativo 
    while (true) {
    	//Entrada
        cout << "Introduce un numero: ";
        cin >> num;
        //proceso
        if (num < 0)
            break;
    }
    //Salida
    cout << "Fin de la captura" << endl;
}
