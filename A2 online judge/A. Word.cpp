#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int c=0,c1=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            c++;
        if(s[i]>='A' && s[i]<='Z')
            c1++;
    }
    if(c>=c1)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                    s[i]=s[i]+32;
                else
                    s[i]=s[i];
            cout<<s[i];
        }
        cout<<endl;
    }
    if(c<c1)
    {
        for(int i=0;i<l;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                    s[i]=s[i]-32;
                else
                    s[i]=s[i];
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
