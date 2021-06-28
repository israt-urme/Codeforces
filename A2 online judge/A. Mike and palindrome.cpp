#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[16],s1[16];
    cin>>s;
    int l=strlen(s);
    int j=0;
    for(int i=l-1;i>=0;i--)
    {
        s1[j]=s[i];
        if(j<l-1)
            j++;
    }
    int c=0;
    for(j=0;j<l;j++)
    {
        if(s1[j]==s[j])
            c++;
    }
    if(c==l)
    {
        if(c%2!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else if(c==(l-2))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
