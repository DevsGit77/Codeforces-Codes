#include <stdio.h>

int main()
{
    char name[100];
    gets(name);
    int i,c=0,r=0;



    for(i=0; name[i] != '\0';i++)
    {
             for(int j=i-1; j>=0; j--)
             {
                 if(name[i] == name[j])
                 {
                     r=1;
                     break;
                 }
             }
             if(r==0)
             {
                 c++;
             }
             r=0;
    }
    if(c%2==0)
    {
       printf("CHAT WITH HER!\n");
    }
    else
    printf("IGNORE HIM!\n");

    return 0;
}
