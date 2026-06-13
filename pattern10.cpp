#include<iostream>
using namespace std;

 /*int main(){
    int n;
    cin >> n;

    for(int i= 1; i<=n; i++){
        for(int j=1;j<=i;j++){
            char ch = 'A' + n - i + j - 1;
            cout << ch;
        }
        cout << endl;*/

   /* int main(){
        int n;
        cin >> n;

        int i = 1;
        while(i <= n)
        {                  
           //printing space
           int space = n - i;
           while(space){
            cout << " " ;
            space= space - 1;
           }

           // printing stars
           int j = 1 ;
           while(j<=i){
            cout << "*";
            j ++;
           }
           cout << endl;
           i ++;
        }
    } */


    int main() 
    {
        int n ;
        cin >> n ;

        int i = 1;
        while(i <= n){
            // print stars
            int j = n - i + 1;
            while(j ){
                cout << "*";
                j --;
            }
            cout << endl;
            i ++ ;
            // print space 

        }
    }
