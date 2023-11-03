#include<stdio.h>
struct Customer{
    int id;
    char cust_name[100];
    char city[90];
    int mo;
    char email[50];
};
 struct Customer cst;
 FILE *ptr,*ptr1;

 void cust_entry(){

  ptr = fopen("C:\\Users\\Vaibhav\\Desktop\\c\\CustomerInformation.text", "a+");
 printf("Enter Customer Information\n");
 printf("Enter the Customer Id:");
 scanf("%d",&cst.id);
 printf("Enter the Customer Name:");
 scanf("%s",cst.cust_name);
 printf("Enter the Customer City:");
 scanf("%s",cst.city);
 printf("Enter the Customer Mo:");
 scanf("%d",&cst.mo);
 printf("Enter the Customer Email:");
 scanf("%s",cst.email);
 fprintf(ptr,"%d\t%s\t\t%s\t\t%d\t\t%s\n",cst.id,cst.cust_name,cst.city,cst.mo,cst.email);
 printf("\n==============================>> Information Added Successfully <<=========================\n");
 fclose(ptr);



 }
