#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int l=a.length();
    int c=0,c1=0,c2=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
                a[i]=a[i]+32;
        if(b[i]>='A' && b[i]<='Z')
                b[i]=b[i]+32;
    }
    if(a==b)
        cout<<"0"<<endl;
    else if(a<b)
        cout<<"-1"<<endl;
    else if(a>b)
        cout<<"1"<<endl;
    return 0;
}
