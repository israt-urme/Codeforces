#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char a[n];
    cin>>a;
    int sum=0;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
        i=i+sum;
        sum++;
    }
    cout<<endl;
}
