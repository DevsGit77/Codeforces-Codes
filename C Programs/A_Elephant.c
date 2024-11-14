#include <stdio.h>

int main()
{
    int x,c;
    scanf("%d",&x);

    if(x%5==0)
    {
        c = x/5;
        printf("%d\n",c);
    }
    else
    {
       c = (x/5)+1;
       printf("%d\n",c);
    }

    return 0;
}
