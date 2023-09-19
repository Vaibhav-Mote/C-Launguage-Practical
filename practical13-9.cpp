/*
//WRA program to take a pointer store address of another variable into pointer and print its address and value
#include<stdio.h>
int main(){

int a=90;
int *ptr=&a;
printf("The address of a is:%d\n",ptr);
printf("The value of address is %d:",*ptr);
return 0;
}
--------------------------------------------------------------------------------------------------------------------------------
write a c program take 2 input form user and print its addition ,substraction mul and division

#include<stdio.h>
int main(){

 int a,b,*ptr1,*ptr2;
printf("Enter the value of a and b:\n");
scanf("%d %d",&a,&b);
ptr1=&a;
ptr2=&b;
printf("Addition is: %d\n",*ptr1+*ptr2);
printf("substraction is: %d\n",*ptr1-*ptr2);
printf("multipication is: %d\n",*ptr1 * *ptr2);
printf("division is: %d\n",*ptr1 / *ptr2);

return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------
WAP to take input form user and swap number using third variable


#include<stdio.h>
int main (){
int a,b;
printf("Enter the value of a and b:\n");
scanf("%d%d",&a,&b);
int *ptr1=&a;
int *ptr2=&b;
int temp;

temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

printf("a=%d \t b=%d",*ptr1,*ptr2);


return 0;
}
---------------------------------------------------------------------------------------------------------------------


WAP to take input form user and swap number without using third variable


#include<stdio.h>
int main (){
int a,b;
printf("Enter the value of a and b:\n");
scanf("%d%d",&a,&b);
int *ptr1=&a;
int *ptr2=&b;

*ptr1=*ptr1+ *ptr2;
*ptr2=*ptr1- *ptr2;
*ptr1=*ptr1- *ptr2;


//a=a+b; 8  5  3
//b=a-b;  8-3
//a=a-b;

printf("a=%d \t b=%d",*ptr1,*ptr2);


return 0;
}

-----------------------------------------------------------------------------------------------------------------------
WAP to calculate factorial of number using pointer

#include<stdio.h>
int main(){
int no,fact=1;
printf("Enter the number :");
scanf("%d",&no);
int *ptr=&no;
for(int i=1;i<= *ptr;i++){
    fact=fact*i;


}
printf("%d",fact);

return 0;
}
---------------------------------------------------------------------------------------------------------------------------
WAP to find sum of array element using pointer



#include<stdio.h>
int main(){

int a[3];
printf("Enter the value in array:");
for(int i=0;i<3;i++){

    scanf("%d",&a[i]);
}

int *ptr=a;
int sum=0;
//ptr=ptr+(3*16);
for(int i=0;i<3;i++){
    printf("%d ",*ptr);
    sum=sum+ *ptr;
    ptr++;
}


    printf("\nsum=%d",sum);


return 0;

}
----------------------------------------------------------------------------------------------------------------------------------------------
WAP to short array using pointer



#include<stdio.h>
int main(){
int a[5];
printf("Enter the value in array:");
for(int i=0;i<5;i++){

    scanf("%d",&a[i]);
}

int *ptr=a;
//int *h=&(++ *ptr);
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(*(ptr+i)>*(ptr+j)){
            int temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
        }

    }

}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d\t",a[i]);
}

return 0;


}


*/o















































