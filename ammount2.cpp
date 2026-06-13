#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int notes = 100;
    while(n > 0){
        switch(notes){
            case 100:
            cout << n / 100 << endl;
            n = n % 100;
            notes = 50;

            case 50:
            cout << n / 50<< endl;
            n = n % 50;
            notes = 20;

            case 20:
            cout << n / 20<< endl;
            n = n % 20;
            notes = 1;

            case 1:
            cout << n / 1<< endl;
            n = n % 1;
            

        }
    }
}