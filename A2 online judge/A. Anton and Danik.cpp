#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,j,l;
        cin>>n;
        string s;
        cin>>s;
        l=s.length();
        int c=0,c1=0;
        for(int j=0;j<l;j++)
        {
            if(s[j]=='A')
                c++;
            if(s[j]=='D')
                c1++;
        }
        if(c>c1)
            cout<<"Anton"<<endl;
        if(c<c1)
            cout<<"Danik"<<endl;
        if(c==c1)
            cout<<"Friendship"<<endl;
    return 0;
}
