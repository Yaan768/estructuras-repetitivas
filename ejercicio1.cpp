#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de multiplos de 7 que desea ver: ";
    cin >> n;

    for (int i = 1; i <= n; i=i+1) {
        cout << i * 7 << " ";
    }
    cout << endl;
}
