/*
#include<stdio.h>
int main()
{
//    int size,i;
//    int *ptr;
//    printf("Enter memory required");
//    scanf("%d",&size);
//
//    for(i=0;i<size;i++){
//        printf("enter values in %u address\n",ptr);
//        scanf("%d",ptr);
//        ptr++;
//    }
//    ptr=ptr-size;
//     for(i=0;i<size;i++){
//        printf("values in %u address is %d\n",ptr,*ptr);
//        ptr++;
//    }


int a[]={1,2,3,4,5};
int *ptr;
ptr=a;
for(int i=0;i<5;i++){
   *ptr=*ptr+10;
    ptr++;
}
printf("array is:");
for(int i=0;i<5;i++){
    printf("%d-->%d\n",i,a[i]);
}
}
-----------------------------------------------------------------------------------------------------------------------
what is output of given code

#include<stdio.h>
int main(){
int *ptr,b,c,d,i=0,j=1;
int a[]={10,20,30,40,50};
ptr=&a[0];
*ptr=100;
b=a[i]+10;
c=a[i++]+20;
d=a[i+j]*2;
printf("a:%d b:%d c:%d d:%d",*a,b,c,d);



return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------
Void pointer


#include<stdio.h>
int main(){
void *ptr;
int a=10;
float b=6.48;
double d=28595.949393;
ptr=(int*)&a;
printf("ptr:%d\n",*(int*)ptr);
ptr=(float*)&b;
printf("b:%f\n",*(float*)ptr);
ptr=(double*)&d;
printf("b:%lf",*(double*)ptr);


return 0;
}


----------------------------------------------------------------------------------------------------------------------------------------------
Malloc function
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

void *ptr;
ptr=(int*)malloc(sizeof(int)*10);
for(int i=0;i<10;i++){
    scanf("%d",(int*)ptr[i]);
}
for(int i=0;i<10;i++){
    printf("%u---->%d\n",ptr[i],*ptr[i])
}





return 0;
}





























