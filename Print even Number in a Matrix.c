/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,c,i,j,sum=0;
    printf("enter the row and column:");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("enter the input:");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",arr[i][j]);
            if(arr[i][j]%2==0)
            {
                sum=sum+arr[i][j];
                
            }
        }
        printf("\n");
    }
    printf("%d",sum);
    

    return 0;
}