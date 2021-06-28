#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,k;
    string a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0,sum=0;
        for(i=0;i<n-1;i++)
        {
            //cout<<"check i=="<<a[i];
            for(j=i+1;j<n;j++)
            {
                //cout<<"  j=="<<a[j]<<endl;
                if(a[i]==a[j]){
                    c++;
                    sum++;
                    int x=(a[j][3]-'0')-sum;
                    a[j][3]=x+'0';
                    for(k=0;k<n;k++)
                    {
                        if(a[k]=a[j])
                        {
                            sum++;
                            x=(a[j][3]-'0')-sum;
                            if(x<0)

                            a[j][3]=x+'0';
                        }
                    }
                }
            }
            //cout<<"first fast"<<endl;
        }
        cout<<c<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}
