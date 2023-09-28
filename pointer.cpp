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

#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr;
int size;
printf("How much memory u required:");
scanf("%d",&size);
ptr=(int*)malloc(sizeof(int)*size);
for(int i=0;i<size;i++){
    scanf("%d",&ptr[i]);
}
for(int i=0;i<size;i++){
            printf("%d\n",ptr[i]);
}


return 0;
}

-----------------------------------------------------------------------------------------------------------------------------
Example of realloc function

#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr,nthali,rmanp,ethali,emap,osthali,rthali;
printf("Enter the Number of thali:");
scanf("%d",&nthali);
rmanp=nthali/10;
ptr=(int*)malloc(sizeof(int)*rmanp);
printf("Required manpower ko bhejo :\n");
for(int i=0;i<rmanp;i++){
    scanf("%d",&ptr[i]);
}
printf("\nEnter On the spot thali: ");
scanf("%d",&osthali);
ethali=osthali-nthali;
emap=ethali/10;
ptr=(int*)realloc(ptr,sizeof(int)*emap);
printf("Extrea manpower ko bhejo:");
for(int i=rmanp;i<(rmanp+emap);i++){
    scanf("%d",&ptr[i]);
}
printf("Displat all employree :");
for(int i=0;i<(rmanp+emap);i++){
    printf("%d ",ptr[i]);
}
return 0;
}
-----------------------------------------------------------------------------------------------------------------------------
Example of calloc function

#include<stdio.h>
#include<stdlib.h>
int main(){
int  *ptr,size;
printf("Enter the size of memory:");
scanf("%d",&size);
ptr=(int*)calloc(sizeof(int),size);
printf("Enter the value :");
for(int i=0;i<size;i++){
    scanf("%d",&ptr[i]);
}
printf("Display all values:");
for(int i=0;i<size;i++){
    printf("%d\t",ptr[i]);
}



return 0;
}

---------------------------------------------------------------------------------------------------------------------------------
Example of free function
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr;
ptr=(int*)malloc(sizeof(int));
*ptr=200;
printf("value on ptr:%d\n",*ptr);
printf("address of ptr:%d\n",ptr);
free(ptr);
ptr=NULL;
printf("address of ptr:%d\n",ptr);


return 0;
}





















