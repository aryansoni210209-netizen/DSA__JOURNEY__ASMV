#include<iostream>
using namespace std;

void printarr(int arr[] , int size){
    for(int i = 0; i< size ; i++){
        cout << arr[i] << " ";
    }
}

void sort1(int arr[], int size){
    int n = size;
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
            swap(arr[j], arr[minIndex]);
        }
    }
    printarr(arr,n);
}
int main(){
    int arr[6] {12,5,78,89,2,36};
    int n = 6;
    sort1(arr,n);
    
}