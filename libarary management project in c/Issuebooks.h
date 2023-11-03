#include<stdio.h>

struct IssuedBook
{
    int id;
    char stname[90],name[90],cat[90],IssuedDate[12],dueDate[12];

};
struct IssuedBook isub;

FILE *ptr1;

void issuebooks()
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
        printf("\nWhich departments Isshued  Book :");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:
        {
            char bookname[90];

            int flag=0,count=0;
            printf("Enter the book Name to Search book:");
            scanf("%s",bookname);
            ptr=fopen("CS.text","r+");
            ptr1=fopen("IssuedDataCS.text","a+");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                if(strcmp(bookname,b.name)==0)
                {
                    ++count;
                    if(count==1)
                    {
                        printf("\n=====================================================================>>%s Book Found <<===============================================================================>>\n",bookname);
                        printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                    }
                    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                    flag=1;
                }

            }
            if(flag)
            {
                printf("\n=================================================================>> Enter the Issued Book Information <<============================================================>>\n");
                printf("\nEnter the id:");
                scanf("%d",&isub.id);
                printf("\nEnter the Stname:");
                scanf("%s",&isub.stname);
                printf("\nEnter the Name:");
                scanf("%s",&isub.name);
                printf("\nEnter the Category:");
                scanf("%s",&isub.cat);
                printf("\nEnter the Book IssuedDate:");
                scanf("%s",&isub.IssuedDate);
                printf("\nEnter the Book DueDate:");
                scanf("%s",&isub.dueDate);
                fprintf(ptr1,"%d\t%s\t%s\t%s\t%s\t%s\n",isub.id,isub.stname,isub.name,isub.cat,isub.IssuedDate,isub.dueDate);
                printf("\n=================================================================>> Book Issued Successfully <<=========================================================================>>\n");


            }

            else
            {

                printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);


            }

            fclose(ptr);
            fclose(ptr1);

        }
        break;
        //------------------------------------------------------------------------------------------------------------------------------------------------
        case 2:
        {
            char bookname[90];

            int flag=0,count=0;
            printf("Enter the book Name to Search book:");
            scanf("%s",bookname);
            ptr=fopen("Electrical.text","r+");
            ptr1=fopen("IssuedDataElectrical.text","a+");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                if(strcmp(bookname,b.name)==0)
                {
                    ++count;
                    if(count==1)
                    {
                        printf("\n=====================================================================>>%s Book Found <<===============================================================================>>\n",bookname);
                        printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                    }
                    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                    flag=1;
                }

            }
            if(flag)
            {
                printf("\n=================================================================>> Enter the Issued Book Information <<============================================================>>\n");
                printf("\nEnter the id:");
                scanf("%d",&isub.id);
                printf("\nEnter the Stname:");
                scanf("%s",&isub.stname);
                printf("\nEnter the Name:");
                scanf("%s",&isub.name);
                printf("\nEnter the Category:");
                scanf("%s",&isub.cat);
                printf("\nEnter the Book IssuedDate:");
                scanf("%s",&isub.IssuedDate);
                printf("\nEnter the Book DueDate:");
                scanf("%s",&isub.dueDate);
                fprintf(ptr1,"%d\t%s\t%s\t%s\t%s\t%s\n",isub.id,isub.stname,isub.name,isub.cat,isub.IssuedDate,isub.dueDate);
                printf("\n=================================================================>> Book Issued Successfully <<=========================================================================>>\n");


            }

            else
            {

                printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);


            }

            fclose(ptr);
            fclose(ptr1);

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------
        case 3:
        {
            char bookname[90];

            int flag=0,count=0;
            printf("Enter the book Name to Search book:");
            scanf("%s",bookname);
            ptr=fopen("Civil.text","r+");
            ptr1=fopen("IssuedDataCivil.text","a+");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                if(strcmp(bookname,b.name)==0)
                {
                    ++count;
                    if(count==1)
                    {
                        printf("\n=====================================================================>>%s Book Found <<===============================================================================>>\n",bookname);
                        printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                    }
                    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                    flag=1;
                }

            }
            if(flag)
            {
                printf("\n=================================================================>> Enter the Issued Book Information <<============================================================>>\n");
                printf("\nEnter the id:");
                scanf("%d",&isub.id);
                printf("\nEnter the Stname:");
                scanf("%s",&isub.stname);
                printf("\nEnter the Name:");
                scanf("%s",&isub.name);
                printf("\nEnter the Category:");
                scanf("%s",&isub.cat);
                printf("\nEnter the Book IssuedDate:");
                scanf("%s",&isub.IssuedDate);
                printf("\nEnter the Book DueDate:");
                scanf("%s",&isub.dueDate);
                fprintf(ptr1,"%d\t%s\t%s\t%s\t%s\t%s\n",isub.id,isub.stname,isub.name,isub.cat,isub.IssuedDate,isub.dueDate);
                printf("\n=================================================================>> Book Issued Successfully <<=========================================================================>>\n");


            }

            else
            {

                printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);


            }

            fclose(ptr);
            fclose(ptr1);

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------
        case 4:
        {
            char bookname[90];

            int flag=0,count=0;
            printf("Enter the book Name to Search book:");
            scanf("%s",bookname);
            ptr=fopen("Electronic.text","r+");
            ptr1=fopen("IssuedDataElectronic.text","a+");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                if(strcmp(bookname,b.name)==0)
                {
                    ++count;
                    if(count==1)
                    {
                        printf("\n=====================================================================>>%s Book Found <<===============================================================================>>\n",bookname);
                        printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                    }
                    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                    flag=1;
                }

            }
            if(flag)
            {
                printf("\n=================================================================>> Enter the Issued Book Information <<============================================================>>\n");
                printf("\nEnter the id:");
                scanf("%d",&isub.id);
                printf("\nEnter the Stname:");
                scanf("%s",&isub.stname);
                printf("\nEnter the Name:");
                scanf("%s",&isub.name);
                printf("\nEnter the Category:");
                scanf("%s",&isub.cat);
                printf("\nEnter the Book IssuedDate:");
                scanf("%s",&isub.IssuedDate);
                printf("\nEnter the Book DueDate:");
                scanf("%s",&isub.dueDate);
                fprintf(ptr1,"%d\t%s\t%s\t%s\t%s\t%s\n",isub.id,isub.stname,isub.name,isub.cat,isub.IssuedDate,isub.dueDate);
                printf("\n=================================================================>> Book Issued Successfully <<=========================================================================>>\n");


            }

            else
            {

                printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);


            }

            fclose(ptr);
            fclose(ptr1);

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------
        case 5:
        {
            char bookname[90];

            int flag=0,count=0;
            printf("Enter the book Name to Search book:");
            scanf("%s",bookname);
            ptr=fopen("Mecha.text","r+");
            ptr1=fopen("IssuedDataMecha.text","a+");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                if(strcmp(bookname,b.name)==0)
                {
                    ++count;
                    if(count==1)
                    {
                        printf("\n=====================================================================>>%s Book Found <<===============================================================================>>\n",bookname);
                        printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                    }
                    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                    flag=1;
                }

            }
            if(flag)
            {
                printf("\n=================================================================>> Enter the Issued Book Information <<============================================================>>\n");
                printf("\nEnter the id:");
                scanf("%d",&isub.id);
                printf("\nEnter the Stname:");
                scanf("%s",&isub.stname);
                printf("\nEnter the Name:");
                scanf("%s",&isub.name);
                printf("\nEnter the Category:");
                scanf("%s",&isub.cat);
                printf("\nEnter the Book IssuedDate:");
                scanf("%s",&isub.IssuedDate);
                printf("\nEnter the Book DueDate:");
                scanf("%s",&isub.dueDate);
                fprintf(ptr1,"%d\t%s\t%s\t%s\t%s\t%s\n",isub.id,isub.stname,isub.name,isub.cat,isub.IssuedDate,isub.dueDate);
                printf("\n=================================================================>> Book Issued Successfully <<=========================================================================>>\n");


            }

            else
            {

                printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);


            }

            fclose(ptr);
            fclose(ptr1);

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------
        case 6:
        {
            char bookname[90];

            int flag=0,count=0;
            printf("Enter the book Name to Search book:");
            scanf("%s",bookname);
            ptr=fopen("Architecture.text","r+");
            ptr1=fopen("IssuedDataArchitecture.text","a+");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                if(strcmp(bookname,b.name)==0)
                {
                    ++count;
                    if(count==1)
                    {
                        printf("\n=====================================================================>>%s Book Found <<===============================================================================>>\n",bookname);
                        printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                    }
                    printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                    flag=1;
                }

            }
            if(flag)
            {
                printf("\n=================================================================>> Enter the Issued Book Information <<============================================================>>\n");
                printf("\nEnter the id:");
                scanf("%d",&isub.id);
                printf("\nEnter the Stname:");
                scanf("%s",&isub.stname);
                printf("\nEnter the Name:");
                scanf("%s",&isub.name);
                printf("\nEnter the Category:");
                scanf("%s",&isub.cat);
                printf("\nEnter the Book IssuedDate:");
                scanf("%s",&isub.IssuedDate);
                printf("\nEnter the Book DueDate:");
                scanf("%s",&isub.dueDate);
                fprintf(ptr1,"%d\t%s\t%s\t%s\t%s\t%s\n",isub.id,isub.stname,isub.name,isub.cat,isub.IssuedDate,isub.dueDate);
                printf("\n=================================================================>> Book Issued Successfully <<=========================================================================>>\n");


            }

            else
            {

                printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);


            }

            fclose(ptr);
            fclose(ptr1);

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
