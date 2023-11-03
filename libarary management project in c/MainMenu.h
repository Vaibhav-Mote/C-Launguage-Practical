void mainmenu()
{
    int choice;
    do
    {


        printf("\n=================================================================>> Welcome to Library <<=========================================================================>>\n");
        printf("\n1:Add book");
        printf("\n2:Delete book");
        printf("\n3:Edit book Record");
        printf("\n4:Search book");
        printf("\n5:Issue book");
        printf("\n6:View book");
        printf("\n7:issue record");
        printf("\n8:Close the application");
        printf("\n=================================================================>> Enter Your Choice <<=========================================================================>>\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            addbooks();
            break;

        case 2:
            deletebooks();
            break;

        case 3:
           editbooks();
            break;

        case 4:
            searchbooks();
            break;

        case 5:
            issuebooks();
            break;
        case 6:
            viewbooks();
            break;
        case 7:
            issuerecord();
            break;
        case 8:
            closeapplication();
          break;

default:
printf("\n=================================================================>> Invalid Choice <<====================================================================================>>\n");

        }
    }
    while(choice!=8);

}
