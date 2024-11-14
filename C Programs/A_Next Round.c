#include <stdio.h>

int main()
{
    int n,k,i,a[1000],cnt = 0;

    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] >= a[k-1] && a[i] > 0)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}
