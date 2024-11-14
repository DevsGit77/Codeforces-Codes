#include <stdio.h>
#include <string.h>


int main()
{
    char s[1000];
    char t[1000];
    int i,j,r=0,len;

    scanf("%s",s);
    scanf("%s",t);

    len = strlen(s);

    for(i=0,j=len-1;i<len;i++,j--)
    {
        if(s[i] == t[j])
        {
            r=1;
        }
        else
        {
            r=0;
            break;
        }
    }

    if(r == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
