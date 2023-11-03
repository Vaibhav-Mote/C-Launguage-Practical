#include<stdio.h>
int main(){
FILE *ptr;
char ch;
ptr=fopen("demo.txt","r+");
ch=fgetc(ptr);


return 0;
}
