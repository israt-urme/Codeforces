#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],a1[101],sum1=0,temp,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum1=sum1+a[i];
    }
    sort(a,a+n);
    int j=0;
    for(i=n-1; i>=0; i--)
    {
        a1[j]=a[i];
        j++;
    }
    int sum=0;
    for(j=0;j<n;j++)
    {
        sum=sum+a1[j];
        if(sum>(sum1/2))
            break;
    }
    cout<<j+1<<endl;
    return 0;
}

