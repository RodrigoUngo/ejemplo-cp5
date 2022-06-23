#include <iostream>

using namespace std;

int sumar(int x, int y);

int main(){
    int suma, a, b;
    cout << "Primer numero" << endl;
    cin >> a;
    cout << "Segundo numero" << endl;
    cin >> b;
    suma = sumar(a,b);
    cout << "La suma es " << suma;
    return 0;
}

int sumar(int x, int y){
    int res;
    res = x+y;
    return res;
}