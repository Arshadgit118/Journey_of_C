/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int counteven=0,countodd=0;
    scanf("%d",&n);
    
    int arr[n];
    float res1,res2;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++)
    {

    if(arr[i]%2==0)
    {
     res1=res1+arr[i];
     counteven++;
       
    }
    else if(arr[i]%2==1)
    {
     res2=res2+arr[i];
     countodd++;
    }
    
    }
    printf("%f\n",res1/counteven);
    printf("%f\n",res2/countodd);
    printf("%d\n%d\n",counteven,countodd);

    return 0;
}
