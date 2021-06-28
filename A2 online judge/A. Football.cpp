#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    cin>>a;
    int l=strlen(a);
    int l1=0,l2=0;
    int c=0,m=0,c1=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='1'){
            c++;
            c1=0;
        }
        if(c>m)
            m=c;
        if(a[i]=='0'){
            c=0;
            c1++;
        }
        if(c1>m)
            m=c1;
    }
    if(m>=7)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

