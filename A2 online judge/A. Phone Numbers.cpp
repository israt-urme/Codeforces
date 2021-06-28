#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    string s;
    cin>>s;
    int l=s.length();
    if(n==l)
        c=n/11;
    int c1=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='8')
            c1++;
    }
    if(c1>c)
        cout<<c;
    else
        cout<<c1;
    return 0;
}
