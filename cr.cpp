#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, temp; cin >> N;
  vector<int>complicarse;
  while(N != 1){
    if(N % 2 == 0) {
      temp = N / 2;
      complicarse.push_back(temp);
    }
    else {
      temp = N * 3 + 1;
      complicarse.push_back(temp);
    }
  }
  for(int i = 0; i < complicarse.size(); i++) cout << complicarse[i] << "\n";
}