#include<stdio.h>
#define MAX 4
int Top = -1;
int STACK[MAX];



void push(){
    if(Top==MAX-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        printf("Enter the number");
        int value;
        scanf("%d",&value);
        Top++;
        STACK[Top]=value;
    }
}

int pop(){
    if(Top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("The element which is poped %d \n",STACK[Top]);
        Top--;
    }
}

void display()
{
    printf("The Elemnts are:\n");
    for(int i=0;i<=Top;i++)
    {
        printf("%d  \n",STACK[i]);
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3.display\n");
        printf("4. Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid input");
        }
    }


}
