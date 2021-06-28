#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,t;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        cout<<(24-(h+1))*60+(60-m)<<endl;
    }
    return 0;
}
