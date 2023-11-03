/*
Assignments
____________________________________________________________________
Objective: Develop application for book store by using linked list and user should store book
data like as   id, name, price, author public.

Case 1: Add New Book but book info should not be Duplicate
Case 2: View All Books
Case 3: Search book by id or name or author etc
Case 4: delete book by id
Case 5: update book info by using id
Case 6:  count the book author wise
Case 7: count the book price wise
Case 8: count book publication wise
Case 9: arrange authors names as per book count by using descending order

*/


#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
struct bookstore
{
    int id,price;
    char bookname[90],authorname[90],publication[90];
    struct bookstore *next;
};
struct bookstore *head=NULL;

void insertbook()
{
    if(head==NULL)
    {
        head=(struct bookstore *)malloc(sizeof(bookstore));
        printf("Enter the id:");
        scanf("%d",&head->id);
        printf("Enter the price:");
        scanf("%d",&head->price);
        printf("Enter the bookname:");
        scanf("%s",&head->bookname);
        printf("Enter the author name:");
        scanf("%s",&head->authorname);
        printf("Enter the publication name:");
        scanf("%s",&head->publication);
        head->next=NULL;
    }
    else
    {
        struct bookstore *temp;
        temp=(struct bookstore *)malloc(sizeof(bookstore));
        printf("Enter the id:");
        scanf("%d",&temp->id);
        printf("Enter the price:");
        scanf("%d",&temp->price);
        printf("Enter the bookname:");
        scanf("%s",&temp->bookname);
        printf("Enter the author name:");
        scanf("%s",&temp->authorname);
        printf("Enter the publication name:");
        scanf("%s",&temp->publication);
        temp->next=head;
        head=temp;

    }
}

//=====================================================================================================================

void display()
{
    struct bookstore *temp3;
    temp3=head;
    printf("\n===========================Display Book Information===========================\n");
    while (temp3!=NULL)
    {
        printf("\nid:%d\tbookname:%s\tauthorname:%s\tprice:%d\tPublication:%s",temp3->id,temp3->bookname,temp3->authorname,temp3->price,temp3->publication);
        temp3=temp3->next;
    }
}
//=============================================================================================================================
void searchbookbyid()
{
    struct bookstore *temp3;
    temp3=head;
    int searchid;
    printf("Enter the id you want to search :");
    scanf("%d",&searchid);
    while(temp3->next!=NULL)
    {
        if(temp3->id==searchid)
        {
            printf("\nid:%d\tbookname:%s\tauthorname:%s\tprice:%d\tPublication:%s",temp3->id,temp3->bookname,temp3->authorname,temp3->price,temp3->publication);
        }
        temp3=temp3->next;
    }
}

//==================================================================================================================================
void deletebookbyid()
{
    struct bookstore *temp, *temp1;
    temp = head;
    int searchid;
    printf("Enter the ID you want to search and delete: ");
    scanf("%d", &searchid);

    while (temp != NULL)
    {
        if (temp->id == searchid)
        {
            if (temp == head)
            {
                head = temp->next;
            }
            else
            {
                temp1->next = temp->next;
            }

            int data = temp->id;
            printf("%d is deleted\n", data);
            free(temp);
            temp=NULL;
            return;
        }
        temp1 = temp;
        temp = temp->next;
    }
    printf("Book with ID %d not found\n", searchid);
}

//==================================================================================================================================

void updateBookInfoById()
{
    struct bookstore *temp;
    int searchid;
    printf("Enter the id to update the book info:");
    scanf("%d",&searchid);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->id==searchid)
        {
            printf("Enter the new price:");
            scanf("%d",&temp->price);
            printf("Enter the new bookname:");
            scanf("%s",&temp->bookname);
            printf("Enter the new author name:");
            scanf("%s",&temp->authorname);
            break;

        }
        temp=temp->next;
    }

}

//===================================================================================================================================

void countBookAuthorWise()
{
    struct bookstore *temp1, *temp2;
    temp1 = head;
    while (temp1 != NULL)
    {
        int count = 1;
        int flag = 0;
        temp2 = head;
        while (temp2->authorname!= temp1->authorname)
        {

            if (strcmp(temp1->authorname, temp2->authorname) == 0)
            {
                flag = 1;
                break;
            }
            temp2 = temp2->next;
        }

        if (flag == 0)
        {
            temp2 = temp1;
            while (temp2 != NULL)
            {
                if (temp1 != temp2 && strcmp(temp1->authorname, temp2->authorname) == 0)
                {
                    count++;
                }
                temp2 = temp2->next;
            }
            printf("\nAuthor: %s\tCount: %d\n", temp1->authorname, count);
        }

        temp1 = temp1->next;
    }
}


//==================================================================================================================================
void countBookPublicationwise()
{
    struct bookstore *temp,*temp1;
    temp=head;
    while(temp!=NULL)
    {
        int flag=0,count=1;
        temp1=head;
        while(temp1->publication!=temp->publication)
        {
            if(strcmp(temp1->publication,temp->publication)==0)
            {
                flag=1;
                break;
            }
            temp1=temp1->next;
        }
        if(flag==0)
        {
            temp1=head;
            while(temp1!=NULL)
            {
                if(temp1!=temp&&(strcmp(temp1->publication,temp->publication)==0))
                {
                    count++;
                }
                temp1=temp1->next;
            }

            printf("\npublication :%s count:%d",temp->publication,count);
        }
        temp=temp->next;
    }
}


//===================================================================================================================================
void countBookPriceWise()
{
    struct bookstore *temp,*temp1;
    temp=head;
    while(temp!=NULL)
    {
        temp1=head;
        int flag=0,count=1;
        while(temp1!=temp)
        {
            if(temp1->price==temp->price)
            {
                flag=1;
                break;
            }
            temp1=temp1->next;
        }
        if(flag==0)
        {
            temp1=head;
            while(temp1!=NULL)
            {
                if((temp1!=temp)&&(temp->price==temp1->price))
                {
                    count++;
                }
                temp1=temp1->next;
            }
            printf("\nPrice of book :%d count:%d",temp->price,count);
        }
        temp=temp->next;
    }
}
//=================================================================================================================================
void arrangeAuthorNPerBookCountdescedingOrder()
{
    struct bookstore *temp1, *temp2,*temp3;
    temp1 = head;
    int i=0;
    int countarrsize=1;
    struct abc
    {
        char authorname[90];
        int authorcount;
    };
    struct abc *arr;
    arr=(struct abc*)malloc(sizeof(struct abc));
    while (temp1 != NULL)
    {
        int count = 1;
        int flag = 0;
        temp2 = head;
        while (strcmp(temp2->authorname, temp1->authorname)!=0)
        {
            if (strcmp(temp1->authorname, temp2->authorname) == 0)
            {
                flag = 1;
                break;
            }
            temp2 = temp2->next;
        }



        if (flag == 0)
        {
            temp2 = head;
            while (temp2 != NULL)
            {
                if (temp1 != temp2 && strcmp(temp1->authorname, temp2->authorname) == 0)
                {
                    count++;
                }
                temp2 = temp2->next;
            }
            // printf("\nAuthor: %s\tCount: %d\n", temp1->authorname, count);
            temp3=head;
            int flag2=0;
            while(temp1!=temp3)
            {
                if(strcmp(temp1->authorname,temp3->authorname)==0)
                {
                    flag2=1;
                    break;
                }
                temp3=temp3->next;
            }

            if(flag2==0)
            {

                arr[i].authorcount=count;
                strcpy(arr[i].authorname,temp1->authorname);
                i++;
                countarrsize++;
                arr=(struct abc*)realloc(arr,countarrsize * sizeof(struct abc));
            }
        }
        temp1 = temp1->next;
    }
    countarrsize--;

    //shorting array
    for(int i=0; i<countarrsize-1; i++)
    {
        for(int j=i+1; j<countarrsize; j++)
        {
            if(arr[i].authorcount<arr[j].authorcount)
            {
                struct abc temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }

    }

    for(int i=0; i<countarrsize; i++)
    {
        printf("Author name:%s\tNumber of Book:%d\n",arr[i].authorname,arr[i].authorcount);

    }


}
//============================================================================================================================

int main()
{
    int choice;
    do
    {
        printf("\n\n1: Add New Book but book info should not be Duplicate ");
        printf("\n2: View All Books  ");
        printf("\n3: Search book by id or name or author etc ");
        printf("\n4: delete book by id  ");
        printf("\n5: update book info by using id  ");
        printf("\n6:  count the book author wise ");
        printf("\n7: count the book price wise");
        printf("\n8: count book publication wise  ");
        printf("\n9: arrange authors names as per book count by using descending order");
        printf("\n\n%c %c %c %c %c %c ====>> Enter your choice <<====%c %c %c %c %c %c\n",1,1,1,1,1,1,1,1,1,1,1,1);
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            insertbook();
            break;
        case 2:
            display();
            break;
        case 3:
            searchbookbyid();
            break;
        case 4:
            deletebookbyid();
            break;
        case 5:
            updateBookInfoById();
            break;
        case 6:
            countBookAuthorWise();
            break;
        case 7:
            countBookPriceWise();
            break;
        case 8:
            countBookPublicationwise();
            break;
        case 9:
            arrangeAuthorNPerBookCountdescedingOrder();
        default:
            break;

            printf("Invalid choice...");


        }
    }
    while(1);


    return 0;
}
