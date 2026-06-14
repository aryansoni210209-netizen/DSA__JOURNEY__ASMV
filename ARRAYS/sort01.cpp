#include<iostream>
using namespace std;

void printarr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " " ;
    }
}
void sort01(int arr[], int size){
    int start = 0 ; 
    int end = size - 1;
    while(start<=end){
        if(arr[start] == 1 && start<=end){
            start++;
        }
        else if(arr[end]==0 && start<=end){
            end--;
        }
        else{
        swap(arr[end],arr[start]);
        }
        
    }
    printarr(arr, size);
}
int main(){
    int arr[8]  = {0,1,0,1,1,0,1,0};
    int size = 8;
    sort01(arr,size);
    
}