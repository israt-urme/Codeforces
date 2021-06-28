#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    if((n%4)==0 || (n%7)==0 || (n%44)==0 || (n%47)==0 || (n%74)==0 || (n%77)==0)
        cout<<"YES\n";
    else
    {
        int flag=0,flag1=0;
        while(n!=NULL)
        {
            int a=n%10;
            n=n/10;
            if(a==4 || a==7)
                flag=1;
            else{
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
