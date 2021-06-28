#include<bits/stdc++.h>
using namespace std;


int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;

    int len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

string addBinary(string a, string b)
{
    string result= "";
    int s = 0;
    int l1,l2;
    l1= a.length(), l2 = b.length();
    if(l1<l2)
    {
        int l=l2-l1;
        while(l--){
            a="0"+a;
        }
        l1=l2;
    }
    if(l1>l2)
    {
        int l=l1-l2;
        while(l--){
            b="0"+b;
        }
        l2=l1;
    }
    if(l1==l2)
    {
        for(int i=l1-1;i>=0;i--)
        {
            if(a[i]=='1' && b[i]=='1')
                s=1;
            else
                s=0;
            result = char(s % 2 + '0') + result;
        }
    }
    return result;
}



int main()
{
    int n,m,i;
    cin>>n>>m;
    string num1 ,num2,num3,temp;
    cin>>num1>>num2;
    int sum=0;
    num3 = addBinary(num1,num2);
    sum=sum + binaryToDecimal(num3);

    for(int i=1;i<=m;i++)
    {
        temp = num2.substr (0,num2.length()-i);
        num3 = addBinary(num1,temp);
        sum=sum + binaryToDecimal(num3);
    }
    cout<<sum<<endl;
    return 0;
}
