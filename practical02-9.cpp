/*
//write a c program to take input size of 5 and display it
#include<stdio.h>
int main(){

int a[5];
printf("Enter the no in array:");
for(int i=1;i<=5;i++){
    scanf("%d",&a[i]);

}
for(int i=1;i<=5;i++){
    printf("%d\t",a[i]);

}


return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
//write a c program to calculate the sum of array is size 5


#include<stdio.h>
int main(){
int a[5],sum=0;
printf("Enter the number in array:");
for(int i=1;i<=5;i++){
    scanf("%d",&a[i]);
}
for(int i=1;i<=5;i++){
        sum=sum+a[i];

}
printf("sum=%d",sum);


return 0;
}
---------------------------------------------------------------------------------------------------------------------------
//write a c program find the minimum and maximum no in array

#include<stdio.h>
int main(){
int a[5],min,max;
printf("Enter the no in array:");    //1 2 3 4 5
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(int i=1;i<5;i++){
    max=max>a[i]?max:a[i];
    min=min<a[i]?min:a[i];
}
printf("max=%d\n",max);
printf("max=%d",min);



return 0;
}

------------------------------------------------------------------------------------------------------------------------
//write a c program to find even and odd in in array size 10

#include<stdio.h>
int main(){

int a[10],i=1;
printf("Enter the element in array:");
for (int i=1;i<=10;i++){
    scanf("%d",&a[i]);

}
for(int i=1;i<=10;i++){
    if(a[i]%2==0){
        printf("even:%d\n",a[i]);
    }

}
for(int i=1;i<=10;i++){
    if(a[i]%2==1){
        printf("odd:%d\n",a[i]);
    }

}

return 0;
}


//-------------------------------------------------------------------------------------------------------------
//write a c program to find positive negative no in array



#include<stdio.h>
int main(){

int a[5],i=1;
printf("Enter the element in array:");
for (int i=1;i<=5;i++){
    scanf("%d",&a[i]);

}
for(int i=1;i<=5;i++){
    if(a[i]>0){
        printf("positve:%d\n",a[i]);
    }
    else if(a[i]==0){
        printf("zero:%d\n",a[i]);
    }
    else {
        printf("negetive:%d\n",a[i]);
    }
}

return 0;
}


--------------------------------------------------------------------------------------------------------------------

//write a c program to linear search (take array size from user and give arrays values and find the key in array )
#include<stdio.h>
int main(){
    int size,skey,flag=-1;


printf("Enter the size of array :");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=1;i<=size;i++){
    scanf("%d",&a[i]);
}
printf("The given array is :\n");
for(int i=1;i<=size;i++)
{

    printf("\t%d",a[i]);
}

printf("\nEnter the search key :\n");
scanf("%d",&skey);

for(int i=1;i<=size;i++){
    if(skey==a[i]){
            flag=i;
            break;
    }
}
if(flag!=-1){
    printf("%d  is founded....",flag);
}
else{
    printf("key is not founded.....");
}



return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
write a c program to search the key by using bineary search


#include<stdio.h>
int main(){
int size,skey ,l,r,mid,flag=0;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];

printf("Enter the element in array in assending order:");
for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
}
printf("The given array is:");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
printf("\nEnter the search key:");
scanf("%d",&skey);

l=a[0];
r=size-1;
while(l<=r){
        mid=l+(r)/2;
        if(skey==a[mid]){
            flag=1;
            break;
        }
        if(skey>a[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;

}
}

if(flag){
    printf("element founded...");

}
else{
    printf("not founded....");
}



return 0;
}
/*
------------------------------------------------------------------------------------------------------------------------------------
// write a c program to take input size of array and values from user and shorting it form bubble short

#include<stdio.h>
int main(){
int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the elements in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Before shorting array:");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
for(int i=0;i<size-1;i++){
    for(int j=(i+1);j<size;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\nAfter shorting :");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}



return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
//write a c program to reverse the element in array


#include<stdio.h>
int main(){
int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("\t%d",&a[i]);
}
printf("Before reverse array:");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}
int mid=size/2;
int end=size-1;
for(int i=0;i<mid;i++){
    int temp=a[i];
    a[i]=a[end];
    a[end]=temp;
    end--;
}
printf("\nAfter reverse:");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}

return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------
//WAP to insert the value on specified index in array.

#include<stdio.h>
int main(){

int size,index,value;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size-1;i++){
    scanf("\t%d",&a[i]);
}
printf("\nThe before insert value in  array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}
printf("\nEnter the index and value in array:");
scanf("%d  %d",&index,&value);
for(int i=size-2;i>=index;i--){
    a[i+1]=a[i];

}
a[index]=value;
printf("\nThe after insert value in array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}

return 0;

}

----------------------------------------------------------------------------------------------------------------------------------
WAP to input five values in ascending order and find the missing values
1   5   8   9    12

Missing
2   3    4     6     7   10   11



#include<stdio.h>
int main(){
int size,start,end1;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
printf("\nThe give  array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}
printf("\nMissing valeus:");
for(int i=0;i<size;i++){
    start=a[i];
    end1=a[i+1];
    for(int j=start+1;j<end1;j++){
        printf("%d\t",j);
    }
}


return 0;
}

-------------------------------------------------------------------------------------------------
Selecting short
*/
#include<stdio.h>
int main(){
int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("\t%d",&a[i]);
}
printf("\before shorting :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}

for(int i=0;i<size-1;i++){

int mind=i;
for(int j=i+1;j<size;j++){
    if(a[j]<a[mind]){
        mind=j;
    }
}
if(mind!=i){
    int temp=a[i];
    a[i]=a[mind];
    a[mind]=temp;
}
}
printf("\nAfter shorting  :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}








return 0;
}





/*
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; // Return an error code
    }

    int a[size];

    printf("Enter the elements in the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    // Selection sort
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }

    printf("\nAfter sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
*/

























