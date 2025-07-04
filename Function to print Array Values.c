/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fun(int*a,int len)
{
    for(int i=0;i<len;i++)
    {
    printf("%d ",a[i]);
    }
    
}

int main()
{
    int a[]={10,20,30,40,50,90,100};
    int len=sizeof(a)/sizeof(a[0]);
    fun(a,len);
    
    return 0;
}