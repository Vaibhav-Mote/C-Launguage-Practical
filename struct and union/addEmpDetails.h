#include<stdio.h>
struct Employee
{
    int id;
    char name[90];
    char email[90];
    int contact;
    long int sallary;

};
struct Employee emp[10];
int i=0;
int count=0;
 void addEmpDetails(){
            printf("Enter the Employee id:");
            scanf("%d",&emp[i].id);
            printf("Enter the Name:");
            scanf("%s",&emp[i].name);
            printf("Enter the Email id:");
            scanf("%s",&emp[i].email);
            printf("Enter your contact no:");
            scanf("%d",&emp[i].contact);
            printf("Enter the sallary:");
            scanf("%ld",&emp[i].sallary);
            i++;
            count++;
}
