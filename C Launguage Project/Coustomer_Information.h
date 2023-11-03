#include<stdio.h>
#include"Customer_Entry.h"
#include"Coustomer_Search.h"
#include"Coustomer_list.h"
#include"Coustomer_Update.h"


void customer()
{
    printf("\n==============================>> Customer Information <<========================================\n");
    int choice;
    do{
    printf("\n1:Customer Entry");
    printf("\n2:Customer Search");
    printf("\n3:Customer List");
    printf("\n4:Customer Update");
    printf("\n5:Back");
    printf("\nEnter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {

    case 1:
        cust_entry();
        break;
    case 2:
         cust_search();
        break;
    case 3:
         cust_list();
        break;
    case 4:
        cust_update();
        break;
    default:
        printf("\n==========>Invalid choice<==============\n");

    }



    }
     while(choice!=5);
}
