#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,a,m;
    int h1,a1,m1;
    int x;
    scanf("%d",&h);
    scanf("%c",&a);
    scanf("%d",&m);
    scanf("%d",&h1);
    scanf("%c",&a1);
    scanf("%d",&m1);
    if(h<=h1)
    {
        if(h1-h<=1)
        {
            x=(h1-h)*60/2+(m1-m)/2+m;
            if(h>9 && x>9)
                cout<<h<<":"<<x<<endl;
            else if(h<9 && x<9)
                cout<<"0"<<h<<":"<<"0"<<x<<endl;
            else if(h<9)
                cout<<"0"<<h<<":"<<x<<endl;
            else
                cout<<h<<":"<<"0"<<x<<endl;
        }
        else if(h1-h>1)
        {
            h=(h1-h)/2+h;
            x=(m1-m)/2+m;
            if(h>9 && x>9)
                cout<<h<<":"<<x<<endl;
            else if(h<9 && x<9)
                cout<<"0"<<h<<":"<<"0"<<x<<endl;
            else if(h<9)
                cout<<"0"<<h<<":"<<x<<endl;
            else
                cout<<h<<":"<<"0"<<x<<endl;
        }

    }
    else if(h>h1)
    {


            h=(24-h+h1)/2+h;
            if(m>m1)
                x=(m-m1)/2+m;
            else
                x=(m1-m)/2+m;
            if(h>9 && x>9)
                cout<<h<<":"<<x<<endl;
            else if(h<9 && x<9)
                cout<<"0"<<h<<":"<<"0"<<x<<endl;
            else if(h<9)
                cout<<"0"<<h<<":"<<x<<endl;
            else
                cout<<h<<":"<<"0"<<x<<endl;


    }
    return 0;
}
