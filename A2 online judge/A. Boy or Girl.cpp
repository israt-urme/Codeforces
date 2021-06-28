#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),j,c;
    for(int i=1;i<l;i++)
    {
        int key=s[i];
        j=i-1;
        while(j>=0 && s[j]>key)
        {
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=key;
    }
    c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==s[i+1])
            continue;
        else
            c++;
    }
    if((c%2)==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
