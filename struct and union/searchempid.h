void searchempid(){
    int searchid;
    int flag=-1;
    printf("Enter the id You search Employee:");
    scanf("%d",&searchid);
 for(int i=0;i<count;i++){
    if(searchid==emp[i].id){
        flag=i;
        break;
    }
 }
 if(flag!=-1){
    printf("\n=================Employee found=====================\n");
   printf("id:%d\tName:%s\tEmail:%s\tContact:%d\tSalary:%ld\n",emp[flag].id,emp[flag].name,emp[flag].email,emp[flag].contact,emp[flag].sallary);
 }
 else{
    printf("================not found===================");
 }

}
