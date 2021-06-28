#include<bits/stdc++.h>
using namespace std;
int multi(int a,int b)
{
    int c=1;
    if(b!=0)
    {
        multi(a,b--);
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int r=multi(a,b);
    cout<<r<<endl;
    return 0;
}


