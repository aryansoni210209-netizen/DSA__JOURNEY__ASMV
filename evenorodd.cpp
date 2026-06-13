#include<iostream>
using namespace std;

bool evenodd(int n)
{
    if(n % 2 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int a ;
    cin >> a;
    bool b = evenodd(a);
    if(b){
        cout << a << " is even";
    }
    else{
        cout << a << " is odd";
    }
}