/*

    fgetc() function

#include<stdio.h>
int main(){
FILE *ptr,*ptr1,*ptr2,*ptr3;
char ch;
ptr=fopen("demo.txt","r");
ptr1=fopen("Even.txt","w");
ptr2=fopen("odd.txt","w");
ptr3=fopen("prime.txt","w");
do{
         ch=getc(ptr);
        if((ch-48)%2==0){
            fputc(ch,ptr1);
            printf("%c\t",ch);
        }else{
         fputc(ch,ptr2);
         printf("%c\t",ch);
        }

        // prime no
        int count=0;
        for(int i=1;i<=ch-48;i++){
            if((ch-48)%i==0){
                count++;
            }
        }
        if(count==2){
             fputc(ch,ptr3);
        }
}
while(ch!=-1);
fclose(ptr);
fclose(ptr1);
fclose(ptr2);
printf("\ndata saved successfully");

return 0;
}
======================================================================================================================================
fgets()


#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("string.txt","r");
char ch[90];
fgets(ch,90,ptr);
printf("%s",ch);


return 0;
}
===================================================================================================================================
append mode

#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("string.txt","r+");
//ptr=fopen("string.txt","w");
char ch[90];
printf("Enter the data in file:");
gets(ch);
fputs(ch,ptr);
//fclose(ptr);
char ch1[90];
//ptr=fopen("string.txt","r");
fseek(ptr,0,SEEK_SET);
fgets(ch1,90,ptr);
printf("%s",ch1);
fclose(ptr);
return 0;
}
/*
=========================================================================================================================================
compare two file

#include<stdio.h>
int main(){
FILE *ptr1,*ptr2;
ptr1=fopen("abc.txt","w+");
ptr2=fopen("xyz.txt","w+");
char ch1[90],ch2[90];
int flag=0;
char m,n;

printf("enter the data in file 1:");
gets(ch1);
fputs(ch1,ptr1);
fseek(ptr1,0,SEEK_SET);
printf("Enter the data in file 2:");
gets(ch2);
fputs(ch2,ptr2);
fseek(ptr2,0,SEEK_SET);



do{
        m=getc(ptr1);
        n=getc(ptr2);


    if((m!=EOF&&n!=EOF)&&(m!=n)){
            flag=1;
            break;

    }

    }while(m!=EOF&&n!=EOF);

    if(flag){
        printf("file not same");
    }
    else{
        printf("file are same");
    }

return 0;
}
================================================================================================================================================
copy one file data to another file data

#include<stdio.h>
int main(){
    FILE *ptr,*ptr1;
    char ch[90],ch1[90];
    ptr=fopen("copydata1.txt","w+");
    printf("Enter the data in file:");
    gets(ch);
    fputs(ch,ptr);
    fseek(ptr,0,SEEK_SET);
    fgets(ch1,90,ptr);
    fclose(ptr);
    ptr1=fopen("copydata2.txt","w");
    fputs(ch1,ptr1);
    fclose(ptr1);

return 0;
}
======================================================================================================================================
//count word line and character
*/
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    char c;
    char ch[90];
    int ccount=0,Wcount=1,Lcount=1,i=0;
    ptr=fopen("countWCNoofL.txt","r");
fgets(ch,90,ptr);
int len=strlen(ch);   // c=fgetc(ptr);
printf("\n length=%d",len);
printf("\n=====>>:%s",ch);
    while(ch[i]!='\0')
    {
        //c=fgetc(ptr);
        if((ch[i]==' '&&ch[i+1]!=' ')){
            Wcount++;
        }

        if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')&&ch[i]!=' ')
        {
            ccount++;
        }

         if(ch[i]=='\n' && ch[i]=='.'){
            Lcount++;
        }

i++;

    }
    printf("char:%d\n",ccount);
    printf("word:%d\n",Wcount);
    printf("line:%d\n",Lcount);
    return 0;
}












