#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n],b[n],c[n],sum=0,sum2=0,sum1=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
            cin>>c[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            sum1+=b[i];
            sum2+=c[i];
        }
        if(sum==0 && sum1==0 &&sum2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
