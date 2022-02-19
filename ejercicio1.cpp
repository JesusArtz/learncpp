#include <iostream>

using namespace std;

int main(){
    float suma, resta, multiplicacion, division;
    float numero1 = 0, numero2 = 0;

    cout<<"Ingresa un numero 1: ";cin>>numero1;
    cout<<"Ingresa un numero 2: ";cin>>numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1/numero2;

    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Multiplicacion: "<<multiplicacion<<endl;
    cout<<"Division: "<<division<<endl;
    

}