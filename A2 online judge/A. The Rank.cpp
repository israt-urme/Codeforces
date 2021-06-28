#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,m,a,b,c,d;
    cin>>n;
    int x=1;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        if(i==0)
            m=sum;
        if(sum>m)
            x++;
    }
    cout<<x<<endl;
    return 0;
}
