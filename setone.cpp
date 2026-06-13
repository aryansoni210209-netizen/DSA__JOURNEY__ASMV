#include<iostream>
using namespace std;

int set(int a, int b){
    int ans = 0;
    while(a != 0 ||  b != 0){
        if(a& 1){
            ans = ans + 1;
           
        }
         a = a >> 1;
        if(b&1){
            ans = ans + 1;
            
          }
          b = b >> 1;
    }
    return ans;
}

int main(){
    int a , b;
    cin >> a >> b;
    cout << set(a ,b);
}