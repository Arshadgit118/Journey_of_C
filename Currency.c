/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cur,count=0,res1,res2,res3,res4;
    printf("enter the input number");
    scanf("%d",&cur);
    if(cur%50>0)
    {
        printf("give amount in multiples more than 50");
        return 0;
    }
    if(cur>=500)
    {
        
        count=cur/500;
        cur=cur%500;
        printf("%dx500\n",count);
    }
    if(cur>=200)
    {
        count=cur/200;
        cur=cur%200;
        printf("%dx200\n",count);
    }
    if(cur>=100)
    {
        count=cur/100;
        cur=cur%100;
        printf("%dx100\n",count);
    }
    if(cur>=50)
    {
        count=cur/50;
        cur=cur%50;
        printf("%dx50\n",count);
    }
    
    return 0;
}