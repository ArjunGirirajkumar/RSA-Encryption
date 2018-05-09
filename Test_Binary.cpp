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
    int b = 0 ;
    int x[999] ;
    while(i >= 0)
    {
        if (digits[i] == 1)
        {
            x[b] = pow(2, i) ;
            b++ ;
        }
        i = i - 1 ;
    }
    int t = 0 ;
    for (t = 0 ; t <= b ; t++)
    {
        cout << x[t] << "\n" ;
    }
    return 0 ;
}
