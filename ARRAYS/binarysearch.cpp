#include<iostream>
using namespace std;

int binarysrch(int arr[],int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;
}
int main(){
    int even[8] = {1,2,5,4,6,7,8,9};
    int odd[5] = {1,4,6,7,10};
    cout << "index of 7 is " << binarysrch(even,8,7) << endl;
    cout << "index of 10 is " << binarysrch(odd,5,10) << endl;
}