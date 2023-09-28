/*
Example: Write a program to create function name as void table(int) and input number and print its table.
*/

 #include<stdio.h>
 #include"table.h"

 int main(){

 void table(int);
 int no;
 printf("Enter the number:");
 scanf("%d",&no);
 table(no);

 return 0;
 }
 //defination
// void table(int no){
// for(int i=1;i<=10;i++){
// printf("%d\t",no*i);
//
// }
// }
