#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int ans = 0;
    while(n != 0){
        int dig = n % 10;
        if(ans > INT_MAX / 10){
            cout << "reverse intezer is out of range";
        }
        ans = ans*10 + dig;
        n = n / 10;
    }
    cout << ans;
}