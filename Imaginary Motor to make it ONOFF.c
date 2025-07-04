/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int high=980,medium=500,low=200;
    printf("HIGH=%d\nMEDIUM=%d\nLOW=%d\n",high,medium,low);
    int n;
    printf("the water level now is:");
    scanf("%d",&n);
    if(n<200){
        printf("TANK IS GONNA DRAIN\n");
        printf("MOTOR IS TURNED ON\n");
    for(n;n<=high;n++)
    {
        printf("%d ",n);
        n++;
        //printf("%d ",res1);
        if(n>=980)
        {
            printf("TANK FULL\n");
            printf("MOTOR IS TURNED OFF\n");
        }
    }
    }
    /*else if(n<=500)
    {
        printf("water in medium level");
    }
    else if(n<980)
    {
        printf("almost full");
    }*/
    else
    {
        printf("MOTOR OFF");
    }
    

    return 0;
}