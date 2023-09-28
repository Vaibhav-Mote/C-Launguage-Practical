/*
//Example: Write a program to create function name as void table(int) and input number and print its table.
#include<stdio.h>
void table(int);
int main(){

int no;
printf("Enter the number :");
scanf("%d",&no);


table(no);
}
void table(int a){
for(int i=1;i<=10;i++){
    printf("%d\t",i*a);
}
}
---------------------------------------------------------------------------------------------------------------------------------------------
Q 2:Write a program to create  function name as calPower (int,int) and we have to create own file name as power.h and input two
values first as base and second as index and calculate its power.

#include<stdio.h>
#include"power.h"

int main(){
int element,index;
printf("Enter the base and its index:\n");
scanf("%d %d",&element,&index);

power(element,index);
return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------
Q:3 Example: we want to create function name as int getSquare(int) and pass parameter value to function and return its square

#include<stdio.h>
#include"power.h"
int main(){
int no;
printf("Enter the number:");
scanf("%d",&no);
int result=getSquare(no);
//printf("%d",getSquare(no));
printf("%d",result);

return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------
Q:4 Example: WAP to create function name as getFactorial(int) this function can accept integer as parameter
and calculate factorial of number and return it.

#include<stdio.h>
#include"power.h"
int main(){
int no;
printf("Enter the number:");
scanf("%d",&no);


printf("%d",getfactorial(no));

}

--------------------------------------------------------------------------------------------------------------------------------------

Q: 5 Example: WAP to create function name as getDigitSum(int no) and accept input as number and calculate sum of all its digit and return it.

#include<stdio.h>
#include"power.h"
int main(){

int no;
printf("Enter the no:");
scanf("%d",&no);
//getDigitSum(no);
printf("%d",getDigitSum(no));

return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------
Q:6 Example: WAP to create function name as getPer(int ,int,int,int,int,int ) accept six parameter of type integer and calculate the percentage
of numbers and return it.

#include<stdio.h>
#include"power.h"
int main()
{
    int result;
   result= getper(60,60,60,60,60);
    printf("%d",result);
    return 0;
}

------------------------------------------------------------------------------------------------------
How to pass array as parameter in function

#include<stdio.h>
int main(){

void test(int *);
int a[5];
test(a);
printf("The given value is:");
for(int i=0;i<5;i++){
    printf("%d",a[i]);
}
return 0;
}
void test(int *ptr){
printf("Enter the value in array:");
for(int i=0;i<5;i++){
    scanf("%d",ptr);
    ptr++;
}

}
--------------------------------------------------------------------------------------------------------------------------------------------
Example: WAP to create function name as void sort(int a[]) this function is used for accept array as parameter and perform sorting on array.

#include<stdio.h>
void shortArray(int a[],int size){
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    }
}
}

int main(){
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in array:");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);

    }
    shortArray(a,size);
    printf("The given array is :");
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }


return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------
Example: Write a program create function name as int linearSearch(int a[],key) this function is used for accept array as parameter
as well as accept key as parameter and search value in array and if value found return its index otherwise return -1


#include<stdio.h>


int main(){
int linearSearch(int a[] ,int key ,int size );
int size,key;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Enter the key:");
scanf("%d",&key);
linearSearch(a,key,size);



return 0;
}

linearSearch(int a[],int key,int size){
    int flag=-1;
    for(int i=0;i<size;i++){
        if(key==a[i]){
                flag=i;
        }
    }
    if(flag!=-1){
        printf("%d Element is found ",key);
    }
    else{
        printf("%d Element is not found",key);
    }


}

------------------------------------------------------------------------------------------------------------------------------------------------------

WAP to create function name as int * updateArray(int a[]) and update array value by 10 every time


#include<stdio.h>
int *getupdate(int a[]){

for(int i=0;i<5;i++){
    a[i]=a[i]+10;
}
return a;
}

int main(){

int a[]={10,20,30,40,50};
 int len=sizeof(a)/sizeof(a[0]);
    printf("leng=%d",len);
getupdate(a);
printf("The updated value is:");
for(int i=0;i<5;i++){
    printf("%d\t",a[i]);
}
return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------------------
function Recurstion
Example: we want to print five times good morning message using a recursion

#include<stdio.h>
void show(int count ){
if(count<5){
    printf("Good moring\n");
}
count++;
show(count);
}
int main(){
    show(0);
}
------------------------------------------------------------------------------------------------------------------------------------------------------------
Example: WAP to input number and print its table using recursion

#include<stdio.h>
int table(int no,int i){

if(i<=10){
    printf("%d\t",i*no);
}
i++;
return table(no,i);


}
int main(){
int no;
printf("Enter the number:");
scanf("%d",&no);
table(no,1);

}
-------------------------------------------------------------------------------------------------------------------------
Example: WAP to input number and calculate its factorial using recursion
*/
#include<stdio.h>
 int factorial=1;
void fact(int n,int i){

    if(i<=n){
        factorial=factorial*i;
        i++;
       fact(n,i);
    }else{
    printf("fact:%d",factorial);
    }
}

int main(){
int no,n;
printf("Enter the no:");
scanf("%d",&no);
fact(no,1);


return 0;
}


























