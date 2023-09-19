/*
//write a c program to input and print array  elements using pointer

#include<stdio.h>
int main(){
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    int a[size];
int *ptr;
ptr=a;
for(int i=0;i<size;i++){
    scanf("%d",ptr);
    ptr++;
}
ptr=ptr-size;
printf("The given array is :");
for(int i=0;i<size;i++){
    printf("%d\t",*ptr);
    ptr++;
}

return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------------
write a c program to input and sum of array elements using pointer

#include<stdio.h>
int main(){

int size;
printf("Enter the size:");
scanf("%d",&size);

int a[size];
int *ptr=a;


printf("Enter the value in array:");      //1 2 3 4 5
for(int i=0;i<size;i++){
    scanf("%d",ptr);
    ptr++;
}
ptr=ptr-size;
int sum=0;
for(int i=0;i<size;i++){
        sum=sum+ *ptr;
   ptr++;
}
printf("The given sum is:%d",sum);


return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------------
write a c program to input and print array reverse element using pointer



#include<stdio.h>
int main(){
    int size;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
int *ptr=a;
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",ptr);
    ptr++;
}
//before reverse
ptr=ptr-size;
printf("Before reverse:");
for(int i=0;i<size;i++){
        printf("%d ",*ptr);
        ptr++;    // 1 2 3 4 5
}


//after reverse
ptr=ptr-size;
int *start=&a[0];
int *end=&[size-1];
int mid=size/2;
for(int i=0;i<mid;i++){
    int temp=*(start+i);
    *(start+i)=*(end);
    *(end)=temp;
    end--;


}



for(int i=0;i<size;i++){
    printf("\n%d ",*ptr);
}


return 0;
}


--------------------------------------------------------------------------------------------------------------------------------
Q4.Write a C program to search an element in array using pointers.


#include<stdio.h>
 int main(){
 int size,element;
 printf("Enter the size:");
 scanf("%d",&size);
 int a[size];
 int *ptr=a;
 printf("Enter the element in array:");
 for(int i=0;i<size;i++){
    scanf("%d",ptr);
    ptr++;
 }
ptr=ptr-size;
 for(int i=0;i<size;i++){
    printf("%d ",*ptr);
    ptr++;
 }


 ptr=ptr-size;
 int flag=0;
 //find the element using pointer
 printf("\nEnter the element:");
 scanf("%d",&element);
 for(int i=0;i<size;i++){
    if(element==*ptr){
        flag=1;
    }
    ptr++;
 }

 if(flag)
printf("element is found");
else
    printf("element is not found");

 return 0;
 }


---------------------------------------------------------------------------------------------------------------------------------------
*/





#include<stdio.h>
 int main(){
 int size,element;
 printf("Enter the size:");
 scanf("%d",&size);
 int a[size];
 int *ptr=a;

 for(int i=0;i<size;i++){
        printf("Enter the %u address in array:",ptr);
    scanf("%d",ptr);
    ptr++;
 }
ptr=ptr-size;
printf("%u---->%d\n",ptr,*ptr);
ptr=ptr+1;

printf("%u---->%d\n",ptr,*ptr);


//
//
// for(int i=0;i<size;i++){
//    printf("%u---->%d\n",ptr,*ptr);
//    ptr++;
// }
//ptr=ptr-size;



 }









