#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    FILE *ptr1;
    int choice;
    char filename[90];
    do
    {
        printf("\n1:write information in file demo.txt.....");
        printf("\n2:read information old in file.....");
        printf("\n3:find the no even odd and prime in file.....");
        printf("\n4:Create a new file and insert data in file...");

        printf("\n=======Enter your choice:============\n");
        scanf("%d",&choice);


        switch(choice)
        {

        case 1:
        {
            char data;
            ptr=fopen("demo.txt","w");
            printf("Enter the data in file:");
            do
            {
                scanf("%c",&data);
                //gets(data);
                if(data=='$')
                {
                    printf("data saved");
                    break;
                }
                fputc(data,ptr);
            }
            while(1);

            fclose(ptr);

        }
        break;
        case 2:
        {

            printf("\n========Which file you have open==================\n");
            //read data from using fgetc function
            char ch;
            char filename2[90];
            printf("Enter the file Name:");
            scanf("%s",&filename2);
            ptr=fopen(filename2,"r");
            if(ptr==NULL)
                printf("\n===>file does not exit<====\n");
            while(1)
            {
                ch=getc(ptr);
                if(ch==-1)
                    break;
                printf("%c",ch);
            }
            fclose(ptr);
        }

        break;
        case 3:
        {
            printf("\n========Which file you have open==================\n");
            //read data from using fgetc function
            char ch;
            char filename2[90];
            printf("Enter the file Name:");
            scanf("%s",&filename2);
            ptr=fopen(filename2,"r");

            if(ptr==NULL)
                printf("\n===>file does not exit<====\n");
            char c;
            ptr=fopen(filename2,"r");
            int i=0;
            // c=getc(ptr);
            printf("Even no:");
            do
            {
                c=getc(ptr);
                if(c>=48&&c<=57)
                {
                    if((c-48)%2==0)
                    {   ptr=fopen(filename2,"a");
                        printf("%d\t",c-48);

                    }
                }
            }
            while(c!=-1);


            fseek(ptr, 0, SEEK_SET);
            printf("\nodd no:");
            do
            {
                c=getc(ptr);

                if(c>=48&&c<=57)
                {
                    if((c-48)%2==1)
                    {
                        printf("%d\t",c-48);
                    }
                }
            }
            while(c!=-1);



            fseek(ptr, 0, SEEK_SET);
            printf("\nprime no:");

            do
            {
                c=getc(ptr);

                if(c>=48&&c<=57)
                {
                    int count=0;
                    for(int i=1; i<=c-48; i++)
                    {
                        if((c-48)%i==0)
                        {
                            count++;
                        }
                    }
                    if(count==2)
                    {
                        printf("%d\t",c-48);
                    }

                }
            }
            while(c!=-1);
        }
        break;



        case 4 :
        {
            int  choice1;
            printf("\n======you are using append mode ==========\n");
            printf("\n1:YES..");
            printf("\n2:NO..");
            printf("\nCreate a new file:");
            scanf("%d",&choice1);
            switch(choice1)
            {

            case 1:
            {

                printf("Enter the file name you want to create the file:");
                scanf("%s",&filename);
                ptr=fopen(filename,"a");
                printf("file created...");

                char data;
                ptr=fopen("demo.txt","w");
                printf("Enter the data in file:");
                do
                {
                    scanf("%c",&data);
                    //gets(data);
                    if(data==' ')
                    {
                        printf("data saved");
                        break;
                    }
                    fputc(data,ptr);
                }
                while(1);

                fclose(ptr);
            }
            break;

            case 2:
            {


                char data;
                ptr=fopen("demo.txt","r");
                printf("Enter the data in file:");
                do
                {
                    scanf("%c",&data);
                    //gets(data);
                    if(data==' ')
                    {
                        printf("data saved");
                        break;
                    }
                    fputc(data,ptr);
                }
                while(1);

                fclose(ptr);
            }
            }
        }
        break;

        }
    }
    while(choice!=3);




    return 0;
}
