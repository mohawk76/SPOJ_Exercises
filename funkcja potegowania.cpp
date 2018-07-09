#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int potega(long long int a, long long int b)
{
    int i;
    int result = 1;
    long long int x = a%10;

    for (i=1; i<=b; i<<=1)
    {
        x%=10;
        if ((b&i) != 0)
        {
            result *= x;
            result %= 10;
        }
        x *= x;
    }
    return result;
}

int main()
{
    int a, b, i, t;
    cin>>t;

    for (i = 0; i < t; ++i)
    {
        cin>>a>>b;
        cout<<potega(a, b)<<endl;
    }

    return 0;
}
