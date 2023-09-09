//Arithmetic operation
#include<stdio.h>
#include<math.h>

int main (){
    int a,b,sum,sub,mul,mod,div;
printf("Enter the value of a :");
scanf("%d",&a);
printf("Enter the value of b :");
scanf("%d",&b);
sum=a+b;
printf("The addition of a and b is :%d\n",sum);
sub=a-b;
printf("The substraction of a and b is :%d\n",sub);
div=a/b;
printf("The division of a and b is :%d\n",div);
mul=a*b;
printf("The miltipication of a and b is :%d\n",mul);
mod=a%b;
printf("The mod of a and b is :%d",mod);




return 0;
}
