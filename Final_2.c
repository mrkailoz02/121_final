#include<stdio.h>

int main()
{
    int n,i,j,max=0,x=0,y;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        b[i]=0;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>a[i+1]&&i!=n-1)
            {
                y = a[i];
                a[i] = a[i+1];
                a[i+1] = y;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        x=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                b[i]++;
                x++;
            }
        }
        if(max<x)
        {
            max = x;
        }
    }
    for(i=0;i<n;i++)
    {
        if(max==b[i])
            printf("%d ",a[i]);
    }
    return 0;
}
