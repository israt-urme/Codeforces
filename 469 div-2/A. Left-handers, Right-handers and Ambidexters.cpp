#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a,x,y,z,f,t;
    while(cin>>l>>r>>a)
    {
        if(l<=r)
        {
            x=l+l;
            y=r-l;
            if(y>=a){
                z=a+a;
            }
            if(y<a){
                t=(a-y)%2;
                f=(a-y)-t;
                z=y+y+f;
            }
            if(y==0){
                t=a%2;
                z=a-t;
            }
        }
        else if(l>r)
        {
            x=r+r;
            y=l-r;
            if(y>=a)
                z=a+a;
            if(y<a){
                t=(a-y)%2;
                f=(a-y)-t;
                z=y+y+f;
            }

        }
        cout<<x+z<<endl;
    }
    return 0;

}
