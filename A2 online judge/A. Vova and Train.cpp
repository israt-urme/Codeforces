#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,L,v,l,r;
    cin>>t;
    while(t--)
    {
        cin>>L>>v>>l>>r;
        int L1=(l-1)/v;
        int L2=r/v;
        cout<<(L/v)-(L2-L1)<<endl;
    }
}
