#include <stdio.h>


void fn()
{
            int n;
        scanf("%d",&n);

        char a[n+1];
        int i,count=0;
        scanf("%s",a);

        if(a[0] == '1')
            count++;

        for(i = 1; i < n; i++)
        {
            if(a[i]=='0')
            {
                printf("+");
            }
            else
            {
                if(count == 1)
                {
                    printf("-");
                    count--;
                }
                else
                {
                    printf("+");
                    count++;
                }
            }
        }
        printf("\n");
    }


int main()
{

    int t;
    scanf("%d",&t);

    while(t>0)
    {
        t--;
        fn();
    }
    return 0;
}
