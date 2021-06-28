#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,c1=0;
    cin>>n;
    string s,d,d1;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(i==1)
        {
            d=s;
        }
        if(s==d)
            c++;
        else
            d1=s;
        if(s==d1)
            c1++;
    }
    if(c>c1)
        cout<<d<<endl;
    else
        cout<<d1<<endl;
    return 0;
}
