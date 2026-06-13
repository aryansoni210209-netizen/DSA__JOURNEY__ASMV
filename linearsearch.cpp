#include<iostream>
using namespace std;

bool search(int arr[], int size , int n){
    for(int i = 0; i <size; i ++){
        if(arr[i] == n){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {10,52,87,-96,87,54,21,-54,45,70};
    int size = 10;
    int n ;
    cin >> n;
    if(search(arr, size, n)){
        cout << n << " is present" << endl;
    }
    else {
        cout << n << " is not present" << endl;
    }
}