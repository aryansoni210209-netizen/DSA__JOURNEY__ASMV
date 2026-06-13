#include<iostream> 
using namespace std;

int main(){
char ch = 'A' ;
int n;
cin >> n;

int i = 1;
while(i <= n){
    int j = 1; 
    while(j <= n){
        cout << ch;
        
        j = j + 1;
        
    }
    ch = ch + 1;
    cout << endl;
    i = i + 1;
} 






}