#include <iostream>

using namespace std;

int main(){
    int n=0;

    cin>>n;

    cout<<n<<" ";
    while (true){
        if (n==1){
            break;
        }else{
            if(n%2==0){
                n = n/2;
                cout<<n<<" ";
                if (n==1){
                    break;
                }
            }else{
                n = n*3+1;
                cout<<n<<" ";

            }
        }
        
    }
    
    return 0;
}