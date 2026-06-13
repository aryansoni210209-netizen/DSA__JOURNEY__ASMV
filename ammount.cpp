#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter your ammount"<< endl;
    cin >> n;
    int num = n / 100;
    cout << "no of 100 is" << num << endl;
    n = n%100;
    int num2 = n / 50;
    cout << "no of 50 is" << num2 << endl;
    n = n % 50;
    int num3 = n / 20;
    cout << "no of 20 is" << num3 << endl;
    n = n %20;
    int num4 = n / 1;
    cout << "no of 1 is" << num4 << endl;
    
}
    