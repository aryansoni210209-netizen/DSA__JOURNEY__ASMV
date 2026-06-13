#include<iostream>
using namespace std;

int common(int arr[] , int arr2[]){
    int a= 0;
    for(int i = 0; i < 5 ; i ++){
        for(int j = 0; j < 5 ; j++){
            if(arr[i] == arr2[j]){
                a++ ;
                break;
            }
        }
    }
    return  a;
}

void printarr(int arr[] , int n ){
    for(int i =0; i < n ; i++){
        cout << arr[i] << " ";
    }
}

void intersect(int arr[], int arr2[]){
    int a = common(arr, arr2);
    int arr3[a];
    int k = 0;
    for(int i = 0; i < 5 ; i ++){
        for(int j = 0; j < 5 ; j++){
            if(arr[i] == arr2[j]){
                arr3[k] = arr[i];
                k ++ ;
                break;
            }
        }
    }
    printarr(arr3, a);
}


int main(){
    int arr[5] = {1,5,8,9,7};
    int arr2[5] = {1,2,5,8,9};
    cout << common(arr, arr2);
    cout << endl;
    printarr(arr, 5);
    cout << endl;
    printarr(arr2, 5);
    cout << endl;
    intersect(arr, arr2);
    


}