/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
struct Node*tail=NULL;
void insertAtBeg(char data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    else
    tail=newNode;
    head=newNode;
}
void insertAtEnd(char data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=tail;
    newNode->next=NULL;
    if(head!=NULL)
    {
        tail->next=newNode;
    }
    else
    head=newNode;
    tail=newNode;
    
}
void reverse()
{
    struct Node*temp=tail;
    while(temp!=NULL)
    {
    printf("%c\n",temp->data);
    temp=temp->prev;
    }
    printf("\n");
}
void display()
{
    struct Node*temp=head;
    while(temp!=NULL){
    printf("%c\n",temp->data);
    temp=temp->next;
    }
}

int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
       insertAtBeg(str[i]);
    }
    display();
    printf("after reversing:");
    //display();

    return 0;
}
