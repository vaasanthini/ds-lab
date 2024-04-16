#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1;
void push(int);
void pop();
void display();
int main()
{
   int choice,item;
   while(1)
   {
        printf("-- MENU--");
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("enter choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
           case 1: printf("enter the element :\n");
                  scanf("%d",&item);
                  push(item);
                  break;
          case 2: pop();
                 break;
          case 3: display();
                 break;
          case 4: exit(0);
                 break;
          default: printf("enter a valid choice\n");
          }
         }        
     }
void push(int item) 
{
   if(top==MAX-1)
     printf("stack overflow");
   else
   {
     top = top+1;
     stack[top] = item;
   }
}

void pop()
{
   int item;
   if(top == -1)
     printf("stack underflow\n");
   else
   { 
    item= stack[top];
    printf("deleted element is %d", item);
    top--;
    }
}

void display()
{
   int i;
   if(top==-1)
     printf("stack is empty\n");
   else
   {
     printf("stack content\n");
     for(i=top;i>-1;i--)         
       printf("%4d",stack[i]);
    }    
   
   
   }  
                                      		 	                 
                  

   










