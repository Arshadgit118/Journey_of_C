/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum=0,r,num;
    printf("enter the input number:");
    scanf("%d",&num);
    int n=num;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d\n",sum);
    if(sum==num)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }

    return 0;
}
