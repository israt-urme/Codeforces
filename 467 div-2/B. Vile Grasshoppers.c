#include<stdio.h>
int main()
{
    int p,y,i,j;
    scanf("%d %d",&p,&y);
    for(i=2;i<=y;i++)
    {
        int max=0;
        for(j=2;j<=p;j++)
        {
            if(i%2==0 || j%2==0 || i==j)
                continue;
            else if(i>max)
                printf("%d\n",i);
            else if(j>i)
                printf("%d\n",j);
            else
                printf("-1\n");
        }
    }
    return 0;
}
