/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    int j;
    char ch[50],vow[50];
    printf("Enter the String:");
    scanf("%s",ch);
    int len=strlen(ch);
    //printf("%d",len);
    for(int i=0;i<=len;i++)
    {
        if(ch[i]=='a'||ch[i]=='A'|| ch[i]=='e'||ch[i]=='E'|| ch[i]=='i'||ch[i]=='I'|| ch[i]=='o'|| ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
        {
            vow[j]=ch[i];
            j++;
           // printf("%c",ch[i]);
        }
    }
    printf("%s ",vow);

    return 0;
}