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
*/


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

























