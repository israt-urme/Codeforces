#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int l=a.length();
    int j=0,l1=0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y' || a[i]=='Y' || a[i]=='A'|| a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
            continue;
        if(a[i]>'A' && a[i]<='Z')
            a[j]=a[i]+32;
        else
            a[j]=a[i];
        if(j<l)
            j++;
            l1++;
    }
    for(int j=0;j<l1;j++)
    {
        cout<<"."<<a[j];
    }
    cout<<endl;
    return 0;
}
