#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int  data;
    struct Node *next;
};
struct Node *head=NULL;
void insertNode()
{
    if(head==NULL)
    {
        head=(struct Node*)malloc(sizeof(Node));
        printf("Enter the data:");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else
    {
        struct Node *temp;
        temp=(struct Node*)malloc(sizeof(Node));
        printf("Enter the new data:");
        scanf("%d",&temp->data);
        temp->next=head;
        head=temp;
    }
}
void display()
{
    struct Node *temp1;
    temp1=head;
    while (temp1!=NULL)
    {
        int data=temp1->data;
        printf("%d\t",data);
        temp1=temp1->next;

    }
}

int main()
{
    int choice;
    do
    {
        printf("\n1:insert Node at beggining\n");
        printf("2:Display Node\n");
        printf("=======Enter the choice==========\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertNode();
            break;

        case 2:
            display();
            break;
        }
    }
    while(choice!=3);


    return 0;
}
