#include <stdio.h>

int main()
{
    int k,n,w,i,sum=0,borr;

    scanf("%d %d %d", &k, &n, &w);

    for(i=1; i<=w; i++)
    {
        sum = sum + (i*k);
    }

    borr = sum - n;

    if(borr <=0 )
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", borr);
    }


    return 0;
}
