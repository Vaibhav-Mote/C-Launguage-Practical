/*
    Q 1 //write a c program to enter the five element in array and show it
#include<stdio.h>
int main(){
int  a[5];
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}


return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------

Q2: sum of all element in array

#include<stdio.h>
int main(){
int  a[5],sum=0;
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
    sum=sum+a[i];
}
printf("\nSUM IS:%d",sum);


return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------
//wirte a c program to find max and min no in array

#include<stdio.h>
int main(){
int  a[5];
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);

}
int max=a[0],min=a[0];
for(int i=1;i<5;i++){
        //max=max>a[i]?max:a[i];
        //min=min<a[i]?min:a[i];
if(max>a[i]){
    max=max;
}
else{
    max=a[i];
}

       //min=min<a[i]?min:a[i];
if(min<a[i]){
    min=min;
}
else{
    min=a[i];
}
}
printf("min=%d max=%d",min,max);



return 0;
}

--------------------------------------------------------------------------------------------------------------------------
  Q4   write a c program to arrange the element in asseding order


#include<stdio.h>
int main(){
int a[7];
printf("Enter the element:");
for(int i=0;i<5;i++){

    scanf("%d",&a[i]);
}
for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("After asending order:");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}



return 0;}


--------------------------------------------------------------------------------------------------------------------------------------------
Q 5: find missing element in shorted array


#include<stdio.h>
int main(){

int a[5];
int len=sizeof(a)/sizeof(a[0]);
printf("Enter the shored element in array:");
for(int i=0;i<5;i++){

    scanf("%d ",&a[i]);
}
printf("Missing element is :");
for(int i=0;i<len-1;i++){
    for(int j=a[i];j<a[i+1]-1;j++){
        printf("%d ",++j);
    }
}

return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------------------
Q:6 Merge two array in desecnding order


#include<stdio.h>
int main()
{
    int a[5],b[5];
    int len1=sizeof(a)/sizeof(a[0]);
    int len2=sizeof(b)/sizeof(b[0]);
    printf("Enter the element in first array:");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element in second array:");
    for(int i=0; i<5; i++)
    {

        scanf("%d",&b[i]);
    }

//merge above two array
    int c[10];
    int count=0;
    for(int i=0;i<len1;i++){
        c[count]=a[i];
        count++;
    }

    for(int i=0;i<5;i++){
        c[count]=b[i];
        count++;
    }



    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++ ){
                if(c[i]<c[j]){
                    int temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }

        }
    }
    printf("merge array is:");
    for(int i=0;i<10;i++){
        printf("%d ",c[i]);
    }

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

 Q:6 write a c program to separate the even and odd numbers in separate array


#include<stdio.h>
int main(){

int a[6],e[6],o[6];
printf("Enter the element in array:\n");
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
int m=0;

for(int i=0;i<6;i++){
    if(a[i]%2==0){
            e[m]=a[i];
        m++;
    }
}
int n=0;

for(int i=0;i<6;i++){
    if(a[i]%2==1){
            o[n]=a[i];
    n++;

    }
}
printf("Even:");
for(int i=0;i<m;i++){
    printf("%d ",e[i]);
}
printf("\nodd:");
for(int i=0;i<n;i++){
    printf("%d ",o[i]);
}



return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------

Q:7 find the second largest element in array


#include<stdio.h>
int main(){
int a[5];
printf("Enter the element :");
    for(int i=0;i<5;i++){

        scanf("%d",&a[i]);
    }

    for(int i=0;i<4;i++){
            int mind=i;
       for(int j=i+1;j<5;j++){
        if(a[j]<a[i]){
            mind =j;

        }
       }
    if(mind!=i){
        int temp=a[i];
        a[i]=a[mind];
        a[mind]=temp;
    }
    }
    printf("\nAfter sorting:");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    int m=1;
    for(int i=1;i<5;i++){
        if(a[i]!=a[i-1]){
            a[m]=a[i];
            m++;
        }
    }
 printf("\nAfter dublicate:");
    for(int i=0;i<m;i++){
        printf("%d ",a[i]);
    }

m=m-2;
    printf("\nhigest seound element is:%d",a[m]);
return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------

WAP find the pair with given sum in the array

#include<stdio.h>
int main()
{
    int a[5];
    int sum,ipoint,jpoint,flag=0;
    printf("Enter the element :");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the sum is:");
    scanf("%d",&sum);
    for(int i=0; i<5; i++)
        for(int j=i+1; j<5; j++)
        {
            if(a[i]+a[j]==sum)
            {
                ipoint=i;
                jpoint=j;
                flag=1;

            }
        }
            if(flag)
            {
                printf("%d and %d =%d",a[ipoint],a[jpoint],sum);
            }

return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------
WAP find the majority element in array

#include<stdio.h>
int main(){
    int a[9];
    int leng=sizeof(a)/sizeof(a[0]);
    printf("Enter the element in array:");
    for(int i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
int half=leng/2;
for(int i=0;i<9;i++){

    for(int j=i+1;j<9;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }
}
//after shorting count same element
int count=1;
for(int i=0;i<9;i++){

    if(a[i]==a[i+1]){
        count++;
    }
else{
    if(count>half){
        printf("%d is a majority element",a[i]);
        count=1;
    }
}
}


return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------------

write a c program to rotate the array by nth position

#include<stdio.h>
int main(){

    int a[6],index;
    int leng=sizeof(a)/sizeof(a[0]);
    printf("Enter the element in array:");
    for(int i=0;i<leng;i++){
        scanf("%d",&a[i]);
    }
     printf("Enter the index to rotate the array:");
     scanf("%d",&index);

for(int i=0;i<index;i++){
        int temp=a[0];

    for(int j=0;j<leng;j++){
            a[j]=a[j+1];

    }
    a[leng-1]=temp;

}
    //After roteted array
    printf("After roteted array is:");
    for(int i=0;i<leng;i++){
        printf("%d ",a[i]);
    }

return 0;
}

/*
------------------------------------------------------------------------------------------------------------------------------------------
TO find ceiling Number in ascending shorted array


#include<stdio.h>
int main(){

    int a[6],element;
    int leng=sizeof(a)/sizeof(a[0]);
    printf("Enter the element in array:");
    for(int i=0;i<leng;i++){
        scanf("%d",&a[i]);
    }
     printf("Enter the element to ceiling no in array:");
     scanf("%d",&element);

     for(int i=0;i<leng;i++){
        if(element<=a[i]){
            printf("Ceiling of %d no is :%d",element,a[i+1]);
            break;
        }
     }

return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------------------

 Q 13:To find the floor and ceiling of the number  0 to 10 from shorted array

#include<stdio.h>
int main(){

    int a[5],element;
    int leng=sizeof(a)/sizeof(a[0]);
    printf("Enter the element in array:");
    for(int i=0;i<leng;i++){
        scanf("%d",&a[i]);
    }

int k=0;
    for(int i=0;i<10;i++){
        if(a[i]==k){
            printf("%d floor is:%d\n",i,a[i]);             //1 2 3 4 5 6                                //=================================================
             printf("%d ceiling is:%d\n",i,a[i]);
        }
        else if(k>a[i]){
           printf("%d floor is:%d\n",i,a[i-1]);
             printf("%d ceiling is:%d\n",i,a[i]);
        }
        else if(k!=0&&k<a[i]){
           printf("%d floor is:%d\n",i,a[i-1]);
             printf("%d ceiling is:%d\n",i,a[i]);
        }
        else
            {
            printf("%d floor is:%d\n",i,-1);
             printf("%d ceiling is:%d\n",i,a[i]);

        }

k++;
    }


return 0;


}
/*
--------------------------------------------------------------------------------------------------------------------------------------------
find Smallest missing element in shorted array


#include<stdio.h>
int main(){

int size;
printf("Enter the size :");
scanf("%d",&size);
int a[size];
printf("Enter the element:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);

}
for(int i=0;i<size-1;i++){
    for(int j=a[i];j<a[i+1]-1;j++){
            printf("smallest missing element is:%d  ",++j);

    break;
    }
    break;

}

return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------
Next greater element in given unsorted array

#include<stdio.h>
int main(){

int size;
printf("Enter the size :");
scanf("%d",&size);
int a[size];
printf("Enter the element:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);

}
for(int i=0;i<size;i++){
    int found =0;
    for(int j=i+1;j<size;j++){
         if(a[i]<a[j]){
            printf("The next bigger element %d is :  %d \n",a[i],a[j]);
            found=1;
            break;
        }

    }
    if(!found){
       printf("The next bigger element %d is : -1\n",a[i]);
    }

}


return 0;
}

/*
------------------------------------------------------------------------------------------------------------------------------------------
//write a c program to find two element whose sum is closest to zero

#include<stdio.h>
#include<stdlib.h>
int main(){

int size;
printf("Enter the size :");
scanf("%d",&size);
int a[size];
printf("Enter the element in :");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);

}

//find closest sum to zero

int sum=a[0]+a[1];
int ipoint ,jpoint,flag=0,currentsum;
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
            currentsum=abs(a[i]+a[j]);
         if(currentsum<sum){
                sum=currentsum;
            ipoint=i;
            jpoint=j;
            flag=1;
        }

    }

}
if(flag){
printf("\nSum of two element closest to zero is:%d + %d = %d",a[ipoint],a[jpoint],sum );
}
else{
    printf("\nSum of two element closest to zero is:%d + %d = %d",a[0],a[1],sum );
}

return 0;
}
/*

---------------------------------------------------------------------------------------------------------------------------------------------

write a c program to find subarray with given sum from the given array










------------------------------------------------------------------------------------------------------------------------------------------
write a c program to find if a given integer x appears more than n/2 times in a shorted array


#include<stdio.h>
int main()
{
    int size,element;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in :");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);

    }

//short the given array
    for(int i=0; i<size-1; i++)
    {
        int point=i;

        for(int j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                point=j;
            }
        }
        if(point!=i)
        {
            int temp=a[i];
            a[i]=a[point];
            a[point]=temp;
        }
    }
//take the element from user
    printf("Enter the element :");
    scanf("%d",&element);
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(element==a[i])
        {
            count++;
        }
        else
        {
            if(count>size/2 )
            {
                printf("%d apperse more than %d time ",a[i],size/2);
            }

            count=0;

        }

    }

    return 0;
}



----------------------------------------------------------------------------------------------------------------------------
find maximum circular subarray sum










































//-----------------------------------------------------------------------------------------------------------------------------------------


Q 20 ;WAP to move all zero to the end of array

#include<stdio.h>
int main(){


int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in :");     // 0 1 0 1 3 4
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);

    }
    // move zeros to end
    int end =size-1;
    for(int i=0;i<size;){
            if(a[i]==0&&i<=end){
                int temp=a[i];
                a[i]=a[end];
                a[end]=temp;
                end--;


            }
            else{
                i++;
            }

    }

    printf("the given array is :");
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }

return 0;
}
/*
------------------------------------------------------------------------------------------------------------------------------------------------
Q:21 WAP to count the number of inversion in a given array     //bubble short


#include<stdio.h>
int main()
{


    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in :");     //
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);

    }
    //shorting bubble
    int count=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(a[i]>a[j])
            {
                printf("(%d %d) ",a[i],a[j]);
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                count++;
            }
        }

    }


//
//    //selection short
//    int count =0;
//    for(int i=0;i<size;i++){
//        int point=i;
//        for(int j=i+1;j<size;j++){
//            if(a[i]>a[j]){
//                point=j;
//            }
//        }
//        if(point!=i){
//                 printf("(%d %d) ",a[i],a[point]);
//            int temp=a[i];
//            a[i]=a[point];
//            a[point]=temp;
//            count++;
//
//        }
//    }
//

    printf("\nThe number of inversion can be formed the array is :%d\n",count);
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }

}
/*
--------------------------------------------------------------------------------------------------------------------------------------
//Q 22:write a c program to find the maximum difference between any two element

#include<stdio.h>
int main()
{


    int size,ip;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in :");     //  4 3 5 6 3 2
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    //find the max element in array
    int max=a[0];
int m;
    for(int i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            m=i;
        }
    }
    printf("max=%d",max);
    int difference=max-a[0];
    for(int i=1; i<=m; i++)
    {
        if(max-a[i]>difference)
        {
            difference=max-a[i];
            ip=i;
        }
    }
    printf("\n maximum difference is %d -%d =%d",max,a[ip],difference);

    return 0;


}
/*
---------------------------------------------------------------------------------------------------------------------------------------------
Q:23 WAP to count all distinct pairs for a specific difference

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,difference;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in :");     //  4 3 5 6 3 2
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the differece:");
    scanf("%d",&difference);

//find pairs of difference
    int count=0;
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if((abs(a[i]-a[j]))==difference)
            {
                if(a[i]>a[j])
                {
                    printf("%d-%d=%d\n",a[i],a[j],difference);

                }
                else
                {
                    printf("%d-%d=%d\n",a[j],a[i],difference);

                }

                count++;
            }
        }
    }
    printf("\nNo of distinct pairs of %d difference is:%d",difference,count);
}



/*
-----------------------------------------------------------------------------------------------------------------------------------------------
Q: 25 WAP find maximum repeating number in a given array

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the element in :");     //  4 3 5 6 3 2
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);

    }

    //shorting the array first we are use the selection short
    for(int i=0;i<size-1;i++){
        int point =i;
        for(int j=i+1;j<size;j++){
                if(a[i]>a[j]){
                    point=j;
                }
        }
        if(i!=point){
            int temp=a[i];
            a[i]=a[point];
            a[point]=temp;
        }
    }
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
// count the maximum repeating no
int flag=0;
int count=1,max=0,istore;
for(int i=0;i<size-1;i++){
    if(a[i]==a[i+1]){
        count++;
        flag=1;
    }
    else{
            if(flag){
            if(max<count){
                max=count;
                istore=i;
            }
             flag=0;
    }
     count=1;
    }


}

//check last element
if (flag) {
        if (max < count) {
            max = count;
            istore = size - 1;
        }
    }
printf("\nThe maximum repeating no is :%d is %d times",a[istore],max);



 return 0;
}

/*
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Q :26 WAP to Print all possible combination of r element in a given array


#include<stdio.h>
int main(){
int size=5;
int a[size];
printf("Enter the element in array is:");      //1 2 3 4 5 6 7
for(int i=0;i<size;i++){
    scanf("%d,",&a[i]);
}
int end=size-1;
for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(j==end){
                continue;
            }
            else{

                        printf("%d\t",a[j]);
            }

        }
        printf("\n");
        end--;

}

return 0;
}

/*
------------------------------------------------------------------------------------------------------------------------------------------
Q 27: find the pair with given difference ------>>refer Q no 23

Q 28:find minimum distance between two number in a given array


#include<stdio.h>
#include<stdlib.h>
int main(){

int size,diff,ipoint=0,jpoint=1;
printf("Enter the size in array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
int min=abs(a[0]-a[1]);
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        diff=abs(a[i]-a[j]);

            if(diff<min){
               min=diff;
               ipoint=i;
               jpoint=j;

               }

    }
}
printf("\nThe minimum difference between %d and %d is:%d",a[ipoint],a[jpoint],min);
return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------
Q:29 rearrange the positive and negative numbers alternatively in given array








----------------------------------------------------------------------------------------------------------------------------------
Q:30 write a c program to find a maximum for each and every contiguous subarray of size k


#include<stdio.h>
int main(){
int size,k;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0 ;i<size;i++){
    scanf("%d",&a[i]);
}
printf("Enter the size of subarray to find in given array:");      //1 2 3 4 5 6 7 8
scanf("%d",&k);

//logic for finding to subarray of size k in given array
for(int i=0;i<=size-k;i++){
    for(int j=i;j<k+i;j++){
        printf("%d\t",a[j]);
    }
    printf("\n");
}

return 0;
}

/*
--------------------------------------------------------------------------------------------------------------------------------------------

Q:31 Write a C program to convert an array in such a way that it doubles its value. This will replace the next element with 0 if the
current and next elements are the same. This program will rearrange the array so that all 0's are moved to the end.


#include<stdio.h>
int main(){
int size,k;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0 ;i<size;i++){
    scanf("%d",&a[i]);
}

for(int i=0;i<size;i++){
    if((a[i]!=0)&&(a[i]==a[i+1])){      //
        a[i]=2*a[i];
        a[i+1]=0;
    }
}
//move to all 0 to end
int end=size-1;
for(int i=0;i<=end;){

    if(a[i]==0){
        int temp=a[i];
        a[i]=a[end];
        a[end]=temp;
        end--;
    }
    else{
        i++;

    }
}
printf("the give array is :");
for(int i=0;i<size;i++){
    printf("%d\t",a[i]);
}


return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------
Q:32 remove all duplicate from unsorted array using set data structure  given an unsorted array of integers print the array after removing the
duplicate element from it .we need to print distict array elements according to their first occurrence



#include<stdio.h>
int main(){
int size,k;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0 ;i<size;i++){
    scanf("%d",&a[i]);
}


//remove all duplicate element in given array
int end=size-1;
for(int i=0;i<end;i++){
    for(int j=i+1;j<=end;j++){
            if(a[i]==a[j]){
                    for(int k=j;k<=end;k++){
                        a[k]=a[k+1];

            }
            end--;
            j--;               //j is not increment because j check in to last position not only one position

            }

    }
}
printf("After remove duplicate element is:");
for(int i=0;i<=end;i++){
    printf("%d\t",a[i]);
}

return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------
Q 33: Write a c program for a 2d array of size 3 *3 and print the matix

#include<stdio.h>
int main(){

int a[3][3];
int len=sizeof(a)/sizeof(a[0]);
printf("Enter the element in array:");
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             scanf("%d",&a[i][j]);
        }

}

printf("The given matrix \n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d",a[i][j]);
    }
    printf("\n");
}




return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
Q 34: Addition of two matrix



#include<stdio.h>
int main(){

int a[3][3],b[3][3];
printf("Enter the element in first matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element in second matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("First matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("second matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

printf("addtion matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]+a[i][j]);
    }
    printf("\n");
}

return 0;
}


-----------------------------------------------------------------------------------------------------------------------------------------

Q35:substrction of two matrix


#include<stdio.h>
int main(){

int a[3][3],b[3][3];
printf("Enter the element in first matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element in second matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("First matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("second matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

printf("Subtraction matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]-a[i][j]);
    }
    printf("\n");
}

return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------

Q 36 ;Multiplication of two matrix 3*3


#include<stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3];
printf("Enter the element in first matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element in second matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("First matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("second matrix :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

//multiplication
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            c[i][j]=0;
        for(int k=0;k<3;k++){
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
}
//print the resultant matrix
printf("The Multiplication is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}

return 0;
}



------------------------------------------------------------------------------------------------------------------------------------------


Q 36 ;Multiplication of two matrix 2*2


#include<stdio.h>
int main(){
int a[2][2],b[2][2],c[2][2];
printf("Enter the element in first matrix :");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element in second matrix :");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&b[i][j]);
    }
}

printf("First matrix :\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("second matrix :\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}

//multiplication
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
            c[i][j]=0;
        for(int k=0;k<2;k++){
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
}
//print the resultant matrix
printf("The Multiplication is:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}

return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------

Q 37:Transpose of given matrix


#include<stdio.h>
int main(){

int a[3][3];
printf("Enter the element in first matrix :");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Before Transpose :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}


//print the given matix
printf("\n After Transpose :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[j][i]);
    }
    printf("\n");
}



return 0;

}

---------------------------------------------------------------------------------------------------------------------------------------------
Q 38 Sum of right diagonal of matrix 3*3



#include<stdio.h>
int main(){

int a[3][3];
printf("Enter the element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

//sum of right diagonals
int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        if(j==2-i){
                sum=sum+a[i][j];
        }
    }

}

printf("sum=%d",sum);
return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------

Q:38 sum of right diagonals in  2*2


#include<stdio.h>
int main(){

int a[2][2];
printf("Enter the element:");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

//sum of right diagonals
int sum=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

        if(j==1-i){
                sum=sum+a[i][j];
        }
    }

}

printf("sum=%d",sum);
return 0;
}


------------------------------------------------------------------------------------------------------------------------------------------------

Q 39 Sum of left diagonal of matrix 3*3



#include<stdio.h>
int main(){

int a[3][3];
printf("Enter the element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

//sum of right diagonals
int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){

        if(j==i){
                sum=sum+a[i][j];
        }
    }

}

printf("sum=%d",sum);
return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------------
Q 39 Sum of left diagonal of matrix 2*2


#include<stdio.h>
int main(){

int a[2][2];
printf("Enter the element:");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

//sum of right diagonals
int sum=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){

        if(j==i){
                sum=sum+a[i][j];
        }
    }

}

printf("sum=%d",sum);
return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------
Q:40 sum of rows and columns of matrix

#include<stdio.h>
int main(){


int a[3][3],csum=0;
printf("Enter the element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}


//find the sum of rows and columns

for(int i=0;i<3;i++){
        int rsum=0;
        int csum=0;
    for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        rsum=rsum+a[i][j];
        csum=csum+a[j][i];

    }
printf(" rows =%d",rsum);
printf(" column =%d",csum);

printf("\n");
}


return 0;
}



//----------------------------------------------------------------------------------------------------------------------------------------------------------

Q :41 lower triangular of given matrix is zero

#include<stdio.h>

int main(){
int a[3][3];
printf("Enter the element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i>0&&j<i){
                a[i][j]=0;
            printf("%d",a[i][j]);
        }
        else{
                 printf("%d",a[i][j]);

        }
    }
    printf("\n");
}



return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------

Q :42 upper triangular of given matrix is zero

#include<stdio.h>

int main(){
int a[3][3];
printf("Enter the element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
printf("\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(j>i){
                a[i][j]=0;
            printf("%d\t",a[i][j]);
        }
        else{
                 printf("%d\t",a[i][j]);

        }
    }
    printf("\n");
}



return 0;
}
--------------------------------------------------------------------------------------------------------------------------------------------

Q:43 determinant of matrix
















-----------------------------------------------------------------------------------------------------------------------------------------
Q 44: sparse matrix


#include<stdio.h>

int main(){
int a[3][3];
printf("Enter the element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
//print the given matrix
printf("The given matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
int count =0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            if(a[i][j]==0){
                count ++;
            }

    }
}
if(count>9/2){
    printf("sparse matrix");
}
else{
    printf("Dense matrix");
}


}


------------------------------------------------------------------------------------------------------------------------------------------

Q 45: equality of matrix

#include<stdio.h>

int main(){
int a[3][3],b[3][3];
printf("Enter element 1 matrix:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter element 2 matrix:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
//print the given matrix
printf("The 1st matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("The 2nd matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
int count =0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(a[i][j]==b[i][j]){
            count++;
        }
    }

}
if(count==9){
    printf("matrix are equal");
}
else{
    printf("matrix not are equal");
}

}
------------------------------------------------------------------------------------------------------------------------------------------

Q 46:identity matix


#include<stdio.h>

int main()
{
    int a[3][3];
    printf("Enter the element:");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count =0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==j)
            {
                if(a[i][j])
                {
                    count ++;
                }

            }
        }

    }
    if(count ==3)
    {
        printf("identy\n");
    }
    else
    {

        printf("not");
    }
    printf("\ndisplay:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


}

*/



