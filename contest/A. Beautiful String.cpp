#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,l;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=s.length();
        int flag=0;

        for(i=1;i<l;i++)
        {
            if((s[i]==s[i-1]) && (s[i]!='?' && s[i-1]!='?'))
               {flag=1;break;}
        }
        if(flag==0)
        {
            //one
            if(s[0]=='?' && (s[1]=='a' || s[1]=='b' || s[1]=='?'))
            {
                s[0]='c';
            }
            else if(s[0]=='?' && s[1]=='c')
            {
                s[0]='b';
            }
            //two
            for(i=1;i<l-1;i++)
            {
                if(s[i]=='?' && (s[i-1]=='a' && (s[i+1]=='b' || s[i+1]=='?' || s[i+1]=='a')))
                {
                    s[i]='c';
                }
                else if(s[i]=='?' && (s[i-1]=='a' && s[i+1]=='c'))
                {
                    s[i]='b';
                }
                else if(s[i]=='?' && (s[i-1]=='b' && (s[i+1]=='b' || s[i+1]=='?' || s[i+1]=='a')))
                {
                    s[i]='c';
                }
                else if(s[i]=='?' && (s[i-1]=='b' && s[i+1]=='c'))
                {
                    s[i]='a';
                }
                else if(s[i]=='?' && (s[i-1]=='c' && (s[i+1]=='c' || s[i+1]=='?' || s[i+1]=='b')))
                {
                    s[i]='a';
                }
                else if(s[i]=='?' && (s[i-1]=='c' && s[i+1]=='a'))
                {
                    s[i]='b';
                }
            }
            if(s[l-1]=='?' && (s[l-2]=='a' || s[l-2]=='b'))
            {
                s[l-1]='c';
            }
            else if(s[l-1]=='?' && s[l-2]=='c')
            {
                s[l-1]='b';
            }
        }
        if(l==1 && s[0]=='?')
            cout<<"a"<<endl;
        else if(flag==1)
            cout<<"-1\n";
        else
            cout<<s<<endl;
    }
    return 0;
}
