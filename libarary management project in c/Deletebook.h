void deletebooks()
{


    int choice;
    do
    {
        printf("\n1:CS");
        printf("\n2:Electrical");
        printf("\n3:Civil");
        printf("\n4:Electronic");
        printf("\n5:Mecha");
        printf("\n6:Architecture");
        printf("\n7:Back");
        printf("\nWhich Departments to Delote Book :");
        scanf("%d",&choice);


        switch(choice)
        {
        case 1:
        {


            int id,flag=0;;
            printf("Enter the id to delete the book:");
            scanf("%d",&id);
            FILE *ptr;
            FILE *ptr1;
            ptr=fopen("CS.text","r+");
            ptr1=fopen("C.text","w+");


            while(fscanf(ptr,"%d%s%s%s%d%d%d%d",&b.id,b.stname,b.name,b.Author,&b.Quantity,&b.Price,&b.Count,&b.rackno)!=EOF)
            {


                if(id==b.id)
                {
                    flag=1;
                    continue;
                    fprintf(ptr1,"\n");
                }
                else
                {

                    fprintf(ptr1,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);

                }
            }
            fclose(ptr);
            fclose(ptr1);
            if(flag)
            {
                printf("\n%d is data deleted................",id);
                remove("CS.text");

                rename("C.text", "CS.text");

            }
            else
            {
                printf("%d id not found",id);
                remove("C.text");
            }


        }

        break;



//==============================================================================================================================
        case 2:
        {

            int id,flag=0;;
            printf("Enter the id to delete the book:");
            scanf("%d",&id);
            FILE *ptr;
            FILE *ptr1;
           ptr=fopen("Electrical.text","r+");
            ptr1=fopen("C.text","w+");


            while(fscanf(ptr,"%d%s%s%s%d%d%d%d",&b.id,b.stname,b.name,b.Author,&b.Quantity,&b.Price,&b.Count,&b.rackno)!=EOF)
            {


                if(id==b.id)
                {
                    flag=1;
                    continue;
                    fprintf(ptr1,"\n");
                }
                else
                {

                    fprintf(ptr1,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);

                }
            }
            fclose(ptr);
            fclose(ptr1);
            if(flag)
            {
                printf("\n%d is data deleted................",id);
                remove("Electrical.text");

                rename("C.text", "Electrical.text");

            }
            else
            {
                printf("%d id not found",id);
                remove("C.text");
            }



        }

        break;

        //===================================================================================================================================

        case 3:
        {
            int id,flag=0;;
            printf("Enter the id to delete the book:");
            scanf("%d",&id);
            FILE *ptr;
            FILE *ptr1;
            ptr=fopen("Civil.text","r+");
            ptr1=fopen("C.text","w+");


            while(fscanf(ptr,"%d%s%s%s%d%d%d%d",&b.id,b.stname,b.name,b.Author,&b.Quantity,&b.Price,&b.Count,&b.rackno)!=EOF)
            {


                if(id==b.id)
                {
                    flag=1;
                    continue;
                    fprintf(ptr1,"\n");
                }
                else
                {

                    fprintf(ptr1,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);

                }
            }
            fclose(ptr);
            fclose(ptr1);
            if(flag)
            {
                printf("\n%d is data deleted................",id);
                remove("Civil.text");

                rename("C.text", "Civil.text");

            }
            else
            {
                printf("%d id not found",id);
                remove("C.text");
            }


        }
        break;
        //=================================================================================================================================
        case 4:
        {
            int id,flag=0;;
            printf("Enter the id to delete the book:");
            scanf("%d",&id);
            FILE *ptr;
            FILE *ptr1;
            ptr=fopen("Electronic.text","r+");
            ptr1=fopen("C.text","w+");


            while(fscanf(ptr,"%d%s%s%s%d%d%d%d",&b.id,b.stname,b.name,b.Author,&b.Quantity,&b.Price,&b.Count,&b.rackno)!=EOF)
            {


                if(id==b.id)
                {
                    flag=1;
                    continue;
                    fprintf(ptr1,"\n");
                }
                else
                {

                    fprintf(ptr1,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);

                }
            }
            fclose(ptr);
            fclose(ptr1);
            if(flag)
            {
                printf("\n%d is data deleted................",id);
                remove("Electronic.text");

                rename("C.text", "Electronic.text");

            }
            else
            {
                printf("%d id not found",id);
                remove("C.text");
            }



        }
        break;
        //===================================================================================================================================
        case 5:
            {
                int id,flag=0;;
            printf("Enter the id to delete the book:");
            scanf("%d",&id);
            FILE *ptr;
            FILE *ptr1;

            ptr=fopen("Mecha.text","r+");
            ptr1=fopen("C.text","w+");


            while(fscanf(ptr,"%d%s%s%s%d%d%d%d",&b.id,b.stname,b.name,b.Author,&b.Quantity,&b.Price,&b.Count,&b.rackno)!=EOF)
            {


                if(id==b.id)
                {
                    flag=1;
                    continue;
                    fprintf(ptr1,"\n");
                }
                else
                {

                    fprintf(ptr1,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);

                }
            }
            fclose(ptr);
            fclose(ptr1);
            if(flag)
            {


                 printf("\n%d is data deleted................",id);
                remove("Mecha.text");

                rename("C.text", "Mecha.text");


            }
            else
            {
                printf("%d id not found",id);
                remove("C.text");
            }


            }
            break;
            //===========================================================================================================================

        case 6:
            {
                 int id,flag=0;;
            printf("Enter the id to delete the book:");
            scanf("%d",&id);
            FILE *ptr;
            FILE *ptr1;
           ptr=fopen("Architecture.text","r+");
            ptr1=fopen("C.text","w+");


            while(fscanf(ptr,"%d%s%s%s%d%d%d%d",&b.id,b.stname,b.name,b.Author,&b.Quantity,&b.Price,&b.Count,&b.rackno)!=EOF)
            {


                if(id==b.id)
                {
                    flag=1;
                    continue;
                    fprintf(ptr1,"\n");
                }
                else
                {

                    fprintf(ptr1,"%d\t%s\t%s\t%s\t%d\t%d\t%d\t%d\n",b.id,b.stname,b.name,b.Author,b.Quantity,b.Price,b.Count,b.rackno);

                }
            }
            fclose(ptr);
            fclose(ptr1);
            if(flag)
            {
                printf("\n%d is data deleted................",id);
                remove("Architecture.text");

                rename("C.text", "Architecture.text");

            }
            else
            {
                printf("%d id not found",id);
                remove("C.text");
            }


            }
            case 7:
            break;
            default:
             printf("\n=================================================================>> Invalid choice <<=========================================================================>>\n");


        }





    }
    while(choice!=7);




}
