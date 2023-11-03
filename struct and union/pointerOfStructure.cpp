#include<stdio.h>
#include<stdlib.h>
struct Employee{

int id;
char name[90];
int salary;

};
int main(){
  struct Employee *emp;
  emp=(struct Employee*)malloc(sizeof(Employee));
  printf("Enter the id :");
  scanf("%d",&emp->id);
  printf("Enter the Name:");
  scanf("%s",&emp->name);
  printf("Enter the Sallary:");
  scanf("%d",&emp->salary);

  printf("=====Employee Informatio========\n");
  printf("Id:%d\n",emp->id);
  printf("Name:%s\n",emp->name);
  printf("Sallary:%d\n",emp->salary);




return 0;
}
