#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x[2]={0},j=0,flag=0,flag1=0,m,c=0,c1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            flag=1;
            x[j]=2;
            while(1)
            {
                if(a[i]==2){c++;i++;}
                else{i--;break;}
            }
        }
        else if(a[i]==1)
        {
            flag1=1;
            x[j]=1;
            while(1)
            {
                if(a[i]==1){c1++;i++;}
                else{i--;break;}
            }
        }
        if(flag==1 && flag1==1)
        {
            m=min(c,c1);
            if(x[j]==1){flag=0;c=0;}
            else if(x[j]==2){flag1=0;c1=0;}
            j=-1;
        }
        j++;
    }
    cout<<m*2<<endl;
}
