
void viewbooks()
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
        printf("\nWhich departments  View Books :");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:

        {


            printf("\n=================================================================>> Computer Departments Books <<=========================================================================>>\n");
             ptr=fopen("CS.text","r+");

            if (ptr == NULL)
            {
                printf("Error opening the file.\n");
                return;
            }

            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
            {
                printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
            }

            fclose(ptr);



        }

        break;

        case 2:

        {


            printf("\n=================================================================>> Electrical Departments Books <<=========================================================================>>\n");

            ptr=fopen("Electrical.text","r+");

            if (ptr == NULL)
            {
                printf("Error opening the file.\n");
                return;
            }


            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno) == 8)
            {
                 printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
            }

            fclose(ptr);

        }

        break;

        case 3:
        {


            printf("\n=================================================================>> Civil Departments Books <<=========================================================================>>\n");

            ptr=fopen("Civil.text","r+");

            if (ptr == NULL)
            {
                printf("Error opening the file.\n");
                return;
            }


            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno) == 8)
            {
                 printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
            }

            fclose(ptr);

        }



        break;

        case 4:
        {

            printf("\n=================================================================>> Electronic Departments Books <<=========================================================================>>\n");

            ptr=fopen("Electronic.text","r+");

            if (ptr == NULL)
            {
                printf("Error opening the file.\n");
                return;
            }

            //struct Book b; // Assuming you have a struct named "Book" defined
            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno) == 8)
            {
                 printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
            }

            fclose(ptr);

        }
        break;

        case 5:
        {

            printf("\n=================================================================>> Mecahnical Departments Books <<=========================================================================>>\n");

            ptr=fopen("Mecha.text","r+");

            if (ptr == NULL)
            {
                printf("Error opening the file.\n");
                return;
            }

            //struct Book b; // Assuming you have a struct named "Book" defined
            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno) == 8)
            {
                 printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
            }

            fclose(ptr);

        }

        break;

        case 6:
        {


            printf("\n=================================================================>> Architecture Departments Books <<=========================================================================>>\n");

            ptr=fopen("Architecture.text","r+");

            if (ptr == NULL)
            {
                printf("Error opening the file.\n");
                return;
            }


            printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");
            while (fscanf(ptr, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno) == 8)
            {
                 printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
            }

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


