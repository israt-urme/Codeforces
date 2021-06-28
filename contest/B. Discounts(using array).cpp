#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    scanf("%lld",&n);
    long long a[n+1],m,q,i,j,b[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);

    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        b[i]=a[i]+b[i-1];
    }

    scanf("%lld",&m);
    while(m--)
    {
        scanf("%lld",&q);
        cout<<b[n-1]-a[n-q]<<endl;
    }
    return 0;
}
