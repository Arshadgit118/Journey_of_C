/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char a[50];
    printf("enter the string:");
    scanf("%s",a);
    int len=strlen(a);//length of the input
    int i,j,count=0;
    for(i=0,j=len-1;i<len;i++,j--)
    {
        if(a[i]==a[j])
        {
        count++;
      }
    
    }
    if(count==len)
    {
        printf("palindrome");
        
    }
    else
    {
        printf("not a palindrome");
    }
    

    return 0;
}
