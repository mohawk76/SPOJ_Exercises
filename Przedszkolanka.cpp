#include<iostream>

using namespace std;

int main()
{
int n;
while(!(cin>>n)&&!(1<=n)&&!(n<=30));
for(int i=0;i<n;i++)
{
 int a,b;
 int licz=1;
 cin>>a>>b;
if(a>b)
{
    licz=a;
    while(licz%b)
        licz+=a;
    cout<<licz<<endl;
}
else if(a<b)
{
    licz=b;
    while(licz%a)
        licz+=b;
    cout<<licz<<endl;
}
else
    cout<<a<<endl;
}
return 0;
}
