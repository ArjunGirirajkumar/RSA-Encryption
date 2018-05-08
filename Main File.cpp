#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <cmath>

using namespace std;

int prime(int a)
{
    int io = 0 ;
    int i ;
    for (i = 2 ; i < a ; i++)
    {
        if (a % i == 0)
        {
            io = 1 ;
        }
    }
    if (io == 0)
    {
         return 1  ;
    }
    else if (a == 2)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
     /* srand(time(0)) ;
    int i = 0 ;
    int prime_no1 ;
    while(i == 0)
    {
        prime_no1 = rand() % 99 + 1 ;
        if (prime(prime_no1) == 1)
        {
            i = 1 ;
        }
    }
    int p = 0 ;
    int prime_no2 ;
    while(p == 0)
    {
        prime_no2 = rand() % 99 + 1 ;
        if (prime(prime_no2) == 1)
        {
            p = 1 ;
        }
    }
    int n = prime_no1 * prime_no2 ;
    int phi = (prime_no1 - 1) * (prime_no2 - 1) ;
    int y, e ;
    int x = 0 ;
    while(x == 0)
    {
        y = rand() % 100 + 1 ;
        if (__gcd(phi,y) == 1)
        {
            e = y ;
            x = 1 ;
        }
    }
    int k = 1 ;
    float d = 0 ;
    d = ((k*phi) + 1) / e ;
    cout << e << "\n" << n << "\n" << d << "\n" << phi << "\n" << prime_no1 << "\n" << prime_no2; */
    int x, s, d ;
    double e = 17, n = 667, phi = 616, p1 = 29, p2 = 23, enc, dec ;
    while (x == 0)
    {
        if (fmod((s*e), phi) == 1)
        {
            d = s ;
            x = 1 ;
        }
        s++ ;
    }
    enc = fmod(pow(12,e), n) ;
    cout << "\n" << d ;
    dec = pow(enc, 50) ;
    //cout << "\n" << dec ;
    return 0;
}
