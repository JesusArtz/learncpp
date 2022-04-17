#include <iostream>

using namespace std;

int main(){
    int hora = 0;

    cin>>hora;

    if(hora > 8 && hora < 14){
        cout<<"El horario es de clases";

    }else{
        cout<<"El horario no es de clases";
    }
}