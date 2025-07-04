/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int roll[5]={1,2,3};
    int age[3]={11,21,30};
    int mark[3]={23,22,21};
    printf("%d %d %d\n",&roll[0],&age[0],&mark[0]);
    printf("%d %d% d\n",&roll[1],&age[1],&mark[1]);
    printf("%d %d %d\n",&roll[2],&age[2],&mark[2]);

    return 0;
}