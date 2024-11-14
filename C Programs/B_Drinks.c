#include <stdio.h>

int main()
{
    int n,i;
    double sum = 0.0;
    double p,q=0.0;
    scanf("%d",&n);

    for(i = 0;i<n;i++)
    {
        scanf("%lf",&p);
        sum = sum + p;
    }
    q = (double)sum/n;
    printf("%0.5lf",q);


    return 0;
}
