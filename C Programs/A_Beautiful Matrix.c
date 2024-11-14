#include <stdio.h>
#include <math.h>

int main()
{
    int a[10][10];
    int i,j,c;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&a[i][j]);

            if(a[i][j] == 1)
            {
                c = abs(3-i)+ abs(3-j);
            }
        }
    }

    printf("%d\n",c);

    return 0;
}
