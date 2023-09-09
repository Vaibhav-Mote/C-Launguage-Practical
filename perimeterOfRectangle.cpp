//find the perimeter of rectangle
#include<stdio.h>
#include<math.h>
int main(){

float length,breath, area,peri;
printf("Enter the length of reactangle:");
scanf("%f",&length);
printf("Enter the breath of reactangle:");
scanf("%f",&breath);
area=length*breath;
peri=2*(length+breath);
printf("The area of reactangle is :%f\n",area);
printf("The perimeter of reactangle is :%f\n",peri);
printf("size of int%lu :",sizeof(int));


return 0;
}
