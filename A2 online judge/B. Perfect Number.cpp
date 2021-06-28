#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c=0,i;
    cin>>x;
    for(i=18;;i++)
    {
        int sum=0,n=i;
        while(n!=NULL)
        {
            int s=n%10;
            sum=sum+s;
            n=n/10;
        }
        if(sum==10)
            c++;
        if(c==x)
            break;
    }
    cout<<i<<endl;
    return 0;
}

