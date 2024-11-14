#include <stdio.h>
#include <string.h>

int main()
{
    int i,n,countA = 0, countD = 0;
    char str[100000];
    scanf("%d",&n);
    scanf("%s", str);

    for(i=0; i<n; i++)
    {
        if(str[i] == 'A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }

    if(countA>countD)
    {
        printf("Anton\n");
    }
    else if(countA<countD)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;

}
