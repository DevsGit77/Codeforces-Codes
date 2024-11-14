#include <stdio.h>
#include <string.h>


int main(){

    int n;
    scanf("%d",&n);
    while(n--)
    {
        char s[55];
        scanf("%s",s);
        int l,c1=0,c2=0,irr=0;
        l = strlen(s);

        for(int i=0; i<l; i++){
            if(s[i]=='(') c1++;
            else c2++;
        }

        if(s[0] == '(' && s[1] == ')' && l == 2)
        {
            printf("NO\n");
        }
        else
        {
            for(int i=1; i<l; i++){
                if(s[i] == s[i-1]){
                    irr=1;
                    break;
                }
            }
            printf("YES\n");
            if(irr==1)
            {
                for(int k=0; k<2*l; k++)
                {
                    if(k%2==0)
                    {
                        printf("(");
                    }
                    else
                    {
                        printf(")");
                    }
                }
            }
            else
            {
                for(int m=0; m<2*l; m++)
                {
                    if(m<=l-1)
                    {
                        printf("(");
                    }
                    else
                    {
                        printf(")");
                    }
                }
            }
            printf("\n");
        }

    }

    return 0;
}
