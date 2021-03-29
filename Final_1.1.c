#include<stdio.h>

int main()
{
    int n,c,x,i,z=0;
    scanf("%d %d",&n,&c);
    while(z==0)
    {
        n++;
        x=n;
        for(i=0;x>0;i++)
        {
            if(x%10==c)
            {
                printf("%d",n);
                z=1;
                break;
            }
            x/=10;
        }
    }
    return 0;
}
