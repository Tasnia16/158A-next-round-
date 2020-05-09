#include<stdio.h>
int main(void)
{
    int i,n,k,count,score;
    count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    if(n>=k&&k>=1&&n<=50)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&score);
            if(score>k)
                count++;
        }
    }
    printf("%d",count);
}
