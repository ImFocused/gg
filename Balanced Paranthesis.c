#include<stdio.h>
#include<stdlib.h>
#define size 5
char stack[100],str[100],top=-1;
void push(char item)
{
    stack[++top]=item;


}
void pop()
{
    stack[top--];

}
void check_balance()
{
    if(top==-1)
    {
        printf("\n\t Stack is balanced");

    }
    else
    {
        printf("\n\t Not balanced");
    }


}
int main()
{   
    int i=0;
    printf("\n\t Enter Expression:-");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        if(str[i]=='(')
        {
            push(str[i]);
        }
        if(str[i]==')')
        {
            pop(str[i]);
        }
        i++;

    }
    check_balance();
    return 0;
}
