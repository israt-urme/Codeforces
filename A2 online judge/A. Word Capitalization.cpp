#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[0]>='a' && s[0]<='z')
            s[0]-=32;
        else
            s[i]=s[i];
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}

