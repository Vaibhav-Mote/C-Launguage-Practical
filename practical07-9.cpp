/*
//write a c program to search element in array .its found or not     //this program is linear search search.................
#include<stdio.h>
int main(){
int size,search_element,flag=0;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
printf("\nEnter the  search element:");
scanf("%d",&search_element);
for(int i=0;i<size;i++){

    if(search_element==a[i]){
    flag=1;
    }
}
if(flag){
    printf("element founded....");
}
else{
    printf("element is not founded....");
}

return 0;
}


--------------------------------------------------------------------------------------------------------------------------------------
/write a c program to search element in array .its found or not     //this program is bineary  search search.................



#include<stdio.h>
int main(){
int size,search_element,flag=0;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
printf("\nEnter the  search element:");
scanf("%d",&search_element);

int l,r ,mid;
l=0;
r=size-1;
//int flag=0;
while (l<=r){
    mid=(l+r)/2;
    if(search_element==a[mid]){
        flag=1;
        break;
    }
    if(search_element<mid){
        r=mid-1;

    }
    else{
        l=mid+1;
    }

}
if(flag){
    printf("element founded........");
}else{
    printf("not founded.....");

}


return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------
write a c program to reverse element in array


#include<stdio.h>
int main(){
int size,search_element;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
int mid=(size-1)/2;
int end=size-1;
for(int i=0;i<=mid;i++) {
int temp=a[i];
a[i]=a[end];
    a[end]=temp;
end--;
}
printf("\nThe reverse array is :");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------
//write a c program to find missing value in array

#include<stdio.h>
int main(){

int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}

for(int i=0;i<size;i++)
{
    for(int j=a[i];j<a[i+1];)
    {
        printf("\t%d",++j);
}
}


return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------
//write a c program to copy  one array to  another array

#include<stdio.h>
int main(){
int size;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
int b[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}


for(int i=0;i<size;i++){
        b[i]=a[i];

}
printf("\nThe dublicate array :");
for(int i=0;i<size;i++){
        printf("\t%d",b[i]);

}

return 0;
}
----------------------------------------------------------------------------------------------------------------------
write a c program to to rotate the array in specific index

*/

#include<stdio.h>

int main(){


int size,index;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}
int temp;
printf("\nEnter the index to roted the array:");
scanf("%d",&index);

for(int i=0;i<index;i++){
    int temp=a[0];
    for(int j=0;j<size;j++){
            int temp2=a[j];
            a[j]=a[j+1];
            a[j+1]=temp2;

    }

a[size-1]=temp;
}


printf("The Roteted  array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}


return 0;
}





