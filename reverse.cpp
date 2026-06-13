#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i = 0 ; i <n ; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1,5,7,8,4};
    int n = 5;
    int start = 0;
    int end = n - 1;
    while(start <= end ) {
        swap(arr[start],arr[end]);  
        start ++ ;
        end -- ;
    }
    printarr(arr, 5);

}