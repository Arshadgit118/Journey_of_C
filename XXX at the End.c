/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

/*int main()
{
    char *s;
    int i,count=0;
    printf("enter the string:");
    scanf("%s",s);
    int len=strlen(s);
    for(i=0;i<=len;i++)
    {
        if(s[i]=='X'||s[i]=='x')
        {
            count++;
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    for(int j=0;j<count;j++)
    {
        printf("x");
    }
    
    //printf("%d\n",count);
    //printf("%s",s);

    return 0;
}*/

int main()
{
    char *s,*res;
    int i,count=0,j;
    printf("enter the string:");
    scanf("%s",s);
    int len=strlen(s);
    for(i=0;i<=len;i++)
    {
        if(s[i]!='x')
        {
            printf("%c",s[i]);

        }
    }
   // printf("\n%d",j);
    for(i=0;i<=len;i++)
    {
        if(s[i]=='x')
        {
            printf("%c",s[i]);
            
        }
    }
   //  printf("\n%d",j);
    //res[j+1]='\0';
    //printf("\n%s",res);
    return 0;
    }
