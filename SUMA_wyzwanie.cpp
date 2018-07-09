#include<iostream>

using namespace std;

int main()
{
    for(int i = 0; i<10;i++)
    {
        int n;
        cin>>n;
        long long suma=0;
        for(int j=1;j<=n;j++)
            suma+=j;
        cout<<suma<<endl;
    }
    return 0;
}
