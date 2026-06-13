#include<iostream>
using namespace std;

int main(){
    int a , b;
    char c;

    cin >> a ;
    cin >> c ;
    cin >> b;

    switch(c){
        case '+':
        cout << a + b;
        break;

        case '-':
        cout << a - b;
        break;

        case '*':
        cout << a * b;
        break;

        case '/':
        cout << a / b;

        case '%':
        cout << a % b;
        break;
        
        }
    
}