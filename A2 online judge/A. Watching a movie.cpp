#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,l,r,a=1,sum=0;
    cin>>n>>x;
    while(n--)
    {
        cin>>l>>r;
        while(l>x)
        {
            a=a+x;
            l=l-a;
        }
        sum=sum+(r-a)+1;
        a=r+1;
    }
    cout<<sum<<endl;
    return 0;
}
