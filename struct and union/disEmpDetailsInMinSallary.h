void disEmpDetailsInMinSallary(){
 int min=60000;
    int k=0;
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            if(emp[i].sallary<min&&emp[i].sallary>10000){
                min=emp[i].sallary;
                k=i;
            }

        }
    }
   printf("The minimum sallary is:%d\n",emp[k].sallary);
   printf("id:%d\tName:%s\tEmail:%s\tContact:%d\tSalary:%ld\n",emp[k].id,emp[k].name,emp[k].email,emp[k].contact,emp[k].sallary);



}
