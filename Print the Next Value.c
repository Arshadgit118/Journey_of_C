
#include <stdio.h>
#include<string.h>

int main()
{
    int i,j,count=0;
    char ch[200];
    printf("enter the string:");
    scanf("%s",ch);
    int len=strlen(ch);
    //printf("%d",len);
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=0;j<len;j++)
        {
        if(ch[i]==ch[j])
        count++;
        //printf("%d",count);
        }
        if(count==1)
        {
        printf("%c",ch[i]+1);
        break; 
        }   
    }
 
    return 0;
}