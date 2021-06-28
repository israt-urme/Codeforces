#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int l=a.length(),c=0,w,x,y,z;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='h')
        {
            c++;
            w=c;
        }
        if(a[i]=='e')
        {
            c++;
            x=c;
        }
        if(a[i]=='l')
        {
            c++;
            y=c;
        }
        if(a[i]=='o')
        {
            c++;
            z=c;
        }

    }
    if(w<x && x<y && y<z && z>x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
