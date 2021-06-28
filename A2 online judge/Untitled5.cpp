#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(1)
    {
        cin>>n;
        int a[n],c[n],s;
        for(i=0;i<n;i++){
            cin>>a[i];
            c[i]=0;
        }
        if(n==1) cout<<"Jolly\n";
        else if(n==2)
        {
            sort(a,a+n);
            if((a[1]-a[0])==1)
                cout<<"Jolly\n";
            else
                cout<<"Not jolly\n";

        }
        else
        {
            for(i=0; i<(n-1); i++)
            {
                if(a[i]<a[i+1])
                {
                    s= a[i+1]-a[i];
                    c[s]++;
                }
                else
                {
                    c[i] = a[i]-a[i+1];
                }
            }
            sort(c,c+(n-1));
            int f=1;
            for(i=0; i<(n-1); i++)
            {
                if(c[0]==1 && (c[i]-c[i+1])==-1)
                    f++;
            }
            if(f==n-1)
                cout<<"Jolly\n";
            else
                cout<<"Not jolly\n";
        }
    }
    return 0;
}
