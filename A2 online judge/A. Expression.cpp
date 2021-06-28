#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a[10];
    cin>>x>>y>>z;
    a[0]=x+(y*z);
    a[1]=(x*y)+z;
    a[2]=x*(y+z);
    a[3]=x*y*z;
    a[4]=(x+y)*z;
    a[5]=x+y+z;
    sort(a,a+6);

    cout<<a[5]<<endl;
    return 0;
}
