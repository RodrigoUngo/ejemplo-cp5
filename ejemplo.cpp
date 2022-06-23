#include <iostream>

using namespace std;

int sumar(int x, int y);

int main(){
    int suma, a, b;
    cin >> a;
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