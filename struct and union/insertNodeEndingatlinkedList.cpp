#include<stdio.h>
#include<stdlib.h>
struct InsertNEnde
{
    int data;
    struct InsertNEnde *next;
};
struct InsertNEnde *head=NULL;


void insertNodeatbig()
{
    if(head==NULL)
    {
        head=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
        printf("Enter the data:");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else
    {
        struct InsertNEnde *temp;
        temp=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
        printf("Enter the data:");
        scanf("%d",&temp->data);
        temp->next=head;
        head=temp;
    }
}

void insertend()
{
    if(head==NULL)
    {
        head=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
        printf("Enter the data:");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else
    {
        struct InsertNEnde *temp,*temp1;
        temp=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
        printf("Enter the data:");
        scanf("%d",&temp->data);
        temp1=head;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=NULL;
    }
}

void insertmid()
{
    if(head==NULL)
    {
        head=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
        printf("Enter the data:");
        scanf("%d",&head->data);
        head->next=NULL;
    }
    else if(head->next==NULL)
    {
        struct InsertNEnde *temp;
        temp=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
        printf("Enter the second node:");
        scanf("%d",&temp->data);
        head->next=temp;
        temp->next=NULL;
    }
    else
    {
        struct InsertNEnde *temp1,*temp2;
        int afterin,flag=0;
        printf("After insert:");
        scanf("%d",&afterin);
        temp1=head;
        while(temp1!=NULL)
        {
            temp2=temp1;
            if(temp1->data==afterin)
            {
                temp1=temp1->next;
                flag=1;
                break;
            }
            temp1=temp1->next;


        }
        if(flag)
        {
            struct InsertNEnde *temp3;
            temp3=(struct InsertNEnde*)malloc(sizeof(InsertNEnde));
            printf("Enter the data:");
            scanf("%d",&temp3->data);
            temp2->next=temp3;
            temp3->next=temp1;

        }


    }
}



void display()
{
    struct InsertNEnde *temp3;
    temp3=head;
    while (temp3!=NULL)
    {
        int data=temp3->data;
        printf("%d\t",data);
        temp3=temp3->next;

    }


}

void deletebeginning()
{
    if(head==NULL)
    {
        printf("\nlinked list is empty\n");
    }
    else
    {
        struct InsertNEnde *temp;
        temp=head;
        head=head->next;
        temp->next=NULL;
        int data=temp->data;
        printf("\n%d is deleted\n",data);
        free(temp);
        temp=NULL;
    }
}

void deleteatend()
{
    if(head==NULL)
    {
        printf("\nlinked list is empty\n");

    }
    else
    {
        struct InsertNEnde *temp,*temp1;
        if(head->next==NULL)
        {
            int data=head->data;
            free(head);
            head=NULL;
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp1=temp;
                temp=temp->next;
            }
            temp1->next=NULL;
            int data=temp->data;
            printf("\n%d id deleted",data);
            free(temp);

            temp=NULL;
        }
    }

}

void deleteatmid()
{

    if(head==NULL)
    {
        printf("linked list is empty");

    }
    else
    {
        struct InsertNEnde *temp,*temp1,*temp2;
        temp=head;
        int count=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count>2)
        {
            temp=head;
            int value;
            printf("Enter the value after deleted:");
            scanf("%d",&value);
            while(temp->next!=NULL)
            {
                if(temp->data==value)
                {
                    temp1=temp;
                    temp=temp->next;
                    temp2=temp->next;
                    temp1->next=temp2;
                    int data=temp->data;
                    printf("%d is deleted",data);
                    free(temp);
                    temp=NULL;
                }
                temp1=temp;
                temp=temp->next;
            }

        }
        else{
        printf("no mid element ");
        }
    }


}


int main()
{
    int choice;

    do
    {

        printf("\n1:insert node at biginning:");
        printf("\n2:insert node at end:");
        printf("\n3:insert node at mid:");
        printf("\n4:display");
        printf("\n5:delete at beginning");
        printf("\n6:delete at end");
        printf("\n7:delete at mid");


        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
     case 1:
        insertNodeatbig();
        break;
        case 2:
            insertend();
            break;
        case 3:
            insertmid();
            break;
        case 4:
            display();
            break;
        case 5:
            deletebeginning();
            break;
        case 6:
            deleteatend();
            break;
        case 7:
            deleteatmid();
            break;
        default:
            printf("wrong choice");




        }

    }
    while(1);


    return 0;
}
