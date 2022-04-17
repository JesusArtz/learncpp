#include <iostream>

using namespace std;

int main(){

    int n = 0;
    int numIngresado = 0;
    

    cout<<"Ingresa la cantidad de datos a guardar: "<<endl;
    cin>>n;

    char arr[n];

    for(int i = 0; i < n; i++){
        
        cout<<"Ingresa el "<<i+1<<" numero: "<<endl;
        cin>>arr[i];

    }

    for(int it = 0; it < n; it++){
        cout<<arr[it]<<" ";
    }

}