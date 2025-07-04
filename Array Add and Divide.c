/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,res1,res2,arr[5]={10,22,17,23,1};
    int counteven=0,countodd=0;
    printf("the size of array is:%ld\n",sizeof(arr));
    for(int i=0;i<4;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(i=0;i<4;i++)
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
    printf("%d\n",res1/2);
    printf("%d\n",res2/2);
    printf("%d\n%d\n",counteven,countodd);

    return 0;
}