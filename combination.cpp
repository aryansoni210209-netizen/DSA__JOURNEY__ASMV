#include<iostream>
using namespace std;

int fact(int a){
    int ans = 1;
    for(int i = 1; i <= a; i++){
        ans = ans * i;
    }
    return ans;
}

int ncr(int a, int b){
    int num = fact(a);
    int den = fact(b) * fact(a - b);
    return num/den;
}

int main(){
    int a, b;
    cin >> a >> b;
    int ans = ncr(a,b);
    cout << ans << endl;
}