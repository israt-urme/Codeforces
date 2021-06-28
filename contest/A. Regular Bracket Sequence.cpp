#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int brace1=a*2+c;
    int brace2=d*2+c;
    if(a==0 && d==0 && c>0)
        cout<<"0\n";
    else if(brace1==brace2)
        cout<<"1\n";
    else
        cout<<"0\n";
    return 0;
}
