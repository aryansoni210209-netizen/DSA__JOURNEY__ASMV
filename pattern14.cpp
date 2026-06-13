#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int num = 1;
    int i = 1;
    while(i<=n){
        //print space
        int space = n - i;
        while(space){
            cout << " ";
            space --;
        }
           // print num
        int j = i;
        while(j){
            cout << num ;
            num = num + 1;
            j --;
        }
        cout << endl;
        i ++;
     }

}