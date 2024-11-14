#include <stdio.h>
#include <string.h>


int main()
{
    char s[1001];
    int l;

    scanf("%s",s);
    l = strlen(s);

    if(l<1000)
    {
        if(s[0] >= 'A' && s[0] <= 'Z')
        {
            printf("%s\n",s);
        }
        else
        {
           s[0] = s[0] - 32;
           printf("%s\n",s);
        }
    }


    return 0;
}
