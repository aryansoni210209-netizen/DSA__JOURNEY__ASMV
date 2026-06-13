#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 1;
    for(int i = 0; i <=30; i++){
        if(n == ans ){
            cout << n << " = 2 to the power " << i;
            break;
        }
        ans = ans * 2;
        
    }
    if(n != ans){
        cout << "no is not power of 2";
    }
    
}