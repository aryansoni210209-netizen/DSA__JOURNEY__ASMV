#include <iostream>
using namespace std;

int main ()
{
   
   
    char a; 
    cin >> a;
    if ( a>= 'a' && a<= 'z')

    { cout << "the character is a lowercase letter"; }

    else if ( a>= 'A' && a<= 'Z')

    { cout << "the character is an uppercase letter"; }

    else if ( a>= '0' && a<= '9')

    { cout << "the character is a digit"; }

    else

    { cout << "the character is a special character"; } 


}
