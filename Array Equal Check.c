/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n=5,a[n],a1[n],count1=0,count2=0;
    int len=sizeof(a)/sizeof(a[0]);
    printf("%d is the size",len);
    for(int i=0;i<n;i++)
    {
        int p;
        scanf("%d",&p);
        if(p<=-1)
        {
            break;
        }
        else
        {
            a[i]=p;
            count1++;
        }
    }
    for(int i=0;i<n;i++)
    {
        int g;
        scanf("%d",&g);
        if(g<=-1)
        {
            break;
        }
        else
        {
            a1[i]=g;
            count2++;
        }
    }
    if(count1==count2){
        printf("same array");
    }
    if(count1!=count2)
    {
        printf("not same");
    }
    
    
    
    
    
    /* printf("%d",a[i]);
        if(a1[i]<=-1){
            printf("give the array greater than 0");
        }
        if(a1[i]==a[n])
        {
            printf("%d",a1[i]);
        }
    }*/

    return 0;
}