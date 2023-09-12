/*
//witite a c program to short array in asending  or decending order
#include<stdio.h>
int main(){

int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
int point1;
int temp1;
for(int i=0;i<size-1;i++){

    for(int j=i+1;j<size;j++){
        if(a[i]>a[j]){
            temp1=a[i];
    a[i]=a[j];
    a[j]=temp1;
        }
    }

}
printf("\nAfter asending array is:");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}
int point2,temp2;
for(int i=0;i<size-1;i++){
        point2=i;
    for(int j=i+1;j<size;j++){
        if(a[i]<a[j]){
    temp2=a[i];
    a[i]=a[j];
    a[j]=temp2;
        }
    }

}
printf("\nAfter desending array is:");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}


return 0;
}
/*
---------------------------------------------------------------------------------------------------
/witite a c program to short array in desending  order


#include<stdio.h>
int main(){


int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
int point;
int temp;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]<a[j]){
           // point=j;
           temp=a[i];
    a[i]=a[j];
    a[j]=temp;
        }
    }
}
printf("Sorted array is:");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}




return 0;
}


--------------------------------------------------------------------------------------------------------
//wrire a c program to check wheterh array is majority or not


#include<stdio.h>
int main(){
int size ;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the elemnt in array:");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){

        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("After shoriting:");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}
//printf("======================================");
int count =1;
for(int i=0;i<size;i++)
    {
    if(a[i]==a[i+1]){
        count++;
    }
    else{
          if(count>size/2)
          printf("\n%d is majority element ...",a[i]);
          count=1;
        }

    }
//printf("======================================");

return 0;

}
/*
----------------------------------------------------------------------------------------------------------------------------------------
//write a c program to check the given array is pelindrom or not

#include<stdio.h>
int main(){

int size ;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the elemnt in array:\n");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}

int mid=size/2;
int right=size-1;
int flag=0;
for(int i=0;(i<mid);i++){
    if(a[i]==a[right]){
     flag=1;
    }
    else{
        flag=0;
        break;
    }
    --right;
}
if(flag){
    printf("array is palindrome ");
}
else{
    printf("array is not pelindrom");
}



return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------

write a program to find second highest element in array
*/


#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elemnt in array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size-1; i++)
    {
        int point=i;
        for (int j = i + 1; j < size; j++)
        {

            if (a[j] < a[i])
            {
                point=j;
            }
        }if(point!=i){
            int temp = a[i];
                a[i] = a[point];
                a[point] = temp;
    }
    }
    printf("After shoriting:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    int newS=1;
    for (int i = 1; i < size; i++)
    {

        if (a[i] != a[i - 1])
        {
           a[newS]=a[i];
             newS++;

        }
    }
    printf("\nAfter dublicate element :");
    for (int i = 0; i <newS; i++)
    {
        printf("%d ", a[i]);
    }
    newS=newS-2;
     printf("\nsecond highest element is :%d", a[newS]);

    return 0;
}

/*
--------------------------------------------------------------------------------------------------------------------------------------
//write a c program to find a pair with given sum in the array



#include<stdio.h>
int main(){

int size ,sum;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the elemnt in array:");
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("Enter the sum of two element:");
scanf("%d",&sum);
int ipoint,jpoint;
int flag=0;
for(int i=0;i<size-1;i++){

    for(int j=i+1;j<size;j++){
            if((a[i]+a[j])==sum){
                ipoint=i;
                jpoint=j;
                flag=1;
            }
            if(flag){
                printf("The sum of two element is %d + %d = %d",a[ipoint],a[jpoint],sum);
            }




}
}



return 0;
}


*/
