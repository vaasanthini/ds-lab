#include<stdio.h>
#include<string.h>
#define MAX 7
char stack[MAX];
int top=-1,item;
int i;

void push(char item)
{
    stack[++top]=item;

}
char pop()
{
    return stack[top--];

}
int isPalindrome(char str[])
{
    int i,n;
    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
        push(str[i]);
    }
    
    if(n%2==1)
        i=(n/2)+1;
    else
        i=n/2;

    while(str[i]!= '\0')
    {
        char item=pop();
        if(item!= str[i])       
        return 0;
        i++;
    }
     return 1;
}
int main()
{
    char str[MAX];
    printf("enter the input string:\n");
    scanf("%s",str);
    if(isPalindrome(str))
        printf("given string is a palindrome\n");
    else
        printf("given string is not a palindrome\n");
    getchar();
    return 0;        
}


