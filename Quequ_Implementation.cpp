#include<stdio.h>
int main()
{
    int size,rear=-1,front=0,choice,value,i;
    printf("Enter the size of queue:");
    scanf("%d",&size);
    int queue[size];
    do
    {

        printf("\n1:Push");
        printf("\n2:Pop");
        printf("\n3:Display");
         printf("\nEnter your Choice:");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            if(rear==size-1)
            {
                printf("Queue is Overflow\n");
            }
            else
            {
                rear++;
                printf("Enter the value:");
                scanf("%d",&value);
                queue[rear]=value;
            }
            break;
        case 2:
            if(rear==-1)
            {
                printf("Queue is Underflow\n");
//01234
            }
            else
            {    printf("%d value is Pop\n",queue[i]);
                for(int i=0; i<=rear; i++)
                {

                    queue[i]=queue[i+1];


                }
                   size--;
                    rear--;


            }
            break;
        case 3:
            for(int i=0; i<size; i++)
            {
                printf("%d ",queue[i]);
            }


            break;
        default:
            printf("Wrong Choice");



        }


    }
    while(1);


    return 0;
}
