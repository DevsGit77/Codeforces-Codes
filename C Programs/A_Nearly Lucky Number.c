#include <stdio.h>
#include <string.h>

int main()
{
    char s[10000];
    int l, i, count=0;

    scanf("%s", s);
    l = strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]=='4' || s[i] == '7')
        {
            count++;
        }
    }
    if(count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
