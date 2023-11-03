#include<string.h>
//Customer search id
void search_cid()
{
    int id;
    printf("Enter the id:");
    scanf("%d",&id);
    FILE *ptr;
    int flag=0;
    ptr = fopen("C:\\Users\\Vaibhav\\Desktop\\c\\CustomerInformation.text", "r+");
    while(fscanf(ptr,"%d%s%s%d%s",&cst.id,&cst.cust_name,&cst.city,&cst.mo,&cst.email)!=-1)
    {

        if(cst.id==id)
        {    printf("\n<<================================== Customer Found =========================================>>\n");
            printf("\nId\t\tName\t\tCity\t\tMo.No\t\tEmail");
            printf("\n%d\t\t%s\t\t%s\t\t%d\t\t%s\n",cst.id,cst.cust_name,cst.city,cst.mo,cst.email);
            printf("\n<<============================================================================================>>\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
     printf("\n.........Customer Not Found.........\n");

    }
    fclose(ptr);


}
//------------------------------------------------------------------------------------------------------------------------------------------
//Customer search by Name

void search_cname()
{
    char cname[90];
    printf("Enter the Customer Name:");
    scanf("%s",&cname);
    int flag=0;
   ptr=fopen("CustomerInformaton.txt","r");
    while(fscanf(ptr,"%d%s%s%d%s",&cst.id,&cst.cust_name,&cst.city,&cst.mo,&cst.email)!=-1)
    {

        if(strcmp(cst.cust_name,cname)==0)
        {
            printf("\n<<================================== Customer Found =========================================>>\n");
            printf("\nId\t\tName\t\tCity\t\tMo.No\t\tEmail");
            printf("\n%d\t\t%s\t\t%s\t\t%d\t\t%s\n",cst.id,cst.cust_name,cst.city,cst.mo,cst.email);
            printf("\n<<============================================================================================>>\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
     printf("\n.........Customer Not Found.........\n");

    }
    fclose(ptr);


}

//--------------------------------------------------------------------------------------------------------------------------------------------
void cust_search()
{
    int choice,id;
    printf("\n1:Search Customer by Id:");
    printf("\n2:Search Customer by Name:");
    printf("\nEnter your choice:\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        search_cid();
        break;
    case 2:
        search_cname();
        break;
    default:
        printf("Invalid choice");

    }
}

