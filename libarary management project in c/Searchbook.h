#include<string.h>

void searchbooks()
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
        printf("\nWhich departments  Search Books :");
        scanf("%d",&choice);


        switch(choice)
        {
        case 1:
        {
            int subchoice;
            printf("\n1:Search by ID");
            printf("\n2:Search by Name");
            printf("\n=================================================>>How to Search book==> Enter Your Choice <<====================================================================>>\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {

            case 1:
            {

                int flag=0,count=0;
                int id;
                printf("Enter the book Id to Search book:");
                scanf("%d",&id);
                FILE *ptr;
                ptr=fopen("CS.text","r+");
                while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
                {
                    if(id==b.id)
                    {
                        ++count;
                        if(count==1)
                        {
                            printf("\n=====================================================================>>%d Book Found <<=============================================================================>>\n",id);
                            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                        }
                        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                        flag=1;

                    }

                }

                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %d Book Not Found <<=========================================================================>>\n",id);

                }
            }
            break;


            case 2:

            {

                int flag=0,count=0;
                char bookname[90];
                printf("Enter the book Name to Search book:");
                scanf("%s",bookname);
                FILE *ptr;
                ptr=fopen("CS.text","r+");



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


                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);

                }
            }
            break;
            default:
                printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");

            }

        }
        break;
        //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

        case 2:
        {
            int subchoice;
            printf("\n1:Search by ID");
            printf("\n2:Search by Name");
            printf("\n=================================================>>How to Search book==> Enter Your Choice <<====================================================================>>\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {

            case 1:
            {

                int flag=0,count=0;
                int id;
                printf("Enter the book Id to Search book:");
                scanf("%d",&id);
                FILE *ptr;
                ptr=fopen("Electrical.text","a+");
                while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
                {
                    if(id==b.id)
                    {
                        ++count;
                        if(count==1)
                        {
                            printf("\n=====================================================================>>%d Book Found <<=============================================================================>>\n",id);
                            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                        }
                        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                        flag=1;

                    }

                }

                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %d Book Not Found <<=========================================================================>>\n",id);

                }
            }
            break;


            case 2:

            {

                int flag=0,count=0;
                char bookname[90];
                printf("Enter the book Name to Search book:");
                scanf("%s",bookname);
                FILE *ptr;
                ptr=fopen("Electrical.text","a+");

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


                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);

                }
            }
            break;
            default:
                printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");

            }

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------------------------

        case 3:
        {
            int subchoice;
            printf("\n1:Search by ID");
            printf("\n2:Search by Name");
            printf("\n=================================================>>How to Search book==> Enter Your Choice <<====================================================================>>\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {

            case 1:
            {

                int flag=0,count=0;
                int id;
                printf("Enter the book Id to Search book:");
                scanf("%d",&id);
                FILE *ptr;
                ptr=fopen("Civil.text","a+");
                while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
                {
                    if(id==b.id)
                    {
                        ++count;
                        if(count==1)
                        {
                            printf("\n=====================================================================>>%d Book Found <<=============================================================================>>\n",id);
                            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                        }
                        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                        flag=1;

                    }

                }

                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %d Book Not Found <<=========================================================================>>\n",id);

                }
            }
            break;


            case 2:

            {

                int flag=0,count=0;
                char bookname[90];
                printf("Enter the book Name to Search book:");
                scanf("%s",bookname);
                FILE *ptr;
                ptr=fopen("Civil.text","a+");

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


                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);

                }
            }
            break;
            default:
                printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");

            }

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------------------------



        case 4:
        {
            int subchoice;
            printf("\n1:Search by ID");
            printf("\n2:Search by Name");
            printf("\n=================================================>>How to Search book==> Enter Your Choice <<====================================================================>>\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {

            case 1:
            {

                int flag=0,count=0;
                int id;
                printf("Enter the book Id to Search book:");
                scanf("%d",&id);
                FILE *ptr;
                ptr=fopen("Electronic.text","a+");
                while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
                {
                    if(id==b.id)
                    {
                        ++count;
                        if(count==1)
                        {
                            printf("\n=====================================================================>>%d Book Found <<=============================================================================>>\n",id);
                            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                        }
                        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                        flag=1;

                    }

                }

                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %d Book Not Found <<=========================================================================>>\n",id);

                }
            }
            break;


            case 2:

            {

                int flag=0,count=0;
                char bookname[90];
                printf("Enter the book Name to Search book:");
                scanf("%s",bookname);
                FILE *ptr;
                ptr=fopen("Electronic.text","a+");

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


                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);

                }
            }
            break;
            default:
                printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");

            }

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------------------------

        case 5:
        {
            int subchoice;
            printf("\n1:Search by ID");
            printf("\n2:Search by Name");
            printf("\n=================================================>>How to Search book==> Enter Your Choice <<====================================================================>>\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {

            case 1:
            {

                int flag=0,count=0;
                int id;
                printf("Enter the book Id to Search book:");
                scanf("%d",&id);
                FILE *ptr;
                ptr=fopen("Mecha.text","a+");
                while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
                {
                    if(id==b.id)
                    {
                        ++count;
                        if(count==1)
                        {
                            printf("\n=====================================================================>>%d Book Found <<=============================================================================>>\n",id);
                            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                        }
                        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                        flag=1;

                    }

                }

                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %d Book Not Found <<=========================================================================>>\n",id);

                }
            }
            break;


            case 2:

            {

                int flag=0,count=0;
                char bookname[90];
                printf("Enter the book Name to Search book:");
                scanf("%s",bookname);
                FILE *ptr;
                ptr=fopen("Mecha.text","a+");

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


                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);

                }
            }
            break;
            default:
                printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");

            }

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------------------------

        case 6:
        {
            int subchoice;
            printf("\n1:Search by ID");
            printf("\n2:Search by Name");
            printf("\n=================================================>>How to Search book==> Enter Your Choice <<====================================================================>>\n");
            scanf("%d",&subchoice);

            switch(subchoice)
            {

            case 1:
            {

                int flag=0,count=0;
                int id;
                printf("Enter the book Id to Search book:");
                scanf("%d",&id);
                FILE *ptr;
                ptr=fopen("Architecture.text","a+");
                while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
                {
                    if(id==b.id)
                    {
                        ++count;
                        if(count==1)
                        {
                            printf("\n=====================================================================>>%d Book Found <<=============================================================================>>\n",id);
                            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
                        }
                        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
                        flag=1;

                    }

                }

                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %d Book Not Found <<=========================================================================>>\n",id);

                }
            }
            break;


            case 2:

            {

                int flag=0,count=0;
                char bookname[90];
                printf("Enter the book Name to Search book:");
                scanf("%s",bookname);
                FILE *ptr;
                ptr=fopen("Architecture.text","a+");

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


                fclose(ptr);
                if(!flag)
                {
                    printf("\n=================================================================>> %s Book Not Found <<=========================================================================>>\n",bookname);

                }
            }
            break;
            default:
                printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");

            }

        }
        break;
        //-------------------------------------------------------------------------------------------------------------------------------------------------------------
        case 7:
            break;
        default:
            printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");


        }


    }
    while(choice!=7);
}
