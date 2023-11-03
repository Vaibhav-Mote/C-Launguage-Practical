void  cust_update()
{
    int id,flag=0;
    printf("\nEnter the Id You want Update Data:");
    scanf("%d",&id);
    FILE *ptr;
    FILE *ptr1;
    ptr=fopen("CustomerInformation.text","r+");
    ptr1=fopen("C111.text","w");


    while(fscanf(ptr,"%d%s%s%d%s",&cst.id,cst.cust_name,cst.city,&cst.mo,cst.email)!=EOF)
    {

        if(id==cst.id)

        {
            printf("Enter New Information\n");
            printf("Name:");
            scanf("%s",cst.cust_name);
            printf("City:");
            scanf("%s",cst.city);
            printf("Mo.No:");
            scanf("%d",&cst.mo);
            printf("Email:");
            scanf("%s",cst.email);
            //fprintf(ptr1,"%d\t%s\t\t%s\t\t%d\t\t%s\n",cst.id,cst.cust_name,cst.city,cst.mo,cst.email);
            flag=1;


        }

            fprintf(ptr1,"%d\t%s\t\t%s\t\t%d\t\t%s\n",cst.id,cst.cust_name,cst.city,cst.mo,cst.email);

    }


    fclose(ptr);
    fclose(ptr1);
    if(flag)
    {

        remove("CustomerInformation.text");

        rename("C111.text", "CustomerInformation.text");



        printf("\n==============================>> Information Updated Successfully <<=========================\n");
    }
    else
    {
        printf("Customer  ID %d not found.\n",id);
        //remove("CustomerInformation111.txt"); // Remove the temporary file
    }


}





