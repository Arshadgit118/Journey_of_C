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
    char str[500],character;
    printf("enter the string:");
    scanf("%s ",str);
    scanf("%c",&character);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(character==str[i])
        {
            printf("%d",i);
        }
    }

    return 0;
}
