/*
Q=1
#include<stdio.h>
int main(){
//write a c program to find the maximum between two numbers
int num1,num2;
printf("Enter the num1:");
scanf("%d",&num1);
printf("Enter the num2:");
scanf("%d",&num2);
num1>num2?printf("num1 is greather..."):printf("num2 is greather...");


return 0;

}


Q=2


//write a c program to find the maximum between three numbers
#include<stdio.h>
int main(){
int num1,num2,num3;
printf("Enter the numbers1;");
scanf("%d",&num1);
printf("Enter the numbers2;");
scanf("%d",&num2);
printf("Enter the numbers3;");
scanf("%d",&num3);
    num1>num2&&num1>num3 ? printf("number %d is greather....",num1) :
    num2>num3&&num2>num1 ? printf("number %d is greather...",num2) : printf(" number %d is grether...",num3);


return 0;
}


Q=3

//write a c program to check whether a number is divisible by 5 and 11 or not


#include<stdio.h>

int main(){

    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    number%5==0&&number%11==0 ? printf("The number is divisible by 5 and 11"):printf("The number is not divisible by 5 and 11 ");



return 0;
}



//Q=4
//write a c program to check wheter the year is leap or not

#include<stdio.h>
int main(){
int year;
printf("Enter the year:");
scanf("%d",&year);
year%4==0 ? printf("The %d is a leap year",year):printf("The %d is a not-leap year",year);
return 0;
}



//Q=5
//write a c program to check the given alphbate is vowel or consonant
#include<stdio.h>
int main(){
char c;
printf("Enter the Aphbate:");
scanf("%c",&c);
c=='a'||c=='e'||c=='i'||c=='o'||c=='u' ?printf("The %c is Alphabat",c):printf("The %c is consonant",c);

return 0;
}


Q=6



//write a c program to input any charcter and check wheter the it is alphabate or digit or special characters

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the any  aphabate or digit or special charactor: ");
    scanf("%c",&ch);
    ch>='A'&&ch<='Z'||ch>='a'&&ch<='z' ? printf("%c is Aphabate ",ch):
        ch>='0'&&ch<='9' ? printf("%c id digit ",ch):printf("%c is special char",ch);

return 0;
}



    //Q=7
    //write a c program to check whether the charactor is upparcase or lowercase


    #include<stdio.h>
    int main(){

        char ch;
        printf("Enter the charctor:");
        scanf("%c",&ch);
        ch>='A'&&ch<='Z'? printf("%c is a uppercase",ch):
           ch>='a'&&ch<='z'? printf("%c is a lowercase",ch):printf("%c is not charactor",ch);

    return 0;
    }

    //Q=8
    //write a c program to input cost price and selling price of a product and check profit or loss

    #include<stdio.h>
    int main(){

        float cost_price,selling_price,profit,loss;
        printf("Enter the cost price:");
        scanf("%f",&cost_price);
        printf("Enter the selling price:");
        scanf("%f",&selling_price);
        profit=selling_price-cost_price;
        loss=cost_price-selling_price;

        profit>0 ?printf(" %f is profit",profit):printf("%f is loss",loss);

    return 0;
    }





    Q=9

//write a c program to swap two numbers using third variable

#include<stdio.h>

int main(){

int a=6,b=9,c;
c=a;
a=b;
b=c;
printf("a=%d\nb=%d",a,b);


return 0;
}


Q=10

//write a c program to swap two numbers without using third variable


#include<stdio.h>

int main(){
int a=6,b=9;
//a=a-b;    // -3
//b=a+b;    //-3+6=6
//a=b-a;     //6-(-3)=9
printf("a=%d\nb=%d",a,b);

return 0;
}
*/


//Q=10

//write a c program to swap two numbers without using bitwise operator


#include<stdio.h>

int main(){
int a=6,b=7;
a=a^b;    // 110 111=001 a=1
b=a^b;    // 001 111=110 b=6
a=b^a;    // 110 001=111 a=7
printf("a=%d\nb=%d",a,b);

return 0;
}






/*
//q=1
#include<stdio.h>
int main(){
//write a c program to input marks of five subjects physics,chemistry,bio,math and computer calulate percentage and grade  according to give codition
float physics,chemistry,bio,math,computer,percentage;
printf("Enter the physics marks:");
scanf("%f",&physics);
printf("Enter the chemistry marks:");
scanf("%f",&chemistry);
printf("Enter the bio marks:");
scanf("%f",&bio);
printf("Enter the math marks:");
scanf("%f",&math);
printf("Enter the computer marks:");
scanf("%f",&computer);
percentage=((physics+chemistry+bio+math+computer)/500)*100;
printf("percetage is %f\n",percentage);
percentage>=90?printf("Gread A"):
percentage>=80?printf("Gread B"):
percentage>=70?printf("Gread C"):
percentage>=60?printf("Gread D"):
percentage>=40?printf("Gread E"):printf("Gread F");

return 0;
}

*/


//q=2
//write a c program to input basic salary of emploay and find its grass salary according to following conditon
//basic salary<=10000:HRA=20%.DA=80%
//basic salary<=20000:HRA=25%.DA=90%
//basic salary>20000:HRA=30%.DA=95%



#include<stdio.h>
int main(){
float basic_salary,grass_salary,HRA1 ,DA1,HRA2,DA2,HRA3,DA3;
printf("Enter the basic salary :");
scanf("%f",&basic_salary);
HRA1=(((20/basic_salary)*100)*basic_salary);
DA1=(((80/basic_salary)*100)*basic_salary);
HRA2=(((25/basic_salary)*100)*basic_salary);
DA2=(((90/basic_salary)*100)*basic_salary);
HRA3=(((30/basic_salary)*100)*basic_salary);
DA3=(((95/basic_salary)*100)*basic_salary);

basic_salary<=10000?printf("HRA1=%f  DA1=%f Grass salary1 =%f \n",HRA1,DA1,basic_salary+HRA1+DA1):
basic_salary<=20000?printf("HRA2=%f DA2=%f Grass salary2 =%f \n",HRA2,DA2,basic_salary+HRA2+DA2):
    printf("HRA3=%f DA3=%f Grass salary3 =%f \n",HRA3,DA3,basic_salary+HRA3+DA3);





return 0;
}









//write a c program to check wheter the number is positive or negative
/*
#include<stdio.h>
int main(){
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number<0){
    printf("%d is negetive number...",number);
}
else{
    printf("%d is a positive number...",number);
}

return 0;
}



#include<stdio.h>
int main(){
//write a c program to check whether the number is even or odd
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number%2==0){
    printf("The given number is even...");
}
else{

    printf("The given number is odd");
}


return 0;
}


#include<stdio.h>
int main(){
//write a c program to check whether the number is divisible by 5 and 11


int number;
printf("Enter the number:");
scanf("%d",&number);
if(number%5==0&&number%11==0){
    printf("The given number is divisible by 5 and 11");
}
else{

    printf("The given number is not divisible by 5 and 11");
}



return 0;

}





#include<stdio.h>
int main(){

//write a c program to check whether the character is alphabate or not
char ch;
printf("Enter the character:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
    printf("The given character is alphabate....");

}
else{
    printf("The given character is not alphabates...");
}

return 0;
}



#include<stdio.h>
int main(){

//write a c program to enter the input of cost price and selling price of the product and check it profit or loss
int cost_price,selling_price ,profit,loss;
printf("Enter the cost price:");
scanf("%d",&cost_price);
printf("Enter the selling price:");
scanf("%d",&selling_price);
profit=selling_price-cost_price;
loss=cost_price-selling_price;
if(profit>0){
    printf("Your profit is %d",profit);
}
else{
    printf("Your loss is %d",loss);
}

*/

#include<stdio.h>
int main(){
int vehicle,wheels ,tw ,fw;
printf("Enter the wheels:");
scanf("%d",&wheels);
printf("Enter the vehicle:");
scanf("%d",&vehicle);


if((wheels%2==0)&&(wheels>=2)&&(wheels>vehicle)){



    tw=wheels/2 ;   //540/2=270
    fw=tw-vehicle;   //270-200=70
    tw=vehicle-fw;    //200-70=130
    fw=vehicle-tw;
    printf("tw=%d fw=%d",tw,fw);

}
else {
        printf("invalid input");
}

return 0;
}


























































