#include <stdio.h>
#include <string.h>


int main()
{
    int n;
    scanf("%d",&n);

    while (n > 0)
    {
        char s[105];
        scanf("%s",s);
        int len;
        len = strlen(s);

        if(len <= 10)
        {
            printf("%s\n",s);
        }
        else
        {
            printf("%c%d%c\n",s[0],len-2,s[len-1]);
        }
        n--;
    }

    return 0;
}
