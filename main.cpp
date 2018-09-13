#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int dividend, divisor, remainder, a, b = 0;

    

     cout << " Enter the First Number: ";
     cin >> a ;
     


     cout << " Enter the Second Number: ";
     cin >> b ;
     


     if ( a > b )
     {
        dividend = a;
        divisor =  b;
     }
     else
     {
         dividend = b;
         divisor = a;
     }

     do {
        remainder = dividend % divisor;

        if (remainder != 0)
        {

            dividend = divisor;
            divisor = remainder;
        }
     }
     while(remainder != 0); 

     cout << " The GCD of " << a << " and " << b << " is: " << divisor  << endl << endl;


     return 0;
}
