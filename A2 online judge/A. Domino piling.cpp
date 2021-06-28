#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a=m*n;
    int i,d=2,c=0;
    for(i=1;;i++)
    {
        c=d*i;
        if(c>a){
            i--;
            break;
        }
        if(c==a)
            break;
    }
    cout<<i<<endl;
    return 0;
}
