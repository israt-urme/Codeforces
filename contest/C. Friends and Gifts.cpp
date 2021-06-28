#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x;
    vector<int>v;
    vector<int>a;
    cin>>n;
    int arr[n+7];
    for(i=0;i<n+2;i++)
        arr[i]=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        arr[x]++;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
            a.push_back(i);
    }
    int l=a.size();
    int j=l-1,index,flag=0,c=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            v[i]=a[j];
            c++;
            if(v[i]==i+1 || flag==2)
            {
                if(c==1){
                    index=i;flag=2;}
                else{
                swap(v[i],v[index]);
                flag=0;}
            }
            if(flag==0) {index=i; flag=1;}
            j--;
        }
    }
    for(i=0;i<n-1;i++)
        cout<<v[i]<<" ";
    cout<<v[n-1]<<endl;
    return 0;
}
