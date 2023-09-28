//WAP to create a function  and find the areaofReactangel
#include<stdio.h>
//#include "areaOfRectangle.h"

void areaOfReactangle(int ,int);
int main(){


int len,breath;
printf("Enter the length and breath:");
scanf("%d %d",&len,&breath);
areaOfReactangle(len,breath);

return 0;
}
void areaOfReactangle(int len,int breath){

int  area;
area=len*breath;
printf("area of Reactangle is:%d",area);
}
