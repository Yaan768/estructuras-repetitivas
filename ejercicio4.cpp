#include <iostream>//Determinar si es primo o no 
using namespace std;
int main() {
	//Entrada
    int num; 
	int i = 2;
    bool primo = true;
    cout << "Introduce un numero: ";
    cin >> num;
    //Proceso
    if (num<=1) primo= false;
    else {
    	while (i< num and primo)
    	if (num%i==0) //Comparacion de divisivilidad exacta
    	primo=false;
    	else 
    	i=i+1;
	}
	//Salida
	if(primo)
	cout<<num<<" Es primo";
	else 
	cout<<num<<" No es primo"; 
}
