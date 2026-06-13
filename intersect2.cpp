#include<iostream>
using namespace std;



int common(int arr[], int a , int arr2[] , int b){
    int x = 0 ;
    for(int i = 0; i < a ; i ++){
        for(int j = 0 ; j < b ; j ++ ){
            if(arr[i] == arr2[j]){
                x = x + 1;
                break;
            }
        }
    }
    return x;
}
void printarr(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
void intersect(int arr[] , int a , int arr2[] , int b ) {
    int s = common(arr, a , arr2 , b);
    int arr3[s];
    int k = 0 ;
    for(int i = 0; i < a ; i ++){
        for(int j = 0 ; j < b ; j ++ ){
            if(arr[i] == arr2[j]){
                arr3[k] = arr[i];
                k ++;
                break;
            }
        }
    }
        printarr(arr3 , s);
    }

int main(){
    
    int  arr[5] = {1, 8,9,7,4};
    int arr2[5] = {4,5,9,6,1};
    cout << endl;
    int a = 5;
    int b = 5;
    
    cout << endl;
    cout << " the first array is " << endl;
    printarr(arr , a);
    cout << endl;
    cout << " the secondarray is " << endl;
    printarr(arr2 , b );
    cout << endl;
    cout << " the number of common elements is " << endl;
    cout << common(arr , a , arr2 , b);
    cout << endl;
    cout << "the intersection of both arreys is " << endl;
    intersect(arr, a,arr2 , b);
}