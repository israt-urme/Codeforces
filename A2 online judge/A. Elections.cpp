#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0,m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(m<a[i])
            m=a[i];
    }
    while(1)
    {
        int sum1=0;
        for(int i=0; i<n; i++)
        {
            sum1=sum1+(m-a[i]);
        }
        if(sum1>sum)
        {
            cout<<m<<endl;
            break;
        }
        else
            m++;
    }
    return 0;

}
