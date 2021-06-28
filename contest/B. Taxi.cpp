#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x;
    cin>>n;
    int a[5];
    for(i=1;i<=4;i++)
        a[i]=0;
    for(i=0; i<n; i++)
    {
        cin>>x;
        a[x]++;
    }
    int sum=0;
    while(1)
    {
        if(a[3]==0 || a[1]==0) break;
        a[3]--;
        a[1]--;
        sum++;
    }
    while(1)
    {
        if(a[2]==0 || a[1]==0) break;
        a[2]--;
        a[1]--;
        if(a[1]!=0) a[1]--;
        sum++;
    }
    sum=sum+(a[1]/4)+(a[2]/2);
    a[1]=a[1]%4;
    a[2]=a[2]%2;
    if(a[1]!=0) a[1]=1;
    cout<<sum+a[1]+a[2]+a[3]+a[4]<<endl;

    return 0;
}

