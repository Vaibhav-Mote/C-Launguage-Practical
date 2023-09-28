//WAP to check the number is palindrom prime armstrong perfect number using switch case and do while loop
#include<stdio.h>
#include "palindromNo.h"
#include "primeNo.h"
#include"armstrongNo.h"
#include "perfectNo.h"
int main()
{
    int no,choice;

    do
    {

        printf("\nEnter the number:");
        scanf("%d",&no);
        printf("\n1:Palindrom Number\n");
        printf("2:Prime Number\n");
        printf("3:Armstrong Number\n");
        printf("4:Perfect Number\n");

        printf("\nEnter your choice:");
        scanf("%d",&choice);


        switch(choice)
        {
        case 1:
            palindromNo(no);
            break;
        case 2:
            primeNo(no);
            break;
        case 3:

            armstrongNo(no);
            break;
        case 4:
            perfectNo(no);
            break;

        default:
            printf("Invalid choice");
        }


    }
    while(choice<=4);


    return 0;
}
