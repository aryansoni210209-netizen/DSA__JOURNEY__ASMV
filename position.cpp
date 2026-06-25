#include<iostream>
using namespace std;

void printarr(int arr[], int size){
    for(int i=0; i<size;i++){
        cout << arr[i] << " ";
    }
}

void sort(int arr[], int size){
    cout << "entered in a function";
    int n = size;
    int i = 0;
    int j = n-1;
    while(i<=j){
        if(arr[i]<arr[j]){
            j--;
        }
        else if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
        }
        
    }
    cout<< "soted"<<endl;
    printarr(arr, size);   
    cout << "printed" << endl;
    }
int main(){
    int arr[8] = {2,5,8,4,7,1,2,3};
    int size = 8;
    printarr(arr,size);
    cout << endl;
    sort(arr,size);
}
