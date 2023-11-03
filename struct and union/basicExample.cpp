
/*
#include<stdio.h>
#include<string.h>
struct Employe{
int id;
char name[100];
int sallary;
};
int main(){

struct Employe emp;
emp.id=1;
emp.name[1]='a';
strcpy(emp.name,"vaibhav");
emp.sallary=10000;

printf("name:%c\n",emp.name[1]);
printf("id:%d\n",emp.id);
printf("sallary:%d\n",emp.sallary);

return 0;
}
/*
-----------------------------------------------------------------------------------------------------

#include<stdio.h>
struct Employe{
int id;
char name[100];
int sallary;
};
int main(){

struct Employe emp;
scanf("%d %s %d",&emp.id,&emp.name,&emp.sallary);
printf("name:%s\n",emp.name);
printf("id:%d\n",emp.id);

printf("sallary:%d\n",emp.sallary);

return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>
struct Employee {
int id;
char name[90];
int sallary;

};
int main(){
struct Employee emp[4];
for(int i=0;i<2;i++){
    printf("Enter the id \n");
    scanf("%d",&emp[i].id);
    printf("Enter the name:\n");
    scanf("%s",&emp[i].name);
    printf("Enter the salary :\n");
    scanf("%d",&emp[i].sallary);
}
printf("\n");
printf("The information is:");
for(int i=0;i<5;i++){
    printf("id: %d\n",emp[i].id);
    printf("Name: %s\n",emp[i].name);
    printf("Salary: %d\n",emp[i].sallary);
    printf("\n");
}

return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------
Example: WAP to create structure name as Employee with field id,name and salary and create array of structure of size 5 and input the id of
 employee and search employee from array using its id if found show its data if not found then show message employee not found.

#include<stdio.h>
struct Employee{

int id;
char name[80];
int sallary;
};
int main(){
    int eid,flag=0,i;
struct Employee emp[5];
for(int i=0;i<2;i++){
    printf("Enter the id \n");
    scanf("%d",&emp[i].id);
    printf("Enter the name:\n");
    scanf("%s",&emp[i].name);
    printf("Enter the salary :\n");
    scanf("%d",&emp[i].sallary);
}
printf("Enter the id of Empoyee for you search:");
scanf("%d",&eid);
for(i=0;i<2;i++){
    if(eid==emp[i].id){
        flag=1;
        break;
    }

}


if(flag){
    printf("id is found");
    printf("\n%d\t%s\t%d",emp[i].id,emp[i].name,emp[i].sallary);

}
else{
    printf("id is not found");
}
return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
WAP to create structure name as Employee name, id and sal and arrange all employees in descending order by its sal


#include<stdio.h>
struct Employee{

int id;
char name[80];
int sallary;
};
int main(){
    int eid,flag=0,i;
struct Employee emp[5];
for(int i=0;i<2;i++){
    printf("Enter the id \n");
    scanf("%d",&emp[i].id);
    printf("Enter the name:\n");
    scanf("%s",&emp[i].name);
    printf("Enter the salary :\n");
    scanf("%d",&emp[i].sallary);
}
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
    if(emp[i].sallary>emp[j].sallary){
        int temp=emp[i].sallary;
        emp[i].sallary=emp[j].sallary;
        emp[j].sallary=temp;
    }
    }

}
printf("after shorting:\n");
for(int i=0;i<2;i++){
    printf("%d\t%s\t%d\n",emp[i].id,emp[i].name,emp[i].sallary);

}


}

*/



#include<stdio.h>
#include<math.h>
int main(){
int no1,no2;
printf("Enter the no:");
scanf("%d",&no1);
printf("\nEnter the no:");
scanf("%d",&no2);
int max,lcm;
 max=(no1>no2)?no1:no2;
int i=max;
while(i>=max){
    if((i%no1==0)&&(i%no2==0)){
        max=i;
        break;
    }
    i++;
}
printf("lcm:%d",max);




return 0;
}

































