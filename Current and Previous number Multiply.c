/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("enter the input number:");
    scanf("%d",&a);
    if(a%2!=0){
    int res=a+1;
    printf("%d",res*a);
    }
    else
    {
        int res1=a-1;
        printf("%d",res1*a);
    }
    
    return 0;
}