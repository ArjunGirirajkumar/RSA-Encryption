#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>


using namespace std ;


int main()
{
    a:
    int i = 0 ;
    int a ;
    int digits[999] ;
    for (a = 0 ; a <= 999 ; a++)
    {
        digits[a] = 0 ;
    }
    int num ;
    system("clear") ;
    cout << "Enter a number : " ;
    cin >> num ;
    system("clear") ;
    int y = num ;
    while(num > 0) 
    {
        digits[i] = num % 2 ;
        i++ ;
        num = num/2 ;
    }
    while(i >= 0)
    {
        if (digits[i] == 1)
        {
            int x = pow(2, i) ;
            cout << x  ;
            cout << "                 = 2 to the power of " << i << "\n" ;
        }
        i = i - 1 ;
    }
    cout << "          +" ;
    cout << "\n" << "-----------" ;
    cout << "\n" << y ;
    cout << "\n" << "-----------" ;
    cout << "\n\nDo you want to try again ? (Yes = Y/y, No = N/n) : " ;
    char yn ;
    cin >> yn ;
    if (yn == 'Y' || yn == 'y')
    {
        goto a ;
    }
    return 0 ;
}
