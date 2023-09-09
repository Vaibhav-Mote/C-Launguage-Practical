
/*
Example1

Write a C program to check whether an alphabet is vowel or consonant using if else. How to check vowels and
 consonants using if else in C programming. C Program to input a character from user and check whether it is vowel
  or consonant. Logic to check vowel or consonant in C programming.
Example
Input
Input character: a
Output
'a' is vowel


#include<stdio.h>
int main(){
char ch;
printf("Enter the charecter:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    printf("vowels..");
}
else{
    printf("consonant...");
}


return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------

Example2
Write a C program to check whether a triangle is valid or not if angles are given using if else. How to check whether
a triangle can be formed or not, if its angles are given using if else in C programming. Logic to check triangle validity
if angles are given in C program.
Example
Input
Input first angle: 60
Input second angle: 30
Input third angle: 90
Output
The triangle is valid


#include<stdio.h>
int main(){

int ang1,ang2,ang3;
printf("Enter the angles of triangles:");
scanf("%d %d %d",&ang1,&ang2,&ang3);
if((ang1+ang2+ang3)==180){


    printf("Valid..");
}
else{
    printf("Not valid...");
}

return 0;

}
---------------------------------------------------------------------------------------------------------------------------------------------
Example3

Write a C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.
How to check whether a triangle is equilateral, scalene or isosceles triangle in C programming. Logic to classify triangles as equilateral,
 scalene or isosceles triangle if sides are given in C program.
Example
Input
Input first side: 30
Input second side: 30
Input third side: 30
Output
Triangle is equilateral triangle





#include<stdio.h>
int main(){

float side1,side2,side3;
printf("Enter the sides1 of triangle:");
scanf("%f",&side1);
printf("Enter the sides2 of triangle:");
scanf("%f",&side2);
printf("Enter the sides2 of triangle:");
scanf("%f",&side2);                                //55 55 66
if((side1==side2)&&(side2==side3)){
    printf("Equilateral triangle...");
}
//else if(((side1==side2)||(side2!=side3))||((side2==side3)||(side2!=side1))||((side1==side3)||(side3!=side2))){
  //  printf("Isoscale triangle....");

else if((side1==side2)||(side2==side3)||(side3=side1)){
    printf("Isoscale triangle....");
}

else{

printf("scalene triangle....");

}

return 0;

}
----------------------------------------------------------------------------------------------------------------------------------

Example4:
Write a C Program to input two angles from user and find third angle of the triangle. How to find all angles of a triangle
if two angles are given by user using C programming. C program to calculate the third angle of a triangle if two angles are given.
ExampleInput
Enter first angle: 60
Enter second angle: 80
Output
Third angle = 40



#include<stdio.h>
int main(){

int ang1 ,ang2 ,ang3;
printf("Enter the angle1:");
scanf("%d",&ang1);
printf("Enter the angle2:");
scanf("%d",&ang2);
ang3=180-(ang1+ang2);
printf("Thrid angle is %d",ang3);


return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------


Write a C program to find all roots of a quadratic equation using if else. How to find all roots of a quadratic equation
using if else in C programming. Logic to find roots of quadratic equation in C programming.
Example
Input
Input a: 8
Input b: -4
Input c: -2
Output
Root1: 0.80
Root2: -0.30


#include<stdio.h>
#include <math.h>
int main(){


int a,b,c;
double root1,root2,determinant ,realp,imgp;
printf("Enter the value of a b c:\n");
scanf("%d %d %d",&a,&b,&c);
determinant= b*b-(4*a*c);
if(determinant>0){
    root1=(-b+ sqrt(determinant))/(2*a);
   root2=(-b- sqrt(determinant))/(2*a);
    printf("determinant=%.2f",determinant);
    printf("Root1=%.2lf Root2=%.2lf",root1,root2);
}
else if(determinant==0){
        root1=root2=-b/(2*a);
        printf("determinant=%.2f",determinant);
    printf("Root1=%.2lf Root2=%.2lf",root1,root2);
}
else{

    realp=-b/(2*a);
    imgp=sqrt(-determinant)/(2*a);
    printf("determinant=%.2f",determinant);
    printf("Root1=%.2lf+%.2lf and Root2=%.2lf+%.2lf",realp,imgp,realp,imgp);
}


return 0;
}
/*
--------------------------------------------------------------------------------------------------------------------------------------

Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple
interest in C programming. Logic to find simple interest in C program.

Example
Input
Enter principle: 1200
Enter time: 2
Enter rate: 5.4
Output
Simple Interest = 129.600006

Simple Interest formula

where
 P is the principle amount
 T is the time
R is the rate



#include<stdio.h>
int main(){
float p,t,r ,si;
printf("Enter the principle time and rate:");
scanf("%f  %f  %f",&p,&t,&r);
si=(p*t*r)/100;
printf("simple instrest:%f",si);


return 0;
}
---------------------------------------------------------------------------------------------------------------


Example 8
Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest. How to calculate
compound interest in C programming. Logic to calculate compound interest in C program.
Example
Input
Enter principle (amount): 1200
Enter time: 2
Enter rate: 5.4
Output
Compound Interest = 1333.099243
Compound Interest formula
Formula to calculate compound interest annually is given by.

Where,
P is principle amount
R is the rate and
T is the time span


#include<stdio.h>
#include<math.h>
int main(){
float p,t,r ,ci;
printf("Enter the principle time and rate:");
scanf("%f  %f  %f",&p,&t,&r);
ci=p* pow(1+r/100,t);
printf("compound instrest:%f",ci);


return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------

Example9:
Write a C program to input week number(1-7) and print day of week name using switch case. C program to find week
day name using switch case. How to find day name of week using switch case in C programming.
Example
Input
Input week number(1-7): 2
Output
Tuesday



#include<stdio.h>
int main()
{
    int no;
    printf("Enter any no 1-7:");
    scanf("%d",&no);

        switch(no)
        {

        case 1:
            printf("Monday..");
            break;
        case 2:
            printf("Tuesday..");
            break;
        case 3:
            printf("Wednesday..");
            break;
        case 4:
            printf("Thursday..");
            break;
        case 5:
            printf("Friday..");
            break;
        case 6:
            printf("Saturday..");
            break;
        case 7:
            printf("Sunday..");
        default:
            printf("invalid input...");

    }

    return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------

Example 10
Write a C program to input month number and print total number of days in month using switch...case. C program to find
total number of days in a month using switch...case. Logic to print number of days in a month using switch...case in C programming.
Example
Input
Input month number: 3
Output
Total number of days = 31



#include<stdio.h>
int main()
{

    int no;
    printf("Enter any no 1-12:");
    scanf("%d",&no);

        switch(no)
        {
        case 1:
            printf("Total number of days = 31");
            break;
        case 2:
            printf("Total number of days = 30");
            break;
        case 3:
            printf("Total number of days = 31");
            break;
        case 4:
            printf("Total number of days = 30");
            break;
        case 5:
            printf("Total number of days = 31");
            break;
        case 6:
            printf("Total number of days = 30");
            break;
        case 7:
            printf("Total number of days = 31");
            break;
        case 8:
            printf("Total number of days = 31");
            break;
        case 9:
            printf("Total number of days = 30");
        case 10:
            printf("Total number of days = 31");
        case 11:
            printf("Total number of days = 30");
            break;
        case 12:
            printf("Total number of days = 31");
        default:
            printf("invalid input...");

        }

    return 0;
    }
    ----------------------------------------------------------------------------------------------------------------------------------


    Example12
There is a JAR full of candies for sale at a mall counter. JAR has the capacity N, that is JAR can contain maximum N candies when
 JAR is full. At any point of time. JAR can have M number of Candies where M<=N. Candies are served to the customers. JAR is never
  remain empty as when last k candies are left. JAR if refilled with new candies in such a way that JAR get full.
Write a code to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of
 candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.
Output should give number of Candies sold and updated number of Candies in JAR.
If Input is more than candies in JAR, return: “INVALID INPUT”
Given,
N=10, where N is NUMBER OF CANDIES AVAILABLE
K =< 5, where k is number of minimum candies that must be inside JAR ever.
Example 1:(N = 10, k =< 5)
•	Input Value
o	3
•	Output Value
o	NUMBER OF CANDIES SOLD : 3
o	NUMBER OF CANDIES AVAILABLE : 7
Example : (N=10, k<=5)
•	Input Value
o	0
•	Output Value
o	INVALID INPUT
o	NUMBER OF CANDIES LEFT : 10


    #include<stdio.h>
    int main(){
    int m, n=10,k;
    printf("number of candies one customer can order  point of time:");
    scanf("%d",&m);
    k=n-m;
    if((m<=n)&&(k>=5)){
        printf("number of candie sold %d\n",m);
        printf("number of available candie %d",k);
    }
    else{


        printf("invalid input");
    }


    return 0;
    }


    ------------------------------------------------------------------------------------------------------------------------------------------

    Example13
A washing machine works on the principle of Fuzzy System, the weight of clothes put inside it for washing is uncertain But based on
 weight measured by sensors, it decides time and water level which can be changed by menus given on the machine control area.
For low level water, the time estimate is 25 minutes, where approximately weight is between 2000 grams or any nonzero positive number
 below that.
For medium level water, the time estimate is 35 minutes, where approximately weight is between 2001 grams and 4000 grams.
For high level water, the time estimate is 45 minutes, where approximately weight is above 4000 grams.
Assume the capacity of machine is maximum 7000 grams
Where approximately weight is zero, time estimate is 0 minutes.
Write a function which takes a numeric weight in the range [0,7000] as input and produces estimated time as output is: “OVERLOADED”,
 and for all other inputs, the output statement is
“INVALID INPUT”.
Input should be in the form of integer value –
Output must have the following format –
Time Estimated: Minutes

Example:
•	Input value
2000
•	Output value
Time Estimated: 25 minutes


    #include<stdio.h>

    int main(){

    int weight;
    printf("Enter the weight:");
    scanf("%d",&weight);
    if(weight<=0){
        printf("Invalid");
    }
   else if(weight>=1&&weight<=2000){
        printf("Time Estimated: 25 minutes");
    }
    else if(weight>2001&&weight<=4000){
        printf("Time Estimated: 35 minutes");

    }
     else if(weight>4001&&weight<=7000){
        printf("Time Estimated: 45 minutes");

    }
    else{
        printf("Overloaded.....");
    }

    return 0;
    }

-------------------------------------------------------------------------------------------------------------------------------------------

Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 150 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
How to calculate electricity bill using if else in C programming. Program to find electricity bill using if else in C.
Logic to find net electricity bill in C program.



#include<stdio.h>

int main(){


float amount ,total_amt,sur_charge,unit;
printf("Enter the unit:");
scanf("%f",&unit);
if(unit>0&&unit<=50){

    amount=unit*0.50;
}
 if(unit>50&&unit<=150){

    amount=25+(unit-50)*0.75;
    printf("%f",amount);
}
 if(unit>150&&unit<=250){
    amount=100+(unit-150)*1.20;
    printf("%f\n",amount);
}
else {

    amount=225+(unit-250)*1.50;
printf("amount=%f\n",amount);
}
sur_charge=amount*0.20;
total_amt=amount+sur_charge;
printf("%f",total_amt);



return 0;}



/*

#include<stdio.h>
int main(){
int a,b,c;
a=6;
b=6;
if(a+b+2>>3&&5>>6+2){
printf("hi");
}
else{
    printf("hello..");
}


return 0;

}



//Programme demonstrate the discount on bill
#include<stdio.h>
#include<conio.h>
int main(){
int items;
float discount ,bill,price;

printf("\n enter the number of items purchased:");
scanf("%d",&items);
printf("\n enter the price of items purchased:");
scanf("%f",&price);
bill=items*price;
printf("\n the bill before discount %2f",bill);
if(bill>1000&&bill<=5000)
{
discount =bill*0.1;
bill=bill-discount;}
else if(bill>5000){
discount =bill*0.2;
bill=bill-discount;
}
printf("\n the final bill is %2f",bill);
getch();
}


#include<stdio.h>
int main(){
int f=1,no;
printf("enter the no:");
scanf("%d",&no);
while(no>0){
    f=no*f;
   // printf("fact=%d\n",no);
    no--;

}
printf("%d",f);



return 0;
}
-----------------------------------------------------------------------------------------------------------------------

There are total n number of Monkeys sitting on the branches of a huge Tree. As travelers offer Bananas and Peanuts, the Monkeys jump down
 the Tree. If every Monkey can eat k Bananas and j Peanuts. If total m number of Bananas and p number of Peanuts are offered by travelers,
 calculate how many Monkeys remain on the Tree after some of them jumped down to eat.
At a time one Monkeys gets down and finishes eating and go to the other side of the road. The Monkey who climbed down does not climb
 up again after eating until the other Monkeys finish eating.
Monkey can either eat k Bananas or j Peanuts. If for last Monkey there are less than k Bananas left on the ground or less than j
Peanuts left on the ground, only that Monkey can eat Bananas(<k) along with the Peanuts(<j).
Write code to take inputs as n, m, p, k, j and return  the number of Monkeys left on the Tree.
    Where, n= Total no of Monkeys
        k= Number of eatable Bananas by Single Monkey (Monkey that jumped down last may get less than k Bananas)
        j = Number of eatable Peanuts by single Monkey(Monkey that jumped down last may get less than j Peanuts)
        m = Total number of Bananas
        p  = Total number of Peanuts
Remember that the Monkeys always eat Bananas and Peanuts, so there is no possibility of k and j having a value zero
Example :
Input Values
20
2
3
12
12
Output Values
Number of Monkeys left on the tree:10


*/


#include<stdio.h>
int main(){
int no_monkey,eat_banana,eat_peanuts,total_banana,total_peanuts;
printf("Enter the total number of monkey:");
scanf("%d",&no_monkey);
printf("Enter the total number of banana:");
scanf("%d",&total_banana);
printf("Enter the no of eat banana:");
scanf("%d",&eat_banana);
printf("Enter the total number of peanuts:");
scanf("%d",&total_peanuts);
printf("Enter the no of eat peanuts:");
scanf("%d",&eat_peanuts);
if(eat_banana<=total_banana&&eat_peanuts<=total_peanuts){


}



return 0;
}


























