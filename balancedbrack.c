#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 7
char stack[MAX];
char ch1,ch2;
int top=-1;
void push(char item)
{

    stack[++top]= item;
}
int isMatch(char ch1,char ch2)
{
        if(ch1=='('&& ch2==')')
            return 1;
        else if(ch1=='['&&ch2==']')
            return 1;
             else if(ch1=='{'&& ch2=='}')   
                        return 1;
                  else 
                  return 0;
}

char pop()
{
    char ch;
    if(top==-1)
      {
        printf("unbalanced\n");
        exit(0);
      }
      ch=stack[top];
      top--;
      return ch;
}
int isEmpty()
{
    if(top==-1)
        return 1;
    else 
        return 0;

}      
int main()
{
    char exp[MAX],ch,temp;
    int i;
    printf("enter the expression:\n");
    scanf("%s",exp);
    for(i=0;exp[i]!='\0';i++)
    {
        ch=exp[i];
        if(ch=='('||ch=='['||ch=='{')
                push(ch);
        else 
        {
            temp=pop();
            if(!isMatch(temp,ch))
             {
                  printf("not balanced\n");
                  exit(0);
             }

        }        
    }
    if(isEmpty())
        printf("balanced\n");
    else 
        printf("not balanced\n");
    return 0;
            
}







