#include<stdio.h>
struct Book
{

    int id;

    char stname[90];
    char  name[90];
    char  Author[90];
    int  Quantity;
    int Price;
    int Count;
    int rackno;
};
struct Book b;

FILE *ptr;
void addbooks()
{
    int choice;
    do
    {
        printf("\n1:CS");
        printf("\n2:Electrical");
        printf("\n3:Civil");
        printf("\n4:Electronic");
        printf("\n5:Mecha");
        printf("\n6:Architecture");
        printf("\n7:Back");
        printf("\nwhich departments to Add Book :");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:
        {

            ptr=fopen("CS.text","a+");
            printf("\n=================================================================>> Enter the book Information <<=========================================================================>>\n");
            printf("\nEnter the id:");
            scanf("%d",&b.id);
            printf("Enter the stname:");
            scanf("%s",b.stname);
            printf("Enter the name:");
            scanf("%s",b.name);
            printf("Enter the Author:");
            scanf("%s",b.Author);
            printf("Enter the Quantity:");
            scanf("%d",&b.Quantity);
            printf("Enter the price:");
            scanf("%d",&b.Price);
            printf("Enter the count:");
            scanf("%d",&b.Count);
            printf("Enter the rackno:");
            scanf("%d",&b.rackno);
            fprintf(ptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);
            fclose(ptr);
            printf("\n=================================================================>> Book Add Successfully <<=========================================================================>>\n");


        }

        break;
        case 2:
        {
            ptr=fopen("Electrical.text","a+");
           printf("\n=================================================================>> Enter the book Information <<=========================================================================>>\n");
            printf("\nEnter the id:");
            scanf("%d",&b.id);
            printf("Enter the stname:");
            scanf("%s",b.stname);
            printf("Enter the name:");
            scanf("%s",b.name);
            printf("Enter the Author:");
            scanf("%s",b.Author);
            printf("Enter the Quantity:");
            scanf("%d",&b.Quantity);
            printf("Enter the price:");
            scanf("%d",&b.Price);
            printf("Enter the count:");
            scanf("%d",&b.Count);
            printf("Enter the rackno:");
            scanf("%d",&b.rackno);
            fprintf(ptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);
            fclose(ptr);

        }

        break;
        case 3:
        {

            ptr=fopen("Civil.text","a+");
            printf("\n=================================================================>> Enter the book Information <<=========================================================================>>\n");
            printf("\nEnter the id:");
            scanf("%d",&b.id);
            printf("Enter the stname:");
            scanf("%s",b.stname);
            printf("Enter the name:");
            scanf("%s",b.name);
            printf("Enter the Author:");
            scanf("%s",b.Author);
            printf("Enter the Quantity:");
            scanf("%d",&b.Quantity);
            printf("Enter the price:");
            scanf("%d",&b.Price);
            printf("Enter the count:");
            scanf("%d",&b.Count);
            printf("Enter the rackno:");
            scanf("%d",&b.rackno);
            fprintf(ptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);
            fclose(ptr);
        }
        break;
        case 4:
        {

            ptr=fopen("Electronic.text","a+");
            printf("\n=================================================================>> Enter the book Information <<=========================================================================>>\n");
            printf("\nEnter the id:");
            scanf("%d",&b.id);
            printf("Enter the stname:");
            scanf("%s",b.stname);
            printf("Enter the name:");
            scanf("%s",b.name);
            printf("Enter the Author:");
            scanf("%s",b.Author);
            printf("Enter the Quantity:");
            scanf("%d",&b.Quantity);
            printf("Enter the price:");
            scanf("%d",&b.Price);
            printf("Enter the count:");
            scanf("%d",&b.Count);
            printf("Enter the rackno:");
            scanf("%d",&b.rackno);
            fprintf(ptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);
            fclose(ptr);
        }
        break;
        case 5:
        {
            ptr=fopen("Mecha.text","a+");
            printf("\n=================================================================>> Enter the book Information <<=========================================================================>>\n");
            printf("\nEnter the id:");
            scanf("%d",&b.id);
            printf("Enter the stname:");
            scanf("%s",b.stname);
            printf("Enter the name:");
            scanf("%s",b.name);
            printf("Enter the Author:");
            scanf("%s",b.Author);
            printf("Enter the Quantity:");
            scanf("%d",&b.Quantity);
            printf("Enter the price:");
            scanf("%d",&b.Price);
            printf("Enter the count:");
            scanf("%d",&b.Count);
            printf("Enter the rackno:");
            scanf("%d",&b.rackno);
            fprintf(ptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);
            fclose(ptr);

        }
        break;
        case 6:
        {
            ptr=fopen("Architecture.text","a+");
            printf("\n=================================================================>> Enter the book Information <<=========================================================================>>\n");
            printf("\nEnter the id:");
            scanf("%d",&b.id);
            printf("Enter the stname:");
            scanf("%s",b.stname);
            printf("Enter the name:");
            scanf("%s",b.name);
            printf("Enter the Author:");
            scanf("%s",b.Author);
            printf("Enter the Quantity:");
            scanf("%d",&b.Quantity);
            printf("Enter the price:");
            scanf("%d",&b.Price);
            printf("Enter the count:");
            scanf("%d",&b.Count);
            printf("Enter the rackno:");
            scanf("%d",&b.rackno);
            fprintf(ptr,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);
            fclose(ptr);

        }
        break;
        case 7:
            break;
        default:
        printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");


        }
    }
    while(choice!=7);

}
