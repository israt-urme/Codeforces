#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,sum,c,s,in,e;
    cin>>t;
    while(t--)
    {
        cin>>s>>in>>e;
        sum=s+e;
        c=0;
        if(sum>in)
        {
            c=1;
            while(1)
            {
                sum--;
                in++;
                if(in>=sum || sum<0)
                    break;
                else
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
