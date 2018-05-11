
#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>


using namespace std ;


int expn(int b, int p)
{
    int i = 2 ;
    long double res ;
    res = b * b ;
    while(i < p)
    {
        res = res * res ;
        i = i + i ;
    }
    if (p == 0)
    {
        return 1 ;
    }
    else if (p == 1)
    {
        return b ;
    }
    else
    {
    return res ;
    }
}


int main()
{
    int i = 0 ;
    int digits[999] ;
    int num ;
    system("clear") ;
    cout << "Enter a number : " ;
    cin >> num ;
    system("clear") ;
    int y  ;
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
    int base = 45 ;
    long double reslt = 1 ;
    while(b >= 0)
    {
        reslt = reslt * expn(base, x[b]) ;
        b = b - 1 ;
    }
    cout << reslt ;
    return 0 ;
}
