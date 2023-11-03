/*
--------------- strlen()---------

#include<stdio.h>
#include<string.h>
int main(){
char ch[100];
printf("Enter the data:");
gets(ch);
int len=strlen(ch);
printf("length:%d",len);
printf("%s",ch);

return 0;
}

---------------------------------------------------------------------------------------------------------------------------------
Example: WAP to create your own function and calculate length of string without using strlen()
*/
#include<stdio.h>

int main(){

int getlen(char a[]);
char ch[100];
printf("Enter the data :");
gets(ch);
int len=getlen(ch);
printf("length:%d",len);
return 0;
}

int getlen(char a[]){
int i=0;
while(a[i]!='\0'){
    i++;
}

return i ;

}















