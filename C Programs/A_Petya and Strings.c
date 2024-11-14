#include <stdio.h>
#include <string.h>

void uppercase(char a[100])
{
    for(int i=0; a[i] != '\0'; i++)
    {
        if(a[i] < 97)
        {
            a[i] = a[i]+32;
        }
    }
}


int main()
{
    char s1[100],s2[100];
    int v;

    scanf("%s",s1);
    scanf("%s",s2);

    uppercase(s1);
    uppercase(s2);

    v = strcmp(s1,s2);

    printf("%d\n",v);


    return 0;
}
