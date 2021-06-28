#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int l=a.length(),c=0;
    for(int i=1;i<l;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
           c++;
    }
    if(a[0]>='A' && a[0]<='Z' && c==l-1)
    {
        for(int i=0;i<l;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                a[i]+=32;
            cout<<a[i];
        }
    }
    else if(c==l-1)
    {
        if(a[0]>='a' && a[0]<='z')
            a[0]-=32;
        cout<<a[0];
        for(int i=1;i<l;i++)
        {
            if(a[i]>='A' && a[i]<='Z')
                a[i]+=32;
            cout<<a[i];
        }
    }
    else
    {
        for(int i=0;i<l;i++)
            cout<<a[i];
    }
    cout<<endl;
    return 0;
}
