#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,c;
    scanf("%I64d",&n);
    scanf("%I64d",&k);
    if(n%2==0)
    {
        if(k<=n/2)
            c=2*(k-1)+1;
        else
            c=2*(k-(n/2));
    }
    else
    {
        if(k<=(n/2+1))
            c=2*(k-1)+1;
        else
            c=2*(k-(n/2+1));
    }
    printf("%I64d",c);
    return 0;
}

