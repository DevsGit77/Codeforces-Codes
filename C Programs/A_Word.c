#include <stdio.h>
#include <string.h>

int main()
{
    char s[105];

    int l,i,lccount=0,uccount=0;
    scanf("%s",s);
    l = strlen(s);

    for(i=0;i<l;i++)
    {
        if(s[i] >='A' && s[i] <= 'Z')
        {
            uccount++;
        }
        else
        {
            lccount++;
        }
    }

    if((lccount > uccount) || (lccount == uccount))
    {
        for(int j = 0;j<l;j++)
        {
            if(s[j] >= 'A' && s[j] <='Z')
            {
                s[j] = s[j]+32;
            }
            else
            {
                s[j] = s[j];
            }
        }

        printf("%s\n",s);
    }

    else if(uccount > lccount)
    {
        for(int k = 0;k<l;k++)
        {
            if(s[k] >= 'a' && s[k] <='z')
            {
                s[k] = s[k]-32;
            }
            else
            {
                s[k] = s[k];
            }
        }

        printf("%s\n",s);
    }


    return 0;
}
