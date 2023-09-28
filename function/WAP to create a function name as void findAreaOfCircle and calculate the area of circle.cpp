//WAP to create a function name as void findAreaOfCircle and calculate the area of circle
#include<stdio.h>

int main(){
    void findAreaOfCircle(float);

int r;
printf("Enter the Radius of circle:");
scanf("%d",&r);


findAreaOfCircle(r);

}

void findAreaOfCircle(float m){

float a;
    a=3.14*m*m;
printf("The area of circle is:%f",a);

}
