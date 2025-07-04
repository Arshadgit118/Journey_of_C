/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int *s,*res,n;
    int i,count=0,j;
    scanf("%d",&n);
    printf("enter the string:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]!=0)
        {
            printf("%d ",s[i]);

        }
    }
   // printf("\n%d",j);
    for(i=0;i<n;i++)
    {
        if(s[i]==0)
        {
            printf("%d ",s[i]);
            
        }
    }
   //  printf("\n%d",j);
    //res[j+1]='\0';
    //printf("\n%s",res);
    return 0;
    }
