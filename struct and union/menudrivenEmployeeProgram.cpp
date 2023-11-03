#include<stdio.h>
#include "addEmpDetails.h"
#include "desplayAllEmpDetails.h"
#include "searchempid.h"
#include "updateEmpDetails.h"
#include "deleteEmpbyEmail.h"
#include "displaylistcountemp.h"
#include "disEmpAscendingInSallary.h"
#include "disEmpDetailsInHighestSallary.h"
#include "disEmpDetailsInMinSallary.h"

int main()
{
    int choice;
    do
    {

        printf("\n1: Add Employee Details:\n");
        printf("2: Display all Employee Details:\n");
        printf("3: Search Employee by id:\n");
        printf("4: Update Employee Details by name:\n");
        printf("5: Delete Employee by Email:\n");
        printf("6: Display list count of Employee in company:\n");
        printf("7: Display list of Employee in ascending order in Employee sallary :\n");
        printf("8: Display the Employee Details in Highest salary:\n");
        printf("9: Display the Employee Details in minimum salary 10000 to maximum salary 60000:\n");
        printf("10:Exit");
        printf("\n==================Enter your choice====================\n");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:
            addEmpDetails();
            break;
        case 2:
            desplayAllEmpDetails();
            break;

        case 3:
            searchempid();
            break;
        case 4:
            updateEmpDetails();
            break;
        case 5:
            deleteEmpbyEmail();
            break;
        case 6:
            displaylistcountemp();
            break;
        case 7:
            disEmpAscendingInSallary();
            break;
        case 8:
            disEmpDetailsInHighestSallary();
            break;
        case 9:
            disEmpDetailsInMinSallary();



        }




    }

    while(choice!=10);



    return 0;
}
