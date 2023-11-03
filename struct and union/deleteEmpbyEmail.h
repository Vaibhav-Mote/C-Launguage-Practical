#include<string.h>
void  deleteEmpbyEmail(){
 char upemail[90];
 printf("Enter the email id:");
 scanf("%s",&upemail);
 for(int i=0;i<count;i++){
    if(strcmp(upemail,emp[i].email)==0){
        for(int j=i;j<count-1;j++){
             emp[j].id=emp[j+1].id;
             strcpy(emp[j].name,emp[j+1].name);
             strcpy(emp[j].email,emp[j+1].email);
             emp[j].contact=emp[j+1].contact;


        }

        count--;
        printf("===============Employee deleted of email==================");

    }


 }


}
