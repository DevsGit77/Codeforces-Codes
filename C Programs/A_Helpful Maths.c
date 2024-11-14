#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],temp;
    int l,i,j;
    scanf("%s",s);
    l = strlen(s);

    for(i=0; i<l-1; i++)
    {
        for(j=0; j<l-i-1; j++)
        {
            if(s[j] != '+')
            {
                if(s[j] > s[j+2])
                {
                    temp = s[j];
                    s[j] = s[j+2];
                    s[j+2] = temp;
                }
            }
        }
    }
    printf("%s",s);

    return 0;
}
