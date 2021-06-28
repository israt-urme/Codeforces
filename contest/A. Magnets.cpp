#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,c=0,i;
    string a,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        y=a[0];
        if(i!=0 && x==y)
            c++;
        x=a[1];
    }

    cout<<c+1<<endl;
    return 0;
}
