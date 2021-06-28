#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int l=a.length();
    int j=0,temp;
    for(int j=0;j<l;j++){
        for(int i=0;i<l-1;i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            if(i==l-1)
                cout<<a[i]<<endl;
            else
                cout<<a[i]<<"+";
        }
    }
    return 0;
}

