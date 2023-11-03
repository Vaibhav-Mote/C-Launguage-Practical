/*write a c program to check the sting is equal or not

#include<stdio.h>
#include<string.h>
int main(){
char ch1[100];
char ch2[100];
printf("Enter the data:");
gets(ch1);
printf("Enter the data:");
gets(ch2);
int r=strcmp(ch1,ch2);
if(r!=1){
    printf("String is equal");
}
else{
    printf("String is not equal");
}


return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------
write a c program to check the sting is equal or not without using inbuilt function

#include<stdio.h>
int main(){
char ch1[100];
char ch2[100];
int count1=0;
int count2=0;
printf("Enter the data:");
gets(ch1);
printf("Enter the data:");
gets(ch2);
while(ch1[count1]!='\0'){
    count1++;
}
while(ch2[count2]!='\0'){
    count2++;
}
if(count1!=count2){
    printf("String is not equal");
}
else{
        int flag=0;
    for(int i=0;i<count1;i++){
        if(ch1[i]!=ch2[i]){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("String is not equal");

    }
    else{
        printf("String is equal");
    }
}

}
/*
--------------------------------------------------------------------------------------------------------------------------------------------
Write a c program to count the alphabates digits and special symbol in given string

#include<stdio.h>
#include<string.h>
int main(){
char string1[100];
int alphabates=0,digit=0,spsymboll=0;
printf("Enter the data:");
gets(string1);
int len=strlen(string1);
for(int i=0;i<len;i++){
    if((string1[i]>='a'&&string1[i]<='z')||(string1[i]>='A'&&string1[i]>='Z')){
      alphabates++;
    }
    else if(string1[i]>='0' && string1[i]<='9'){
        digit++;
    }
    else{
    spsymboll++;
}

}
printf("alphabates:%d\n",alphabates);
printf("digit:%d\n",digit);
printf("special symbol:%d\n",spsymboll);
}
------------------------------------------------------------------------------
WAP to count white space in string

#include<stdio.h>
#include<string.h>
int main(){
char string1[100];
int count=0;
printf("Enter the data:");
gets(string1);
int len=strlen(string1);
for(int i=0;i<len;i++){
    if(string1[i]==' '){
        count++;
    }
}
printf("count:%d",count);
}
-------------------------------------------------------------------------------------------------------------------------------------------
Find the sum of digit in string

#include<stdio.h>
#include<string.h>
int main(){
char string1[100];
int sum=0;
printf("Enter the data:");
gets(string1);
int len=strlen(string1);
for(int i=0;i<len;i++){
        if(string1[i]>='0' && string1[i]<='9'){

                sum=sum+string1[i]-'0';
                printf("\n%d %d",string1[i],string1[i]-'0');
        }

}
printf("\nsum:%d",sum);

}
-------------------------------------------------------------------------------------------------------------------------------------------
WAP to remove duplicate alphabates in sting

#include<stdio.h>
#include<string.h>
int main(){
char string1[100];
int sum=0;
printf("Enter the data:");
gets(string1);
int len=strlen(string1);
for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){                      //vaaibb
                if(string1[i]==string1[j]){
                    for(int k=j;k<len;k++){
                        string1[k]=string1[k+1];
                    }
                        j--;
                        len--;

                }

        }

}
printf("%s",string1);



return 0;
}
/*

------------------------------------------------------------------------------------------------------------------------------------------------------
write a c program to copy one sting to another string

#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
    printf("Enter the data:");
    gets(ch1);
    printf("Enter the data:");
    gets(ch2);
    strcpy(ch1,ch2);
    printf("%s\n",ch1);
    printf("%s",ch2);


return 0;
}
/*
--------------------------------------------------------------------------------------------------------------------------------------------------------
write a c program to copy one sting to another string without using inbuilt function

#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
//    printf("Enter the data:");
//    gets(ch1);
    printf("Enter the data:");
    gets(ch2);
    int lench1=strlen(ch2);
    for(int i=0;i<lench1;i++){
        ch1[i]=ch2[i];
    }
//for(int i=0;i<lench1;i++){
//    printf("%c",ch1[i])
//}
printf("%s\n",ch1);
printf("\n%s",ch2);

return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------------------------------
WAP to concatenate the two string

#include<stdio.h>
#include<string.h>
int main(){
char ch1[100],ch2[100];
    printf("Enter the data:");
    gets(ch1);
    printf("Enter the data:");
    gets(ch2);
    strcat(ch1,ch2);
    printf("%s\n",ch1);
    printf("%s",ch2);

return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------
WAP to concatenate the two string without using inbuilt function


*/
#include<stdio.h>
#include<string.h>
int main(){
char ch1[20],ch2[20];
    printf("Enter the data:");
    gets(ch1);
    printf("Enter the data:");
    gets(ch2);
    int ch1len1=strlen(ch1);
    int ch1len2=strlen(ch2);
    int sum=ch1len1+ch1len2;
    for(int i=0;i<ch1len2;i++){
            ch1[ch1len1]=ch2[i];
            ch1len1++;

    }
    printf("%s",ch1);

return 0;
}
/*
*/
