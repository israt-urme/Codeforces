#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long s,a,b,c,m,m1;
    cin>>t;
    while(t--)
    {
        cin>>s>>a>>b>>c;
        m=s/c;
        m1=m/a;
        m1=m1*b;
        cout<<m+m1<<endl;
    }
    return 0;
}
