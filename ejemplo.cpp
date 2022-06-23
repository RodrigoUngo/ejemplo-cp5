#include <iostream>

using namespace std;

int sumar(int x, int y);

int main(){
    int suma = sumar(6,7);
    cout << "La suma es " << suma;
    return 0;
}

int sumar(int x, int y){
    int res;
    res = x+y;
    return res;
}