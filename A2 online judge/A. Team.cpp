#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, m,n,p,c=0;
    cin>>t;
    while(t--)
    {
        cin>>m>>n>>p;
        if((m+n+p)==2 || (m+n+p)==3)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
