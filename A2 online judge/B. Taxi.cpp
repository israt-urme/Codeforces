#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    if(sum%4==0)
        cout<<sum/4<<endl;
    else
        cout<<(sum/4)+1<<endl;
    return 0;
}


