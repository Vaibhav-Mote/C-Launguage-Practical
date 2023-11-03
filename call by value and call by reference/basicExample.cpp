/*
//call by value
#include<stdio.h>

int main(){
void swap(int,int);
int a=10,b=20;
swap(a,b);
printf("A:%d\tB:%d",a,b);
return 0;

}
void swap(int x,int y){

int temp=x;
x=y;
y=temp;
printf("X:%d\tY:%d\n",x,y);

}
---------------------------------------------------------------------------------------------------------------------------------------------
call by reference
*/
#include<stdio.h>
int main(){
int a=10,b=20;
void swap(int* ,int*);
printf("A:%d\tB:%d",a,b);
swap(&a,&b);
printf("\nA:%d\tB:%d",a,b);
return 0;
}

int swap(int *x,int *y){

int  temp=*x;
*x=*y;
*y=temp;
//printf("\nX:%d\tY:%d",*x,*y);
}


















