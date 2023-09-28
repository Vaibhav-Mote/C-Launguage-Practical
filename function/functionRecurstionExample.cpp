/*
1. Program to print an array

#include<stdio.h>
int i=0;
void show(int *ptr,int size){
    if(i!=size){

            printf("%d\t",*ptr);

ptr++;
i++;
show(ptr,size);
    }
}
int main(){

int size;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter the element:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
//printf("%u\n",&a[0]);
show(a,size);
return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------
2. Program to print an array in reverse order

#include<stdio.h>
void revers(int ptr[],int mid,int end,int i){
    if(i<mid){
    int temp=ptr[i];
    ptr[i]=ptr[end];
    ptr[end]=temp;
     i++;
    end--;
revers(ptr,mid,end,i);

    }


}
int main(){
int size;
printf("Enter the size:");
scanf("%d",&size);
int mid=(size-1)/2;
int i=0;
int end=size-1;
int a[size];
printf("Enter the element in arraY:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
revers(a,mid,end,i);
printf("\nAfter reverse:");
for(int j=0;j<size;j++){

    printf("%d\t",a[j]);
}

return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------
3. Program to calculate sum of an array

#include<stdio.h>
int a[5];
int i=0;
int *ptr=a;
void getelement()
{
    if(ptr==a)
    {
        printf("Enter the element in array:");
    }
    if(i<5)
    {
        scanf("%d",ptr);
        ptr++;
        i++;
        getelement();
    }
    else{
        i=0;
    }

}

void printelement(){
if(i<5){
    printf("%d\t",a[i]);
    i++;
printelement();
}
else{

    i=0;

}
}
int sum=0;
void getsum(){
    if(i<5){
    sum=sum+a[i];
    i++;
    getsum();
    }
    else{
        printf("\nSum of array is:%d",sum);
    }

}
int main()
{

    getelement();
    printelement();
    getsum();

    return 0;

}
/*
------------------------------------------------------------------------------------------------------------------------------------------
4.Program to calculate average of an array

#include<stdio.h>
int i=0,sum=0;
int getaverage(int a[]){
    if(i<5){
        sum=sum+a[i];
        i++;
        getaverage(a);
    }
        return sum/5;
}
int main(){
int a[5];
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
getaverage(a);
printf("avereage:%d",getaverage(a));
return 0;
}
//----------------------------------------------------------------------------------------------------------------------------------------------
5.Program to find the largest element of an array

#include<stdio.h>
int i=0,point=0;
void getlarge(int a[],int len){
    if(i<len){
    if(a[i]>a[point]){
        point=i;

    }
    i++;
    getlarge(a,len);
    }
}

int main(){
int a[]={1,5,4,2,3,6,7,9,8};
int len=sizeof(a)/sizeof(a[0]);
getlarge(a,len);
printf("The large element is:%d",a[point]);

return 0;
}
/*
---------------------------------------------------------------------------------------------------------------------------------------------
6.Program to find the second largest element of an array                     ----------------------------------------------------------------

#include<stdio.h>
int i=0;
int max1=0;
int max=0;
void second_largest(int a[],int n)
{
    if(i<n)
    {
        if(a[i]>max)
        {
            max1=max;
            max=a[i];
        }
        i++;
        second_largest(a,n);
    }
}
int main()
{
    int a[5],i;
    printf("Enter the element in array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    second_largest(a,5);
    printf("\nLargest number:%d\n",max);
    for(i=0; i<5; i++)
    {
        if(a[i]>max && max1<max)
        {
            max1=a[i];
        }
    }
    printf("\nSecond largest element in array is:%d\n",max1);
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
6.Program to find the second largest element of an array  using short array and remove duplicate element in array

#include<stdio.h>
int size=7;
int i=0,j=i+1,l=1;
void shortArray(int a[])
{
    if(i<size-1)
    {
        if(j<size)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];      //  13 2 5 4
                a[i]=a[j];
                a[j]=temp;
                j++;
                shortArray(a);
            }
            j++;
            shortArray(a);
        }
        else
        {
            i++;
            j=i+1;
            shortArray(a);

        }



    }


}

int main()
{
    int a[size];
    printf("Enter the no in array:");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    shortArray(a);

    for(int i=1; i<size; i++)
    {
        if(a[i]!=a[i+1])
        {
            a[l]=a[i];
            l++;

        }
    }


    printf("The shorted array is:");
    for(int i=0; i<l; i++)
    {
        printf("%d\t",a[i]);

    }


    printf("\nsize:%d",l);
    printf("\nThe second largest element is:%d",a[l-2]);

    return 0;
}

/*

--------------------------------------------------------------------------------------------------------------------------------------------------
7.Program to find the smallest element of an array

#include<stdio.h>
int i=0,point=0;
void getlarge(int a[],int len){
    if(i<len){
    if(a[i]<a[point]){
        point=i;

    }
    i++;
    getlarge(a,len);
    }
}

int main(){
int a[]={5,4,2,3,6,7,9,8};
int len=sizeof(a)/sizeof(a[0]);
getlarge(a,len);
printf("The smallest element is:%d",a[point]);

return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
8.Write a C program to print all natural numbers from 1 to n

#include<stdio.h>
int i=1;
void printNaturalNo(int no){
if(i<=no){
    printf("%d\n",i);
    i++;
    printNaturalNo(no);
}
}
int main(){
int no;
printf("Enter the no :");
scanf("%d",&no);
printNaturalNo(no);
return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------
9.Write a C program to print all natural numbers in reverse (from n to 1)

#include<stdio.h>
void printNaturalReverseNo(int no){
if(no!=0){
    printf("%d\n",no);
    no--;
    printNaturalReverseNo(no);
}
}
int main(){
int no;
printf("Enter the no :");
scanf("%d",&no);
printNaturalReverseNo(no);
return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------
10.Write a C program to print all alphabets from a to z.

#include<stdio.h>
//char ch='a';
printAlphabate(char ch){
    if(ch<='z'){
        printf("%c\t",ch);
        ch++;
        printAlphabate(ch);
    }
}
int main()
{
    char ch='a';
    printAlphabate(ch);
    return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------
11.Write a C program to print all even numbers between 1 to 100.

#include<stdio.h>
int i=1;
void printEvenNo(int no){
if(i<=no){
        if(i%2==0){
    printf("%d\n",i);
        }
    i++;
    printEvenNo(no);

}
}
int main(){
int no;
printf("Enter the no :");
scanf("%d",&no);
printEvenNo(no);
return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------
12.Write a C program to print all odd number between 1 to 100.

#include<stdio.h>
int i=1;
void printoddNo(int no){
if(i<=no){
        if(i%2==1){
    printf("%d\n",i);
        }
    i++;
    printoddNo(no);

}
}
int main(){
int no;
printf("Enter the no :");
scanf("%d",&no);
printoddNo(no);
return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------------
14.Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>
int sum=0,i=0;
void sumOfAllNaturalNo(int no){
    if(i<=no){
        sum=sum+i;
        i++;
        sumOfAllNaturalNo(no);
    }
}

int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
sumOfAllNaturalNo(no);
printf("sum:%d",sum);
return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------
 15.Write a C program to find sum of all odd numbers between 1 to n

#include<stdio.h>
int sum=0,i=0;
void sumOfAllOddNo(int no){
    if(i<=no){
            if(i%2==1){
        sum=sum+i;
            }
        i++;
        sumOfAllOddNo(no);
    }
}

int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
sumOfAllOddNo(no);
printf("sum:%d",sum);
return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------
16.Write a C program to print multiplication table of any number.

#include<stdio.h>
int i=1;
void table(int no){
    if(i<=10){
            printf("%d\t",i*no)
            i++;
    table(no);

    }
}

int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
table(no);

return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------
17.Write a C program to count number of digits in a number.

#include<stdio.h>
int count =0;
void countNO(int no){
    if(no!=0){
        no=no/10;
        count++;
        countNO(no);
    }
    else{
         printf("count :%d",count);
    }

}

int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
countNO(no);

return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------
18.Write a C program to find first and last digit of a number.

#include<stdio.h>
int count =0,div=1;
int originaln;
void flDigit(int no){
if(count==0){
    originaln=no;
}
if(no!=0){
    no=no/10;
    count++;
    div=div*10;
    flDigit(no);
}
else{
        printf("count:%d",count);
        int rem=originaln%10;
        printf("\nlast element:%d",rem);
        int fast=originaln/(div/10);
printf("\nfast:%d",fast);


}

}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
flDigit(no);

return 0;
}
/*
//---------------------------------------------------------------------------------------------------------------------------------
//19.Write a C program to find sum of first and last digit of a number.

#include<stdio.h>
int count =0,div=1;
int originaln;
void flDigit(int no){
if(count==0){
    originaln=no;
}
if(no!=0){
    no=no/10;
    count++;
    div=div*10;
    flDigit(no);
}
else{
        printf("count:%d",count);
        int rem=originaln%10;
        printf("\nlast element:%d",rem);
        int fast=originaln/(div/10);
        printf("\nfast:%d",fast);
        printf("\nfast and last is:%d:",fast+rem);


}

}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
flDigit(no);

return 0;
}
----------------------------------------------------------------------------------------------------------------------------------
20.Write a C program to swap first and last digits of a number

#include<stdio.h>
int count =0,div=1;
int originaln;
void flDigit(int no){
if(count==0){
    originaln=no;
}
if(no!=0){
    no=no/10;
    count++;
    div=div*10;
    flDigit(no);
}
else{

        printf("count:%d",count);
        int rem=originaln%10;
        printf("\nlast element:%d",rem);     //12345
        int fast=originaln/(div/10);
        printf("\nfast:%d",fast);
        int mid=originaln%(div/10);
        mid=mid/10;
        printf("\nmid:%d",mid);
         int swapp=(rem*(div/10))+mid*10+fast;
         printf("\nswap:%d",swapp);

}

}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
flDigit(no);

return 0;
}
/*
----------------------------------------------------------------------------------------------------------------------------------------------
21.Write a C program to calculate sum of digits of a number.

#include<stdio.h>
int rem=0;
int sumOfDigit(int no){
     static int sum=0;
    if(no>0){
 rem=no%10;
 sum=sum+rem;
 no=no/10;

sumOfDigit(no);
    }
    else{
    return sum;
    }
}
int main(){
int no;
printf("Enter the no:");     //1 2
scanf("%d",&no);
//sumOfDigit(no); //  normal call
printf("sum=%d",sumOfDigit(no));


return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------
22.Write a C program to calculate product of digits of a number.

#include<stdio.h>
int product=1;
    int  productOfNo(int no){
        if(no!=0){
            int rem=no%10;
            no=no/10;
            product=product*rem;
            productOfNo(no);
        }
        return product;


    }

int main(){

int no;
printf("Enter the no:");
scanf("%d",&no);
printf("%d",productOfNo(no));



return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
23.Write a C program to enter a number and print its reverse.

#include<stdio.h>
int reverseNo=0;
int reversee(int no){
    if(no!=0){
        int rem=no%10;
        reverseNo=reverseNo*10+rem;
        no=no/10;
        reversee(no);

    }
    return reverseNo;
}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
printf("%d",reversee(no));

return 0;

}


---------------------------------------------------------------------------------------------------------------------------------------------
24.Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
int reversee=0,origingalNo,count=0;
void palindromNo(int no){
if(count==0){
    origingalNo=no;
}
if(no!=0){
    int rem=no%10;
    reversee=reversee*10+rem;
    no=no/10;
    count++;
    palindromNo(no);
}else{
if(origingalNo==reversee){
    printf("The given no is palindrom");
}
else{
        printf("The given no not is palindrom");
        printf("\n%d",reversee);



}
}
}
int main(){

int no;
printf("Enter the no:");
scanf("%d",&no);
palindromNo(no);

return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------
25.Write a C program to find frequency of each digit in a given integer                    ======================================

#include<stdio.h>
int i=0,point=0;

    void frequence(int *ptr,int size){
        if(i<size){
            point=i;
        for(int j=i+1;j<size;j++){
            if(ptr[i]>ptr[j]){
               point=j;
            }
        }
        if(point!=i){
            int temp=ptr[i];
            ptr[i]=ptr[point];
            ptr[point]=temp;

        }
            i++;

            frequence(ptr,size);



        }
        else{
            for(int i=0;i<size;i++){
                printf("%d\t",ptr[i]);
            }
        }


    }

int main(){

int size;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter the element:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
frequence(a,size);
return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------
26.Write a C program to enter a number and print it in words.
#include<stdio.h>
int reversee=0;
void revers(int no){
if(no>0){
    int rem=no%10;
    reversee=reversee*10+rem;
    no=no/10;
    revers(no);

}
}

        void reverseNo(){
            if(reversee!=0){
                int rem=reversee%10;
                switch(rem){

            case 0:
                printf("zero\t");
                break;
               case 1:
                printf("one\t");
                break;
               case 2:
                printf("two\t");
                break;
               case 3:
                printf("three\t");
                break;
               case 4:
                printf("four\t");
                break;
               case 5:
                printf("five\t");
                break;
               case 6:
                printf("six\t");
                break;
               case 7:
                printf("seven\t");
                break;
               case 8:
                printf("eight\t");
                break;
               case 9:
                printf("nine\t");
                break;
               default:
                printf("invalid\t");


                }
                reversee=reversee/10;
                reverseNo();
            }

        }




int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
revers(no);
reverseNo();



return 0;

}
---------------------------------------------------------------------------------------------------------------------------------
27.Write a C program to print all ASCII character with their values.

#include<stdio.h>
int main(){
void printASCIIValues(char );
char ch='a';
printASCIIValues(ch);
return 0;
}
void printASCIIValues(char a){
    if(a<='z'){
        printf("%c-->%d\n",a,a);
        a++;
        printASCIIValues(a);
    }

}

-------------------------------------------------------------------------------------------------------------------------------------
28.Write a C program to find power of a number using recursion

#include<stdio.h>
int main()
{
    int powerrr(int ,int);
    int no,index;
    printf("Enter the no and index:");
    scanf("%d %d",&no,&index);
    int result=powerrr(no,index);
    printf("The power is:%d",result);

    return 0;
}
int i=1,powerOfNo=1;
int powerrr(int no,int index)
{
    if(i<=index)
    {
        powerOfNo=powerOfNo*no;
        i++;
        powerrr(no,index);
    }
    else
    {
        return powerOfNo;
    }

}
/*
-------------------------------------------------------------------------------------------------------------------------------
29.Write a C program to find all factors of a number.

#include<stdio.h>
int main(){
void factorsOfNo(int);
int no;
printf("Enter the no:");
scanf("%d",&no);
factorsOfNo(no);
return 0;
}
int i=1;
void factorsOfNo(int no){
    if(i<=no){
        if(no%i==0){
            printf("%d\t",i);
        }
        i++;
        factorsOfNo(no);
    }

}
---------------------------------------------------------------------------------------------------------------------------------
30.Write a C program to calculate factorial of a number

#include<stdio.h>
int main(){
int factorialOfNo(int);
int no;
printf("Enter the no:");
scanf("%d",&no);
int r=factorialOfNo(no);
printf("Factorial :%d",r);
return 0;
}
int fact=1;
int factorialOfNo(int no){
if(no>0){
    fact=fact*no;
    no--;
    factorialOfNo(no);
}
return fact;

}
-----------------------------------------------------------------------------------------------------------------------------------
31.Write a C program to find HCF (GCD) of two numbers

#include<stdio.h>
int i=1,point=0;
int Hcf(int no1,int no2){
if((i<=no1)&&(i<=no2)){
    if(no1%i==0 && no2%i==0){
        point=i;
    }
    i++;
     return Hcf (no1,no2);
}
return point;

}
int main(){
int no1,no2;
printf("Enter the no1 and no2:\n");
scanf("%d %d",&no1,&no2);
int r=Hcf(no1,no2);
printf("HCF:%d",r);


return 0;
}
/*
-------------------------------------------------------------------------------------------------------------------------------------------------------
32.Write a C program to find LCM of two numbers.

#include<stdio.h>
int i=1,point=0;
int Lcm(int no1,int no2){
       if((i>=no1)&&(i>=no2)){
    if(i%no1==0 && i%no2==0){
        point=i;
        return point;
    }
       }
    i++;
     return Lcm (no1,no2);
}
int main(){
int no1,no2;
printf("Enter the no1 and no2:\n");
scanf("%d %d",&no1,&no2);
int r=Lcm(no1,no2);
printf("LCM:%d",r);


return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------
33.Write a C program to check whether a number is Prime number or not

#include<stdio.h>
int count=0,i=1;
void primeNo(int no){
    if(i<=no){
        if(no%i==0){
            count++;
        }
        i++;
        primeNo(no);
    }
    else{
        if(count==2){
            printf("The given no is prime");
        }
        else{
            printf("The given no is not prime");
        }
    }

}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
primeNo(no);
return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
34.Write a C program to print all Prime numbers between 1 to n.

#include<stdio.h>
int j=1,i=2,count=0;
void primeNo(int no)
{

    if(i<=no)
    {
        if(j<=i)
        {

            if(i%j==0)
            {
                count++;
            }
            j++;
            primeNo(no);

        }
        else{
            if(count==2){
                printf("%d\t",i);
                count=0;
                i++;
                j=1;
                primeNo(no);
            }
            else{
                count=0;
                i++;
                j=1;
                primeNo(no);
            }
        }
    }


}
int main()
{
    int no;
    printf("Enter the no:");
    scanf("%d",&no);
    primeNo(no);


    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
35.Write a C program to find sum of all prime numbers between 1 to n

#include<stdio.h>
int j=1,i=2,count=0,sum=0;
void primeNo(int no)
{

    if(i<=no)
    {
        if(j<=i)
        {

            if(i%j==0)
            {
                count++;
            }
            j++;
            primeNo(no);

        }
        else{
            if(count==2){
                printf("%d\t",i);
                sum=sum+i;
                count=0;
                i++;
                j=1;
                primeNo(no);
            }
            else{
                count=0;
                i++;
                j=1;
                primeNo(no);
            }
        }
    }
    else{
        printf("sum:%d",sum);
    }



}
int main()
{
    int no;
    printf("Enter the no:");
    scanf("%d",&no);
    primeNo(no);


    return 0;
}


---------------------------------------------------------------------------------------------------------------------------------
36.Write a C program to find all prime factors of a number

#include<stdio.h>
int main(){
void primeFacNo(int);
int no;
printf("Enter the no:");
scanf("%d",&no);
primeFacNo(no);
return 0;
}
int i=1;
void primeFacNo(int no){
    if(i<=no){
        if(i%2==0){
            if(no%i==0){
                printf("%d\t",i);
            }
        }
        i++;
        primeFacNo(no);
    }


}
-----------------------------------------------------------------------------------------------------------------------------------
37.Write a C program to print given no is Armstrong numbers or not

#include<stdio.h>

int main()
{    void countNo(int);
     void ArmostrongNo(int);
    int no ;
    printf("Enter the no:");
    scanf("%d",&no);
    countNo(no);
    ArmostrongNo(no);


    return 0;
}
int count=0;
int i=1,fact=1,sum=0,originalNo;
void countNo(int no)
{
    if(count==0)
    {
        originalNo=no;
    }
    if(no!=0)
    {
        count++;
        no=no/10;
        countNo(no);
    }
}

void ArmostrongNo(int no2)
{

    if(no2!=0)
    {
        int rem=no2%10;
        if(i<=count)
        {
            fact=fact*rem;   //153
            i++;
            ArmostrongNo(no2);

        }
        else
        {
            sum=sum+fact;
            i=1;
            fact=1;
            no2=no2/10;
            ArmostrongNo(no2);
        }
    }
    else
    {
        if(sum==originalNo)
        {
            printf("The given no is armstrong");
        }
        else
        {
            printf("The given no is not armstrong");
        }
    }


}

/*
----------------------------------------------------------------------------------------------------------------------------------------
38.Write a C program to print all Armstrong numbers between 1 to n

#include<stdio.h>
int i=1,count=0,j,p,m=1,sum=0,k=1,fact=1;
void AllArmstrongNo(int no)
{
    if(count==0)
    {
        m=j;;
        m=p;
        m=i;

    }
    if(m<=no)
    {
        if(i!=0)
        {
            count++;
            i=i/10;
            AllArmstrongNo(no);     //153

        }
        else
        {
            if(j!=0)
            {
                int rem=j%10;
                if(k<=count)
                {
                    fact=fact*rem;
                    k++;
                    AllArmstrongNo(no);

                }
                else
                {
                    sum=sum+fact;
                    j=j/10;
                    count=1;
                    k=1;
                    AllArmstrongNo(no);


                }


            }
            else
            {
                if(p==sum)
                {
                    printf("%d\t",p);
                }
                m++;
                j = m;
                i = m;
                count = 0;
                fact = 1;
                sum = 0;
                k = 1;
                AllArmstrongNo(no);



            }




        }

    }


}

int main()
{
    int no;
    printf("Enter the no up to find all Armstrong number :");
    scanf("%d",&no);
    AllArmstrongNo(no);


    return 0;
}

//
//
//#include <stdio.h>
//#include <math.h>
//
//int i = 1, count = 0, j, p, m = 0, sum = 0, k = 1, fact = 1;
//
//void AllArmstrongNo(int no) {
//    if (m <= no) {
//        if (i != 0) {
//            count++;
//            i = i / 10;
//            AllArmstrongNo(no);
//        } else {
//            if (j != 0) {
//                int rem = j % 10;
//                if (k <= count) {
//                    fact = fact * rem;
//                    k++;
//                    AllArmstrongNo(no);
//                } else {
//                    sum = sum + fact;
//                    j = j / 10;
//                    count = 1;
//                    k = 1;
//                    AllArmstrongNo(no);
//                }
//            } else {
//                if (p == sum) {
//                    printf("%d\t", p);
//                }
//                m++;
//                j = m;
//                i = m;
//                count = 0;
//                fact = 1;
//                sum = 0;
//                k = 1;
//                AllArmstrongNo(no);
//            }
//        }
//    }
//}
//
//int main() {
//    int no;
//    printf("Enter the number up to find all Armstrong numbers: ");
//    scanf("%d", &no);
//    printf("Armstrong numbers up to %d are:\n", no);
//    AllArmstrongNo(no);
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//




/*
--------------------------------------------------------------------------------------------------------------------------------
41.Write a C program to check whether a number is Strong number or not
*/
#include<stdio.h>
int originalNo,sum=0;
void strong(int no){
    if(sum==0){
        originalNo=no;
    }
if(no>0){
    int rem=no%10;
    int fact=1;
    for(int i=1;i<=rem;i++){
        fact=fact*i;

    }

    sum=sum+fact;
    no=no/10;
    strong(no);
}
else{
    if(sum==originalNo){
        printf("The given no is Strong number");
    }
    else{
        printf("The given no is not Strong number");
    }
}



}

int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
strong(no);


return 0;

}























