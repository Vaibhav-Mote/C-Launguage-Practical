/*
//write a c prgram to mearge two array
#include<stdio.h>
int main(){
    int size1,size2;
printf("Enter the size of first array:");
scanf("%d",&size1);
int a1[size1];

printf("Enter the First element in array:");
for(int i=0;i<size1;i++)
    {
    scanf("%d",&a1[i]);
}

printf("\nEnter the size second of array:");
scanf("%d",&size2);
int a2[size2];

printf("\nEnter the  element in second array:");
for(int i=0;i<size2;i++)
    {
    scanf("%d",&a2[i]);
}

m=size1+size2;
int k=0, a3[m];
for(int i=0;i<size1;i++){

        a3[k]=a1[i];
        k++;
    }
for(int i=0;i<size2;i++){

        a3[k]=a2[i];
        k++;
    }
    for(int i=0;i<m;i++){
        printf("\n %d",a3[i]);
    }



return 0;
}


-------------------------------------------------------------------------------------------------------------------------------
//write a c program to find prime no in the given array


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

printf("\nThe prime no in given array is:");
for(int i=0;i<size;i++){
    int count=0;
    for(int j=1;j<=a[i];j++){

        if(a[i]%j==0){
            count++;
        }
    }
    if(count==2){
        printf("%d ",a[i]);
    }
}



return 0;

}

-----------------------------------------------------------------------------------------------------------------------------------
write a c programt to find perfect no in array

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

printf("Perfect no is:");
for(int i=0;i<size;i++){
int sum=0;
    for(int j=1;j<a[i];j++){

        if(a[i]%j==0){
            sum=sum+j;
        }
    }
    if(sum==a[i]){
        printf("\n%d",a[i]);
    }
}


return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------
write a c prgram to remove index in specific index

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
printf("\nbefore remove element in array is :");
int m;
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
     m=i;
}

printf("\nEnter the index to remove element:");
scanf("%d",&index);

if(m==0){
    printf("No element in array...");
}
else{
    for(int i=index;i<size;i++){

   // int  temp=a[index];
   // a[index]=a[index+1];
   a[index]=a[index+1];
index++;
}
size--;


}


printf("after remove element in array is :");
for(int i=0;i<size;i++)
{
    printf("\t%d",a[i]);
}


return 0;
}
/*
---------------------------------------------------------------------------------------------------------------------------------
write a c program to find occurence in each element in array



#include<stdio.h>
int main()
{
    int size,point;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in array:");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }


        int temp;

    for(int i=0; i<size-1; i++)
    {

        for(int j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                point=j;

            }
        }

        temp=a[i];
        a[i]=a[point];
       a[point]=temp;

    }
    for(int i=0;i<size;i++){

        printf("\n%d ",a[i]);
    }



      int count=1;
    for(int i=0;i<size;i++){

        if(a[i]==a[i+1]){
            count++;

        }
        else{
                 printf("\n%d occurs %d times \n",a[i],count);
                 count=1;

        }

    }



    return 0;
}
------------------------------------------------------------------------------------------------------------------------------
//write a c program to add the element in specific index

#include<stdio.h>
int main(){

    int size,index,value;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in array:");

    for(int i=0; i<size-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given array is :");
    for(int i=0;i<size-1;i++){
        printf("%d ",a[i]);

    }
    printf("\nEnter the index and value of element:");
    scanf("%d %d",&index,&value);
    int end=size-1;
    for(int i=index;i<size;i++){
            a[end]=a[end-1];
          end--;
    }
    a[index]=value;
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }




return 0;
}
/*
-------------------------------------------------------------------------------------------------------------------------------------


//write a c program to add the element in begining at array index

#include<stdio.h>
int main(){

    int size,index,value;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in array:");

    for(int i=0; i<size-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given array is :");
    for(int i=0;i<size-1;i++){
        printf("%d ",a[i]);

    }
    printf("\nEnter the value of element to add begining:");
    scanf("%d",&value);
    int end=size-1;
    for(int i=0;i<size;i++){
            a[end]=a[end-1];
          end--;
    }
    a[0]=value;
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }




return 0;
}


---------------------------------------------------------------------------------------------------------------------------------------------



//write a c program to add the element in end of array index

#include<stdio.h>
int main(){

    int size,index,value;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in array:");

    for(int i=0; i<size-1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The given array is :");
    for(int i=0;i<size-1;i++){
        printf("%d ",a[i]);

    }
    printf("\nEnter the value to add end of array:");
    scanf("%d",&value);
    a[size-1]=value;
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }




return 0;
}

-------------------------------------------------------------------------------------------------------------------------------



*/
















