#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag,c;
    string s;
    cin>>n;
    c=0;
    while(n--)
    {
        cin>>s;
        flag=0;
        for(int i=0;i<3;i++)
        {
            if(s[i]=='+')
                flag=1;
            if(s[i]=='-')
                flag=0;
        }
        if(flag==1)
            c++;
        else
            c--;
    }
    cout<<c<<endl;
    return 0;
}

