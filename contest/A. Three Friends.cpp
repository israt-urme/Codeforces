#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long q,a,b,c,x;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>c;
        x=abs(a-b)+abs(a-c)+abs(b-c);
        if(x>=4)
        {
            cout<<x-4<<endl;
        }
        if(x<4) cout<<"0\n";
        x=0;
    }
    return 0;
}
