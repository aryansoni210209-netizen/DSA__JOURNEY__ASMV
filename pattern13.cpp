#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i <= n){
        int j = n - i + 1;
        // print space
        int space = i - 1;
        while(space){
            cout << " ";
            space --;
        }

        // print numbers
        while( j ){
            cout << n - j + 1;
            j --;
        }
        cout << endl;
        i ++;

    }
}