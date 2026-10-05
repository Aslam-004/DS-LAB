#include<stdio.h>
#define MAX 5
int f=-1;
int r=-1;
int q[MAX];

void INSERT(int it)
{
    if(r==MAX-1)
    {
        printf("Queue is OVERFLOW\n");
    }
    else
    {
        if(f==-1)
        {
            f=0;
        }
        r=r+1;
        q[r]=it;
        printf("ELEMENT IS INSERTTED\n");
    }
}

void DELETE()
{
    if(f==-1 || f>r)
        printf("Queue is UNDERFLOW\n");
    else
    {
        int it=q[f];
        printf("Elemenated element %d\n",it);
        if(f==r)
        {
            f=r=-1;
        }
        else
            f=f+1;
    }
}

void DISPLAY()
{
    if(f==-1 || f>r)
        printf("Queue is UNDERFLOW\n");
    else
    {
        printf("QUEUE ELEMNTS ARE\n");
        for(int i=f;i<=r;i++)
        {
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    int it;

    while(1)
    {
        printf("1.INSERTION\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n\n");
        printf("Enter the Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d",&it);
            INSERT(it);
            break;

        case 2:
            DELETE();
            break;

        case 3:
            DISPLAY();
            break;

        case 4:
            return 0;

        default:
            printf("INVALID CHOICE\n");
        }
    }
}
