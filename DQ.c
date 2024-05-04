/* implementation of deqeueue using arrays*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int dequeue[MAX];
int rear = -1,front = -1;
void insert_front(int);
void insert_rear(int);
void delete_front();
void delete_rear();
void display();
int main()
{
    int choice,item;
    char ch;
    while(1)
    {
        printf("--MENU--\n");
        printf("1.insertfront\n");
        printf("2.insertrear\n");
        printf("3.deletefront\n");
        printf("4.deleterear\n");
        printf("5.display\n");
        printf("6.exit\n");
        printf("enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : printf("enter the element:\n");
                    scanf("%d",&item);
                    insert_front(item);
                    break;
            case 2: printf("enter the element:\n");
                    scanf("%d",&item);
                    insert_rear(item);
                    break;
            case 3: delete_front();
                    break;
            case 4: delete_rear();
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
                    break;
            default: printf(" enter a valid choice\n");
        }
    }
}

void insert_front(int item)
{
    if((rear+1)% MAX==front)
    {
        printf("dequeue is full\n");
    }
    else if(front==-1)
        {
            front=rear=0;
            dequeue[front]=item;

        }
        else if(front==0)
            {
                front=MAX-1;
                dequeue[front]=item;
            }
            else
            {
                front--;
                dequeue[front]=item;
            }
}
void insert_rear(int item)
{
    if((rear+1)%MAX==front)
    {
        printf("dequeue is full\n");
    }
    else if(front==-1)
        {
            front=rear=0;
            dequeue[rear]=item;
        }
        else 
        {
            rear = (rear+1)%MAX;
            dequeue[rear]=item;
        }
}
void delete_front()
{
    if(front==-1)
    {
        printf("dequeue is empty");
    }
    else
    {
        printf("deleted element is %d",dequeue[front]);
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
void delete_rear()
{
    if(front==-1)
    {
        printf("dequeue is empty\n");
    }
    else
    {
        printf("delted element is %d",dequeue[rear]);
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(rear==0)
            {
                rear=MAX-1;
            }
            else
            {
                rear--;
            }
    }
}
void display()
{
    int i=front;
    if(front==-1)
    {
        printf("dequeue is empty\n");
    
    }
    else
    {
        while(i!=rear)
        {
            printf("%4d",dequeue[i]);
            i=(i+1)%MAX;
        }
        printf("%4d",dequeue[rear]);
    }
}
