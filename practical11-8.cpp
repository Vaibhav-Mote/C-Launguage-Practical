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

