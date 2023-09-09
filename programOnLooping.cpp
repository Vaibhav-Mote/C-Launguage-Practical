/*
1.	Write a C program to print all natural numbers from 1 to n. - using while loop

#include<stdio.h>
int main(){
    int no;
    printf("Enter no:");
    scanf("%d",&no);

int i=1;
while(i<=no){
    printf("%d\n",i);
    i++;

    }


return 0;
}

--------------------------------------------------------------------------------------------------------
2.	Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

#include<stdio.h>
int main(){
    int no;
    printf("Enter no:");
    scanf("%d",&no);

int i=no;
while(i>0){
    printf("%d\n",i);
    i--;

    }

return 0;
}
-------------------------------------------------------------------------------------------------------------
3.	Write a C program to print all alphabets from a to z. - using while loop


#include<stdio.h>
int main(){
    char ch='a';


while(ch<='z'){
    printf("%c\n",ch);
    ch++;

    }

return 0;
}
-----------------------------------------------------------------------------------------------------------------
4.	Write a C program to print all even numbers between 1 to 100. - using while loop

#include<stdio.h>
int main(){
    int i =1;
    while(i<=100){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }

return 0;
}
-----------------------------------------------------------------------------------------------------------------------
5.	Write a C program to print all odd number between 1 to 100.


#include<stdio.h>
int main(){
    int i =1;
    while(i<=100){
        if(i%2==1){
            printf("%d\n",i);
        }
        i++;
    }

return 0;
}
------------------------------------------------------------------------------------------------------------------------------
6.	Write a C program to find sum of all natural numbers between 1 to n.


#include<stdio.h>
int main(){
    int i =1,sum=0;
    int no;
    printf("Enter no:");
    scanf("%d",&no);

    while(i<=no){
            sum=sum+i;
    i++;

    }
printf("%d",sum);
return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------
7.	Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>
int main(){
    int i =1,sum=0;
    int no;
    printf("Enter no:");
    scanf("%d",&no);

    while(i<=no){
            if(i%2==0){
                 sum=sum+i;
            }

    i++;

    }
printf("%d",sum);
return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------
8.	Write a C program to find sum of all odd numbers between 1 to n.

#include<stdio.h>
int main(){
    int i =1,sum=0;
    int no;
    printf("Enter no:");
    scanf("%d",&no);

    while(i<=no){
            if(i%2==1){
                 sum=sum+i;
            }

    i++;

    }
printf("%d",sum);
return 0;
}
------------------------------------------------------------------------------------------------
9.	Write a C program to print multiplication table of any number.


#include<stdio.h>
int main(){
    int no,mul;
    printf("Enter no:");
    scanf("%d",&no);

int i=1;
while(i<=10){
        printf("%d\n",i*no);
i++;


    }

return 0;
}
--------------------------------------------------------------------------------------------
10.	Write a C program to count number of digits in a number.

#include<stdio.h>
int main(){
    int no,count=0;
    printf("Enter no:");
    scanf("%d",&no);


while(no!=0){
        no=no/10;
        count++;

    }
    printf("digit=%d",count);

return 0;
}
-------------------------------------------------------------------------------------------------
11.	Write a C program to find first and last digit of a number.


#include<stdio.h>
int main(){
    int no,count=0,temp;
    printf("Enter no:");
    scanf("%d",&no);
temp=no;
int x=1;
while(no!=0){
        no=no/10;
        count++;
    }

no=temp;

    for(int i=1;i<count;i++){
        x=x*10;
    }
    int first_digit=no/x;
    int last_digit=no%10;
    printf("firstdigit=%d\n",first_digit);
    printf("lastdigit=%d\n",last_digit);

return 0;
}
------------------------------------------------------------------------------------------
12.	Write a C program to find sum of first and last digit of a number.


#include<stdio.h>
int main(){
    int no,count=0,temp;
    printf("Enter no:");
    scanf("%d",&no);
temp=no;
int x=1;
while(no!=0){
        no=no/10;
        count++;
    }

no=temp;

    for(int i=1;i<count;i++){
        x=x*10;
    }
    int first_digit=no/x;
    int last_digit=no%10;
    printf("firstdigit=%d\n",first_digit);
    printf("lastdigit=%d\n",last_digit);
    printf("sum of first and last digit is:%d",first_digit+last_digit);

return 0;
}
-----------------------------------------------------------------------------------------------
13.	Write a C program to swap first and last digits of a number.

*/

#include<stdio.h>
int main(){
    int no,count=0,temp;
    printf("Enter no:");
    scanf("%d",&no);
temp=no;
int x=1;
while(no!=0){
        no=no/10;
        count++;
    }

no=temp;

    for(int i=1;i<count;i++){
        x=x*10;
    }
    int first_digit=no/x;
    int last_digit=no%10;
    printf("firstdigit=%d\n",first_digit);
   printf("lastdigit=%d\n",last_digit);    //1234567   100

    int mid=no/10;
    int j=1;
    for(int m=1;m<(count-1);m++){
         j=j*10;
    }
    mid=mid%j;
    printf("mid=%d\n",mid);
    int sum=last_digit*(x)+mid*10+first_digit;
    printf("after swapping=%d",sum);

return 0;
}
/*-----------------------------------------------------------------------------------------------------------
14.	Write a C program to calculate sum of digits of a number.

#include<stdio.h>
int main(){1
int no,rem,sum=0;
    printf("Enter no:");
    scanf("%d",&no);
    while(no!=0){
        rem=no%10;
        no=no/10;
        sum=sum+rem;
    }
    printf("sum=%d",sum);

return 0;
}
--------------------------------------------------------------------------------------------------
15.	Write a C program to calculate product of digits of a number.


#include<stdio.h>
int main(){
int no,rem,mul=1;
    printf("Enter no:");
    scanf("%d",&no);
    while(no!=0){
        rem=no%10;
        no=no/10;
        mul=mul*rem;
    }
    printf("produnct=%d",mul);

return 0;
}
-----------------------------------------------------------------------------------------------------
16.	Write a C program to enter a number and print its reverse.


#include<stdio.h>
int main(){
int no,rem,rev=0;
printf("Enter the no:");    //12345
scanf("%d",&no);
while(no!=0){
    rem=no%10;
    no=no/10;
    rev=rev*10+rem;
}
printf("revese:%d",rev);


return 0;


}
----------------------------------------------------------------------------------------------------

17.	Write a C program to check whether a number is palindrome or not.


#include<stdio.h>
int main(){
int no,rem,rev=0,temp;
printf("Enter the no:");    //12345
scanf("%d",&no);
temp=no;
while(no!=0){
    rem=no%10;
    no=no/10;
    rev=rev*10+rem;
}

(rev==temp)?printf("palindrome"):printf("not palindrome");

return 0;


}
---------------------------------------------------------------------------------------------------
18.	Write a C program to find frequency of each digit in a given integer.


#include<stdio.h>
int main()
{

    int no,first=0,second=0,third=0,forth=0,five=0,six=0,seven=0,eight=0,nine=0,zero=0,rem;
    printf("Enter the no:");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        no=no/10;
        switch(rem)
        {
        case 0:
            zero++;
            break;
        case 1:
            first++;
            break;
        case 2:
            second++;
            break;
        case 3:
            third++;
            break;
        case 4:
            forth++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
            default:
            printf("invalid inut");
        }

    }
    printf("0 occurs %d times\n",zero);
    printf("1 occurs %d times\n",first);
    printf("2 occurs %d times\n",second);
    printf("3 occurs %d times\n",third);
    printf("4 occurs %d times\n",forth);
    printf("5 occurs %d times\n",five);
    printf("6 occurs %d times\n",six);
    printf("7 occurs %d times\n",seven);
    printf("8 occurs %d times\n",eight);
    printf("9 occurs %d times\n",nine);

    return 0;

}

----------------------------------------------------------------------------------------------------------------------

19.	Write a C program to enter a number and print it in words.


#include<stdio.h>
int main()
{

    int no;
    printf("Enter the no:");
    scanf("%d",&no);
    while(no!=0)
    {
        rem1=no%10;
        no=no/10;
        rev=rev*10+rem1;
    }
    while(rev!=0)
    {
        rem2=rev%10;
        rev=rev/10;
        switch(rem2)
        {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        default:
            printf("invalid inut");
        }


    }

    return 0;

}

----------------------------------------------------------------------------------------------------------------------
20.	Write a C program to print all ASCII character with their values.

#include<stdio.h>
int main(){

for(int i=1;i<=256;i++){
    printf("%d=%c\n",i,i);
}

return 0;
}
--------------------------------------------------------------------------------------------------------------
21.	Write a C program to find power of a number using for loop.


#include<stdio.h>
int main(){
int no,power;
printf("Enter the number:");
scanf("%d",&no);
printf("Enter the power:");
scanf("%d",&power);
for(int i=1;i<=power;i++){
        no=no*power;
}
printf("power is=%d",no);

return 0;
}
---------------------------------------------------------------------------------------------------------------------
22.	Write a C program to find all factors of a number.


#include<stdio.h>
int main(){
int no;
printf("Enter the number:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
    if(no%i==0){
        printf("%d\t",i);
    }
}

return 0;
}
--------------------------------------------------------------------------------------------------------------
23.	Write a C program to calculate factorial of a number.


#include<stdio.h>
int main(){
int no,fact=1;
printf("Enter the number:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
    fact=fact*i;
}
printf("factorial:%d",fact);

return 0;
}
--------------------------------------------------------------------------------------------------------------
24.	Write a C program to find HCF (GCD) of two numbers.


#include<stdio.h>
int main(){
int no1,no2,hcf;
printf("Enter the number 1 and 2:");
scanf("%d %d",&no1,&no2);
for(int i=1;(i<=no1&&i<=no2);i++){
    if((no1%i==0)&&(no2%i==0)){
        hcf=i;

    }
}
printf("hcf=%d",hcf);
return 0;
}

---------------------------------------------------------------------------------------------------------------
25.	Write a C program to find LCM of two numbers.

#include<stdio.h>
int main(){
int no1,no2,lcm,max;
printf("Enter the number 1 and 2:");
scanf("%d %d",&no1,&no2);
max=(no1>no2)?no1:no2;
while(1){
    if((max%no1==0)&&(max%no2==0)){
        lcm=max;
        break;
    }
    max++;
}
printf("lcm=%d",lcm);


return 0;
}

-------------------------------------------------------------------------------------------------------------------

26.	Write a C program to check whether a number is Prime number or not.


#include<stdio.h>
int main(){
int no,count;
printf("Enter the number:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
    if(no%i==0){
            count++;

    }

}
if(count==2){
    printf("prime");

}
else{
    printf("not");
}

return 0;
}

------------------------------------------------------------------------------------------------------------------
27.	Write a C program to print all Prime numbers between 1 to n.


#include<stdio.h>
int main(){
int n;
printf("Enter the n:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=i;j++){

                if(i%j==0){
             count++;
    }

}

if(count==2){
    printf("%d\n",i);

        }

}

return 0;
}


-----------------------------------------------------------------------------------------------------------------
28.	Write a C program to find sum of all prime numbers between 1 to n.

#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the n:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
        int count=0;//
        for(int j=1;j<=i;j++){

                if(i%j==0){
             count++;
    }

}

if(count==2){

    sum=sum+i;

        }

}
printf("sum=%d",sum);

return 0;
}

-----------------------------------------------------------------------------------------------------------------
29.	Write a C program to find all prime factors of a number.

#include<stdio.h>
int main(){
int no,p=0,f=0;
printf("Enter the no:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
    if(no%i==0){


       p=i;
    int count =0;
    for(int j=1;j<=p;j++){
        if(p%j==0){
                count ++;

        }
    }
    if(count==2){
        printf("%d\n",i);
    }

}

}
return 0;

}
*/
















/*

--------------------------------------------------------------------------------------------------------------
30.	Write a C program to check whether a number is Armstrong number or not.

#include<stdio.h>
#include<math.h>
int main()
{

    int no1,no2,rem,i=0,res;
    printf("Enter the number:");
    scanf("%d",&no1);
    no2=no1;
    while (no2!=0)
    {
        no2=no2/10;
        i++;
    }
    no2=no1;
    while(no2!=0)
    {
        rem=no2%10;      //1   5   3
        res=res+pow(rem,i);
        no2=no2/10;
    }
    if(res==no1)
    {
        printf("Armstrong :%d",res);
    }
    else
    {
        printf("not Armstrong :%d",res);
    }

    return 0;
}
--------------------------------------------------------------------------------------------------------------------
31.	Write a C program to print all Armstrong numbers between 1 to n.

#include<stdio.h>
#include<math.h>
int main(){
int no,last_digit;
printf("Enter the no;");
scanf("%d",&no);
for(int i=1;i<=no;i++){

     int m=i;
     int n=i;
     int count =0;
    while (n!=0){
        n=n/10;
        count++;
    }

//printf("no:%d digit:%d\n",i,count);
  int sum=0;
   n=i;
while(n!=0){
    last_digit=n%10;
    sum=sum+pow(last_digit,count);
    n=n/10;

}
if(sum==m){
    printf("%d\n",m);
}
}
return 0;
}
---------------------------------------------------------------------------------------------------------------------
32.	Write a C program to check whether a number is Perfect number or not.


#include<stdio.h>
int main(){

int no,sum=0;
printf("Enter no:");
scanf("%d",&no);
for(int i=1;i<no;i++){
        if(no%i==0){
            sum=sum+i;
        }


    }
    if(sum==no){
        printf("perfect");
    }
    else{
        printf("not");
    }
    return 0;
}
------------------------------------------------------------------------------------------------------------------------
33.	Write a C program to print all Perfect numbers between 1 to n.


#include<stdio.h>
int main(){
int no,per;
printf("enter no:");
scanf("%d",&no);
for (int i=1;i<=no;i++){

    for(int j=1;j<=i/2;j++){
    if(i%j==0){
        per=per+j;
    }

}
if(i==per){
    printf("%d\t",per);
}
per=0;


}

return 0;
}
--------------------------------------------------------------------------------------------------------------------

34.	Write a C program to check whether a number is Strong number or not



#include<stdio.h>
int main(){
int no,i;
printf("Enter the no:");
scanf("%d",&no);
int m=no;
 int sum=0;
        while(no!=0){
        int last_digit=no%10;
        int fact=1;
        for(int j=1;j<=last_digit;j++){
             fact=fact*j;
        }

            sum=sum+fact;
            no=no/10;

        }
no=m;
if (no==sum){
    printf("strong");
}
else{
    printf("not");
}
return 0;
}



----------------------------------------------------------------------------------------------------------------------

35.	Write a C program to print all Strong numbers between 1 to n.


#include<stdio.h>
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
        int m=i;
        int sum=0;

        while(i!=0){
        int last_digit=i%10;
        int fact=1;
        for(int j=1;j<=last_digit;j++){
             fact=fact*j;
        }

            sum=sum+fact;
            i=i/10;

        }
     i=m;
if (i==sum){
    printf("%d\n",i);
}

}

return 0;
}

---------------------------------------------------------------------------------------------------------------------
36.	Write a C program to print Fibonacci series up to n terms.

#include<stdio.h>
int main(){
int a=0,b=1,c,no,feb=0;
printf("Enter the number:");
scanf("%d",&no);
printf("0\t");
printf("1\t");
for(int i=1;i<=no;i++){
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;

}


return 0;
}
*/








