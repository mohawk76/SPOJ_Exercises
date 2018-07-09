#include<iostream>

using namespace std;

int main()
{
 int d;
    while(!(cin>>d))
        {
            cin.clear();
            cin.sync();
        }
    long long a, b;
    for(int i=0;i<d;i++)
    {
        while(!(cin>>a>>b))
        {
            cin.clear();
            cin.sync();
        }
        while(b!=0)
        {
            int tep=b;
            b=a%b;
            a=tep;
        }
        cout<<a<<endl;


    }
    return 0;
}
