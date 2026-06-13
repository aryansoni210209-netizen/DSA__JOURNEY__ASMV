#include<iostream>
using namespace std;

void printarr(int arr[] , int n){
    for(int i = 0; i < n; i++ ){
        cout << arr[i];
    }
}

int main(){
    int arr[6] = {1,5,2,4,6,9};
    int size = 6;
    int a, b;
    a = 0;
    b = 1;

    while(b < size){
        swap(arr[a], arr[b]);
        a = a + 2;
        b = b + 2;
    }
    printarr(arr , size);
}