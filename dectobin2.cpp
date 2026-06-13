#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0, ans = 0;
    if(n>= 0){
        while(n != 0){
            int bit = n & 1;
            ans = bit * pow(10, i) + ans;
            n = n >> 1;
            i ++;
        }
        cout << ans << endl;
    }
    else {
        unsigned int twos = n;
        for(int i = 31; i >= 0; i--){
            int bit = (twos >> i) & 1;
            cout << bit;
        }
        }

}