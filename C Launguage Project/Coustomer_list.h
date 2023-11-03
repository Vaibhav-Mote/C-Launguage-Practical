void cust_list()
{


    FILE *ptr;
    ptr = fopen("C:\\Users\\Vaibhav\\Desktop\\c\\CustomerInformation.text", "r+");
    printf("\n<<================================== Customer List============================================>>\n");
    printf("\nId\t\tName\t\tCity\t\tMo.No\t\tEmail");

    while(fscanf(ptr,"%d%s%s%d%s",&cst.id,cst.cust_name,cst.city,&cst.mo,cst.email)!=-1)
    {
        printf("\n%d\t\t%s\t\t%s\t\t%d\t\t%s\n",cst.id,cst.cust_name,cst.city,cst.mo,cst.email);
    }



    printf("\n<<============================================================================================>>\n");
}
