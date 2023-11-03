void disEmpAscendingInSallary (){
    for(int i=0;i<count;i++){
        for(int j=i+1;j<count;j++){

            if(emp[i].sallary>emp[j].sallary){
                int temp=emp[i].sallary;
                emp[i].sallary=emp[j].sallary;
                emp[j].sallary=temp;

            }
        }



    }

printf("\n===============Employee in Ascending order by sallary======================\n");

for(int i=0;i<count;i++){

            printf("id:%d\tName:%s\tEmail:%s\tContact:%d\tSalary:%ld\n",emp[i].id,emp[i].name,emp[i].email,emp[i].contact,emp[i].sallary);

 }

}
