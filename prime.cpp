#include <iostream> 
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool x = 1;
    for(int i = 2; i<n; i++ ){
        if(n%i == 0){
            x = 0;
            break;
        }
    
    }
if(x == 0) {
    cout << "not prime";

}
else {
    cout << "prime";
}

}