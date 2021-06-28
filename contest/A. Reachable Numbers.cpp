#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        vector<int>a;
        std::fill(a.begin(), a.end(), 0);
        for(int i=0;i<5;i++)
        {
            cout<<"i"<<a[i]<<endl;
        }
        int n=x+1;
        int c=1;
        cout<<a[n]<<endl;
        while(1)
        {
            if(a[n]==2) {break;}
            if(n%10==0)
                n=n/10;
            else{
                cout<<a[n]<<endl;
                a[n]++;
                n++;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            cout<<a[i]<<endl;
            if(a[i]==1)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
