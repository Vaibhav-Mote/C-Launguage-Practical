
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct libary
{
    int associationNo;
    char title[100];
    char authorName[100];
    int price,issued=0;
};


int main()
{ int size=1;
struct libary ptr[10];
    int count=0;
    int choice;
    int j=0;
    do
    {
        printf("\n\n1:Add book information\n");
        printf("2:Display book information\n");
        printf("3:List of all book of given author.\n");
        printf("4:List the title of specified book.\n");
        printf("5:List the count of books in libary.\n");
        printf("6:List of book in order of association number.\n");
        printf("7:Exit\n\n");
        printf("*********************************************************************************************************************\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:
        {
            printf("Enter the association number:");
            scanf("%d",&ptr[j].associationNo);
            printf("Enter the title:");
            scanf("%s",&ptr[j].title);
            printf("Enter the author name:");
            scanf("%s",&ptr[j].authorName);
            printf("Enter the price:");
            scanf("%d",&ptr[j].price);
            j++;
            count++;
            size++;
        }


        break;

        case 2:
        {
          printf("\n========================================Display Book Information===================================================\n");
            for(int i=0; i<count; i++)
            {

                printf("\nAssociation no:%d",ptr[i].associationNo);
                printf("\tTitle:%s ",ptr[i].title);
                printf("\tAuthor Name:%s",ptr[i].authorName);
                printf("\t\tPrice:%d",ptr[i].price);
            }
            printf("\n========================================================================================================================\n");
            break;
        }

        case 3:
        {

            char name[90];
            int diff,flag=-1;
            printf("\nEnter the author name to find all book list:");
            scanf("%s",&name);
            for(int i=0; i<count; i++)
            {
                if(strcmp(ptr[i].authorName,name)==0)
                {
                    printf("Title:%s\n",ptr[i].title);
                    flag=i;
                }

            }
            if(flag==-1)
            {
                printf("not found \n");

            }

        }
        break;
        case 4:
        {
            int flag2=-1;
            char specifiedbook[90];
            printf("Enter the specifiedbook:");
            scanf("%s",&specifiedbook);
            printf("===================================================Book Information=====================================================================");
            for(int i=0; i<count; i++)
            {
                if(strcmp(ptr[i].title,specifiedbook)==0)
                {
                    printf("\nDisplay book information:");
                    printf("\nAssociation no:%d",ptr[i].associationNo);
                    printf("\nTitle:%s",ptr[i].title);
                    printf("\nAuthor Name:%s",ptr[i].authorName);
                    printf("\nPrice:%d",ptr[i].price);
                    flag2=0;
                }
            }
            if(flag2==-1)
            {
                printf("not found");
            }
        }
        break;
        case 5:
            printf("All book in libary is:%d",count);
            break;
        case 6:

            for(int i=0; i<count; i++)
            {
                for(int j=i+1; j<count; j++)
                {
                    if(ptr[i].associationNo>ptr[j].associationNo)
                    {
                        int temp=ptr[i].associationNo;
                        ptr[i].associationNo=ptr[j].associationNo;
                        ptr[j].associationNo=temp;
                    }
                }
            }
            printf("List of books in association order");
            for(int i=0; i<count; i++)
        {
                printf("\nAssociation no:%d",ptr[i].associationNo);
                printf("\tTitle:%s ",ptr[i].title);
                printf("\tAuthor Name:%s",ptr[i].authorName);
                printf("\tPrice:%d",ptr[i].price);
            }
            break;

default :
            printf("Invalid choice..");

        }

    }


    while(choice!=7);


    return 0;
}
