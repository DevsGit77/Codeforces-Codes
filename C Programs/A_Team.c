#include <stdio.h>

int main()
{
    int n,p,v,t,cnt=0,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);

        if(p+v+t >= 2)
        {
            cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}
