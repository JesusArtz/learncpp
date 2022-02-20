#include <iostream>

using namespace std;

int main(){

    int n=0;
    int temp=0;

    cin>>n;

    while (true){
        cout<<n<<" ";
        if(n!=0){
            temp = n;
            n = n+temp;
            cout<<n<<" ";
        }if (n>45){
            break;
        }   
    }
}