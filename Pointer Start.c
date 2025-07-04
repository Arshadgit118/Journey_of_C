/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=5,*ptr1;
    ptr1=&a;
    int **ptr2;
    *ptr2=ptr1;
    printf("%d\n",a);//value of a
    printf("%p\n",&a);//address of a 
    printf("%p\n",ptr1);//value of ptr1
    printf("%d\n",*ptr1);//access value of a
    printf("%p\n",&ptr1);//address of ptr1
    printf("%p\n",*ptr2);//value of ptr2
    printf("%p\n",&ptr2);//address of ptr2
    printf("%d\n",**ptr2);//access of a
    return 0;
}