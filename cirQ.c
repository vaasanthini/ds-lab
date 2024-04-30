/*C Program that implements Circular Queue operations*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int cirqueue[MAX];
int front =-1,rear=-1;
void insert(int);
void delete();
void display();
int main()
{
    int item,choice;
    char ch;
    while(1)
    {
        printf("\n--MENU--\n");
        printf("1.insert\n");
        printf("2.delete\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter the element:\n");
                    scanf("%d",&item);
                    insert(item);
                    break;
            case 2 :delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default: printf("invalid choice\n");

        }
    }
}
void insert(int item)
{
    if((rear+1)%MAX==front)
    {
        printf("cirqueue is full\n");
    }
    else
    {
	rear=(rear+1)%MAX;
	cirqueue[rear]=item;
        if(front==-1)
        {
 		front=0;
	}
    }
}
void delete()
{
    if(front==-1)
    {
        printf("cirqueue is empty\n");
    }
    else
    {
        printf("deleted element is %d\n",cirqueue[front]);
        if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=(front+1)%MAX;
        }
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("cirqueue is empty\n");
    }
    else
    {
        if(front<=rear)
        {
        	for(i=front;i<=rear;i++)
            		printf("%4d",cirqueue[i]);
        }
        else
        {
            for(i=front;i<=MAX-1;i++)
            {
                printf("%4d",cirqueue[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%4d",cirqueue[i]);
            }
        }
    }
}
