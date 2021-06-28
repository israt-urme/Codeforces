#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long t,a,b,n,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        if(s-a*n<=b && s-a*n>=0) cout<<"YES\n";
        else if(s/n<=a && s/n*n+b>=s) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
