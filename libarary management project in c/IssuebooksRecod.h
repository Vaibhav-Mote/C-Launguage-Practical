void issuerecord ()
{

    printf("\n=================================================================>> Computer Department Issued Book Record <<==============================================================>>\n");

    fclose(ptr1);
    ptr1=fopen("IssuedDataCS.text","r+");

    printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

    while (fscanf(ptr1, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
    {
        if(ptr1==NULL)
        {
            printf("\n=========================================================>> Computer Department No Issued Book Record <<==============================================================>>\n");

        }
        else
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);
        }

    }

    fclose(ptr1);

    ptr1=fopen("IssuedDataElectrical.text","r+");


           printf("\n=================================================================>> Electrical Department Issued Book Record <<==========================================================>>\n");
    printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

    while (fscanf(ptr1, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
    {
        if(ptr1==NULL)
        {
            printf("\n=================================================================>> Electrical Department No Issued Book Record <<========================================================>>\n");

        }
        else
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);

        }

    }

    fclose(ptr1);

    ptr1=fopen("IssuedDataCivil.text","r+");
            printf("\n=================================================================>> Civil Department Issued Book Record <<===================================================================>>\n");
    printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

    while (fscanf(ptr1, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
    {
        if(ptr1==NULL)
        {
            printf("\n=================================================================>> Civil Department No Issued Book Record <<==================================================================>>\n");

        }
        else
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);

        }
    }

    fclose(ptr1);

    ptr1=fopen("IssuedDataElectronic.text","r+");
           printf("\n=================================================================>> Electronic Department Issued Book Record <<=================================================================>>\n");
    printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

    while (fscanf(ptr1, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
    {

        if(ptr1==NULL)
        {
            printf("\n=================================================================>> Electronic Department No Issued Book Record <<===============================================================>>\n");

        }
        else
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);

        }
    }

    fclose(ptr1);

    ptr1=fopen("IssuedDataMecha.text","r+");
           printf("\n=================================================================>> Machanical Department Issued Book Record <<==================================================================>>\n");
    printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

    while (fscanf(ptr1, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
    {
        if(ptr1==NULL)
        {
            printf("\n=================================================================>> Mechanical Department No Issued Book Record <<===================================================================>>\n");

        }
        else
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);

        }

    }

    fclose(ptr1);

    ptr1=fopen("IssuedDataArchitecture.text","r+");
          printf("\n=================================================================>> Architecture Department Issued Book Record <<======================================================================>>\n");
    printf("ID\t\tstName\t\tName\t\tAuthor\t\tQuantity\t\tPrice\t\tCount\t\tRackNo\n");

    while (fscanf(ptr1, "%d %s %s %s %d %d %d %d", &b.id, b.stname, b.name, b.Author, &b.Quantity, &b.Price, &b.Count, &b.rackno)!=-1)
    {
        if(ptr1==NULL)
        {
            printf("\n=================================================================>> Architecture Department No Issued Book Record <<==================================================================>>\n");

        }
        else
        {
            printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t\t%d\t\t%d\t\t%d\n", b.id, b.stname, b.name, b.Author, b.Quantity, b.Price, b.Count, b.rackno);

        }

    }

    fclose(ptr1);


}
