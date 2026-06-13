#include<iostream> 
using namespace std;

int main() { 

    int n;
    cin >> n;
    int num = 1;
    int i = 1;
    while(i <= n ) { 
        int j = 1;
        while(j <= i ){
            cout << num << " ";
            num = num + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;

    }
}