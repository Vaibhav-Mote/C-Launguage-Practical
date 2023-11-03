#include<string.h>
void  updateEmpDetails(){
    char upname[90];
 printf("Enter the name you want to update the data:");
 scanf("%s",&upname);
 int flag=-1;
 for(int i=0;i<count;i++){
    if(strcmp(upname,emp[i].name)==0){
            flag=i;
            break;
    }
 }
 if(flag!=-1){
            printf("Enter the Employee new id:");
            scanf("%d",&emp[flag].id);
            printf("Enter the new Name:");
            scanf("%s",&emp[flag].name);
            printf("Enter the  new Email id:");
            scanf("%s",&emp[flag].email);
            printf("Enter your  new contact no:");
            scanf("%d",&emp[flag].contact);
            printf("Enter the  new sallary:");
            scanf("%ld",&emp[flag].sallary);

 }
 else{
    printf("Employee not available");
 }


}
