#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k,j,i,m;
    cin>>n>>k;
    string s,s1;
    char c;
    cin>>s;
    for(i=0; i<n; i++)
    {
        s1[i]='0';
    }
    for(m=1; m<=k; m++)
    {
        cin>>c;
        for(i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                s1[i]=s[i];
                //cout<<i<<"     "<<s1[i]<<endl;
            }
        }
    }
    long long sum=0,l,cnt=0;
    for(i=0; i<n; i++)
    {
        //cout<<i<<"     "<<s1[i]<<endl;
        cnt++;
        if(s1[i]=='0' || i==n-1)
        {
            if(i==n-1 && s1[i]!='0')
                l=cnt;
            else
                l=cnt-1;
            sum=sum+(l*(l+1))/2;
            cnt=0;
        }
    }
    cout<<sum<<endl;


    return 0;
}

