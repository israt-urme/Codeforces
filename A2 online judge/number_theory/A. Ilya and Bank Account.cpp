#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,last,last2,mod;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        last=n/10;

        mod=n%10;
        n=n/100;
        n=n*10;
        last2=n+mod;

        cout<<max(last,last2)<<endl;
    }
    return 0;
}
