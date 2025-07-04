/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    while(1){
    int a;
    printf("enter the input:");//input in 1 or 0
    scanf("%d",&a);//1 or 0
        if(a==0)
        {
            printf("input is low\n");
            break;//if 0 loop terminates
        }
        else if(a==1)
        {
            int x,y,res;
            printf("Give the input for x and y:\n");
            scanf("%d%d",&x,&y);
            res=x+y;
            printf("%d\n",res);//if 1 adds the input
            
        }
        else
        {
            printf("give low/high\n");//if 1 or 0 is not given
        }
    }

    return 0;
}