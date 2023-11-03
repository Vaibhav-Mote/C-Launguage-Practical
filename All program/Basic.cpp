
/*
//write a c program to enter radius of circle and find its diameter,cirumference and area of circle
#include<stdio.h>
int main (){
    float radius,diameter,circumference,area;
printf("Enter Radius of cirle:");
scanf("%f",&radius);
printf("The Radius of cirlce is:%f\n",radius);

diameter=2*(radius);
printf("The diemeter of cirlce is:%f\n",diameter);

circumference=2*(3.14*radius);
printf("The circumference of cirlce is:%f\n",circumference);

area=3.14*(radius*radius);
printf("The areaw of cirlce is:%f",area);


return 0;
}






write a program to enter length in centermeter and convert its meter and kilometer


#include<stdio.h>
int main(){
int length;
float meter,kilometer;
printf("Enter the lenght in centimeter:");
scanf("%d",&length);
meter=length*(0.01);
printf("The %d cm is equal to %f m\n",length,meter);
kilometer=length*(0.00001);
printf("The %d cm is equal to %f km",length,kilometer);

return 0;
}






write a program to enter a tempreture in fahrenheit and converet to celsius

#include<stdio.h>
int main(){

int tempratureInFera;
float celsius;
printf("Enter the tempreture in fahrenheit :");
scanf("%d",&tempratureInFera);
celsius=(tempratureInFera-32)*5/9;
printf("The tempreture in celsius is %f",celsius);



return 0;
}






write a program to enter a tempreture in celcius and converet to fahrenheit

#include<stdio.h>
int main(){

int tempratureInCel;
float fahrenheit;
printf("Enter the tempreture in celcius :");
scanf("%d",&tempratureInCel);
fahrenheit=(tempratureInCel*9/5)+32;
printf("The tempreture in celsius is %f",fahrenheit);


return 0;

}



wirte a c program to accept input from the user and claculate the resisistance , current and voltage

#include<stdio.h>
int main(){
float register1,voltage,current;
printf("Enter the voltage and current then find register: \n");
printf("voltage:");
scanf("%f",&voltage);
printf("current:");
scanf("%f",&current);
register1=voltage/current;
printf("The register is %f:\n\n",register1);

printf("Enter the voltage and register then find current: \n");
printf("voltage:");
scanf("%f",&voltage);
printf("register:");
scanf("%f",&register1);
current=voltage/register1;
printf("The curreny is %f:\n\n",current);

printf("Enter the curreny and register then find voltage: \n");
printf("current:");
scanf("%f",&current);
printf("register:");
scanf("%f",&register1);
voltage=current/register1;
printf("The voltage is %f:",voltage);

return 0;
}





write a c program to calculate the simple interest

#include<stdio.h>
int main(){
    int principle_amount;
    float rate;
    float timeOfPeriod;
    float simpleInstreat;
printf("Enter the priciple amount :");
scanf("%d",&principle_amount);
printf("Enter the rate of instreat:");
scanf("%f",&rate);
printf("Enter the timeOfPerioid :");
scanf("%f",&timeOfPeriod);
simpleInstreat=(principle_amount*rate*timeOfPeriod)/100;
printf("The simpleInstreat of given data is:%f",simpleInstreat);


return 0;
}


write a c program to find compound instreast
*/
#include<stdio.h>
int main (){
int P,r,n,t;
float compoundInstrest;
//P=intial principle balance
//r=interst rate
//n=number of time interest applied per time peroid
//t=number of time periods elaspesd

printf("Enter the intial principle balance(P):");
scanf("%d",&P);
printf("Enter the interst rate(r):");
scanf("%d",&r);
printf("Enter the number of time interest applied per time peroid (n):");
scanf("%d",&n);
printf("Enter the number of time periods elaspesd(t):");
scanf("%d",&t);
compoundInstrest=P*(1+(r/n))^n*t;
printf("The compoud Instreat of given date is :%f",compoundInstrest);
return 0;
}


/*
Q=1

#include<stdio.h>
int main(){
//write a c program enter two angles of a triangle and find its third angle
// solution = if the angle of triangle a,b,c
int a,b,c;
printf("Enter the angle of triangle a :");
scanf("%d",&a);
printf("Enter the angle of triangle  b:");
scanf("%d",&b);
c=180-(a+b);
printf("The third angle of triangle is:%d ",c);


return 0;
}


Q=2

#include<stdio.h>
int main(){
//wrire a c program of enter base and height of a triangle and find its area
float base,height,area;
printf("Enter the base of triangle :");
scanf("%f",&base);
printf("Enter the height of trangle:");
scanf("%f",&height);
area=base*height*1/2;
printf("The area of triangle is :%f",area);


return 0;

}



#include<stdio.h>
int main(){
//write a c program to calculate area of an equilateral triangle
float a,area;
//a be the side of triangle
printf("Enter the side of triangle a:");
scanf("%f",&a);
area=0.433012*a*a;
printf("The area of an equilateral triangle:%f",area);



return 0;

}

#include<stdio.h>
int main (){
// write a c program to enter marks of five subjects and calculate total average and pecetage
float c,cpp,ds,java,html;
float average,percentage;
printf("Enter the marks of C:");
scanf("%f",&c);
printf("Enter the marks of CPP:");
scanf("%f",&cpp);
printf("Enter the marks of DS:");
scanf("%f",&ds);
printf("Enter the marks of java:");
scanf("%f",&java);
printf("Enter the marks of html:");
scanf("%f",&html);
average=(c+cpp+ds+java+html)/5;
printf("The average of all subject is:%f\n",average);
percentage=(c+cpp+ds+java+html)/500*100;
printf("The percentage of all subjects is :%f",percentage);



return 0;
}


#include<stdio.h>
int main (){
//write a c program to enter P,T,R and find simple interest
float p,t,r,simple_interest;
printf("Enter the value of p:");
scanf("%f",&p);
printf("Enter the value of t:");
scanf("%f",&t);
printf("Enter the value of r:");
scanf("%f",&r);
simple_interest=(p*r*t)/100;
printf("The simple_interest is :%f",simple_interest);


return 0;
}




#include<stdio.h>
#include<math.h>
int main (){
//write a c program to enter P,T,R and find compound interest
float p,t,r,n, compound_interest;
printf("Enter the value of initial principle  balance (p):");
scanf("%f",&p);
printf("Enter the no of time periods elapsed (t):");
scanf("%f",&t);
printf("Enter the interest rate (r):");
scanf("%f",&r);


compound_interest=p*(pow((1+r/100),t));
printf("The compound_interest is :%f",compound_interest);


return 0;
}




#include<stdio.h>
int main(){
//write a c program to enter a number and check it is even or odd
int no;
printf("Enter a number:");
scanf("%d",&no);
if(no%2==1){
    printf("The given no is odd");
}
else{
    printf("The  given no is even");
}

return 0;
}



#include<stdio.h>
int main(){
//write a c program to enter a number and check it is even or odd
int no;
printf("Enter a number:");
scanf("%d",&no);
no%2==1?printf("odd"):printf("even");

return 0;
}




#include<stdio.h>
int main(){

//write a c program to check whether the triangle is equilatoral ,isoscale or scalene triangle


int side1,side2,side3;
printf("Enter the sides of triangle:");
scanf("%d %d %d",&side1,&side2,&side3);
if(side1==side2&&side2==side3){
    printf("The given triangle is equilatoral trianagle...");
}
else if((side1==side2&&side1!=side3)||(side2==side3&&side1!=side2)||(side1==side3&&side2!=side1)){
printf("The given triangle is isoscale triangle...");
}

else if(side1!=side2!=side3){
printf("The given traingle is scalene triangle....");
}

return 0;
}


#include<stdio.h>
int main (){
//write a c program to check the given no is positive, negetive or zero
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number<0){
    printf("The given no is negetive...");

}
else if(number>0){
    printf("The given no is positive...");
}
else if (number==0){
    printf("The no is zero...");
}


return 0;
}




#include<stdio.h>
int main(){

//write a program to check whether the program is valid or not
int side1,side2,side3;
printf("Enter the side of triangle:\n");
printf("side1=");
scanf("%d",&side1);
printf("side2=");
scanf("%d",&side2);
printf("side3=");
scanf("%d",&side3);

if(((side1+side2)>side3)&&((side2+side3)>side1)&&(side1+side3)>side2){
    printf("The given triangle is valid...");
}
else{
printf("The given triangle is Invalid...");
}

return 0;
}



#include<stdio.h>
int main(){

//write a program to check whether the program is valid or not
int angle1,angle2,angle3;
printf("Enter the angle of triangle:\n");
printf("angle1=");
scanf("%d",&angle1);
printf("angle2=");
scanf("%d",&angle2);
printf("angle3=");
scanf("%d",&angle3);

if((angle1+angle2+angle3)==180){
    printf("The given triangle is valid...");
}
else{
printf("The given triangle is Invalid...");
}

return 0;
}

























