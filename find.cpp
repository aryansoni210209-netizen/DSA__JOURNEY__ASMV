#include<iostream>
using namespace std;

void find(int arr[], int a , int n)
{
    for(int i = 0 ; i <=n ; i++){
        if(arr[i] == a){
            cout << a << " is " << i << "th element of array" << endl;
            break;
        }
        else if(i == n ){
            cout << a << "is not present in array" << endl;
        }    
    }
    
}


int main(){
    int arr[6] = {5,4,7,8,9,6};
    int n = 6;
    int a;
    cin >> a;
    find(arr , a , n);
}