#include<bits/stdc++.h>
using namespace std;
#define m 1000
int main()
{
    char s[m],t[m],a1[m];
    cin>>s>>t;
    int l=strlen(s);
    int j=0;
    for(int i=l-1;i>=0;i--)
    {
        a1[j]=s[i];
        if(j<l)
            j++;
    }
    int c=0;
    for(j=0;j<l;j++)
    {
        if(a1[j]==t[j])
            c++;
    }
    if(c==l)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}


