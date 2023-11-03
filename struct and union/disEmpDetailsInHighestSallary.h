void disEmpDetailsInHighestSallary(){
    int max=emp[0].sallary;
    int k=0;
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            if(emp[i].sallary>max){
                max=emp[i].sallary;
                k=i;
            }

        }
    }
   printf("The higest sallary is:%d\n",emp[k].sallary);
   printf("id:%d\tName:%s\tEmail:%s\tContact:%d\tSalary:%ld\n",emp[k].id,emp[k].name,emp[k].email,emp[k].contact,emp[k].sallary);



}
