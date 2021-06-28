#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int v=n/k;
        if(v*k<n){
            int r=(v*k)+k/2;
            if(r>n)
            {
                while(1)
                {
                    if(r==n) {cout<<r<<endl;break;}
                    r--;
                }
            }
            else
                cout<<(v*k)+k/2<<endl;

        }
        else if(v*k==n)
            cout<<n<<endl;
    }
    return 0;
}

