#include<iostream>
using namespace std;

void dupli(int arr[], int n){
    for(int i = 0; i<n ; i++){
        for(int j = i + 1; j < n ; j ++){
            if(arr[j] == arr[i]){
                cout << arr[i] << " is duplicate" << endl;
            }
        }
    }
}

int main(){
    int arr[8] = {1,2,5,5,4,1,7,5};
    int size = 8;
    dupli(arr, size);

}