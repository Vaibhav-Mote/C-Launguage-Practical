/*
//write a c program to find the length of string using header file string.h
#include<stdio.h>
#include<string.h>
int len;
int main(){
void getlen(char ch[]);//declaration
char ch[100];
printf("Enter the data:");
gets(ch);
getlen(ch);//calling
printf("length:%d",len);

return 0;
}

void getlen( char ch[]){
len=strlen(ch);

}

-----------------------------------------------------------------------------------------------------------------------------------------------
write a c program to find the length of string without using header file string.h

#include<stdio.h>
int main(){
    char ch[100];
int getleng(char ch[]);
printf("Enter data:");
gets(ch);
int r=getleng(ch);
printf("length:%d",r);
return 0;
}

int getleng(char ch[]){
int i=0;
while(ch[i]!='\0'){
        i++;
}
return i;

}
--------------------------------------------------------------------------------------------------------------------------------------------
Write a c program to count vowels and consonent in stiring
#include<stdio.h>

void  VowelsOrCosonet(char ch[]){
int i=0,vowels=0,consonet=0;
while(ch[i]!='\0'){
        if(ch[i]=='a'|| ch[i]=='e' || ch[i]=='i' || ch[i]=='o' ||ch[i]=='u'|| ch[i]=='A'|| ch[i]=='E'|| ch[i]=='I'||ch[i]=='O'){
                vowels++;

        }
         else if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')){
            consonet++;
        }
        i++;

}
printf("vowels:%d",vowels);
printf("\nconsonets:%d",consonet);
}
int main(){
char ch[122];
printf("Enter the data:");
gets(ch);
VowelsOrCosonet(ch);

return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------------------
write a c program to convert lowercase to uppercase in sting using inbuilt function
#include<stdio.h>
#include<string.h>

int main(){
     char ch[100];
     printf("Enter the data:");
     gets(ch);
    strupr(ch);
    printf("\nupper:%s",ch);
    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
write a c program to convert lowercase to uppercase without  using inbuilt function and using recurstion

#include<stdio.h>
int i=0;
void getupper(char ch[]){
    if(ch[i]!='\0'){
    if(ch[i]>='a'&&ch[i]<='z'){
        ch[i]=ch[i]-32;
        i++;
        getupper(ch);

    }
    else{
    i++;
        getupper(ch);
    }
    }
}

int main(){
     char ch[100];
     printf("Enter the data:");
     gets(ch);
   getupper(ch);
   printf("%s",ch);
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
write a c program to convert lowercase to uppercase without  using inbuilt function

#include<stdio.h>
int i=0;
void getupper(char ch[]){
    while(ch[i]!='\0'){
        if(ch[i]>='a'&&ch[i]<='z'){
            ch[i]=ch[i]-32;
        }
        i++;
    }
}

int main(){
     char ch[100];
     printf("Enter the data:");
     gets(ch);
   getupper(ch);
   printf("%s",ch);
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------
WAP to reverse the string using inbuilt function

#include<stdio.h>
#include<string.h>
int main(){
char ch[100];
printf("Enter the data:");
gets(ch);
strrev(ch);
printf("\nrevese:%s",ch);

return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
WAP to reverse the string without using inbuilt function
#include<stdio.h>
getreverse(char ch[]){
int i=0;
while(ch[i]!='\0'){
    i++;
}
printf("length:%d",i);
int mid=i/2;
int end=i-1;
for(int j=0;j<mid;j++){
        char temp=ch[j];
        ch[j]=ch[end];
        ch[end]=temp;
        end--;
}
printf("\n\n");
//for(int k=0;k<i;k++){
//    printf("%c",ch[k]);
//}

}

int main(){
char ch[100];
printf("Enter the data:");
gets(ch);
getreverse(ch);
printf("\nrev:%s",ch);

return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------
write a c program to check the given string is palindrom or not

#include<stdio.h>

getreverse(char ch[],char ch1[]){
int i=0;
while(ch[i]!='\0'){
    i++;
}
int mid=i/2;
int end=i-1;
for(int j=0;j<mid;j++){
        char temp=ch[j];
        ch[j]=ch[end];
        ch[end]=temp;
        end--;
}
int falg=0;
for(int m=0;m<i;m++){
    if(ch[m]!=ch1[m]){
            falg=1;
            break;
    }
}
if(falg){
    printf("Not palindrom");
}
else{
    printf("palindrom");
}

}

int main(){
char ch[100];
printf("Enter the data:");
gets(ch);
getreverse(ch,ch);

return 0;
}
*/

#include <stdio.h>
int main()
{
     int (*ptr)(int ) = fun;
(*ptr)(3);
 return 0;
}
int fun(int n)
{ for(;n > 0; n--)
 printf("GIRI’S TECH HUB PVT.LTD ");
 return 0;
 }
























