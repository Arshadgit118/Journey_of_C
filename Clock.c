/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<unistd.h>

int main()
{
    int i,j,k,min,n,s;
    printf("enter the hour:min:sec");
    scanf("%d%d%d",&n,&min,&s);
    k=n;
    j=min;
    i=s;
    while(1){
    for(;k<24;k++)
    {
        for(;j<=59 ;j++)
        {
            for(;i<=59;i++){
               printf("%2.2d : %2.2d :%2.2d\n",k,j,i);
                /*printf(":");
                printf("%d",j);
                printf(":");
                printf("%d",i);*/
                sleep(1);
            }
            i=0;
        }
        j=0;
    }
    k=0;
}
    return 0;
}