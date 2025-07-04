/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int min=0,max=1,next,n;
    printf("enter the input:");
    scanf("%d",&n);
    printf("%d%d",min,max);
    for(int i=3;i<=n;i++)
    {

        next=min+max;
        printf("%d",next);
        min=max;
        max=next;
    }

    return 0;
}