#include <iostream>

using namespace std;

inline long long sil(int & n, long long res=1)
{
    if( n < 10 ) {
    for(n;n>0;n--)
        {
            res=n*res;
        }

        } else {
            res = 0;
        }
        return res;
}

int main()
{
    int d;
    cin>> d;
    int n;
    for(int i=0;i<d;i++)
    {
        cin>>n;
        n=sil(n);
        cout<<(n%100)/10<<" "<<n%10<<endl;

    }
    return 0;
}
