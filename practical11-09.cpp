/*
//write a c program find smallest missing element in shorted array
#include<stdio.h>
int main(){

int size,j;
printf("Enter the size of array:");
scanf("%d",&size);
int a[size];
printf("Enter the element in array:");
for(int i=0;i<size;i++){
    scanf("%d",&a[i]);
}
printf("The given array is :");
for(int i=0;i<size;i++){
    printf("%d",a[i]);

}

for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\nAfter Shorting array:");
for(int i=0;i<size;i++){
    printf("%d ",a[i]);
}
printf("\nThe missing element is:\n");
 int b[j],m=0;
for(int i=0;i<size-1;i++){
    for(int j=a[i];j<a[i+1]-1;){
        printf("%d ",++j);
       b[m]=j;
        m++;
    }
}
printf("\nm array is :");
for(int i=0;i<m;i++){
    printf("%d ",b[i]);
}

printf("\nsmallest missing element is %d:",b[0]);



return 0;
}

------------------------------------------------------------------------------------------------------------------------
//ISRO MISSITION MESSAG
#include<stdio.h>
int main(){
int a[12]={88,87,73,70,36,87,77,36,83,86,87,77};
printf("ISRO MESSAGE:");
for(int i=11;i>=0;i--){
printf("%c",a[i]-4);
}

return 0;
}
-----------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main(){
int a[40]={38,83,90,88,37,88,73,87,70,92,84,89,37,76,83,78,91,84,82,37,49,54,81,37,70,94,89,78,73,70,94,89,78,73,70,37,82,70,37,78};
int length=sizeof(a)/sizeof(a[0]);
//printf("LEN:%d",length);
for(int i=length-1;i>=0;i--){
    printf("%c",a[i]-5);
}


return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------

write a c program to display next grater element in given unsoted array .element for which no greater element exist. consider next
 element as -1

*/
#include<stdio.h>
int main(){

int a[6];
printf("Enter the value in array:");
for(int i=0;i<6;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<5;i++){
    if(a[i]<a[i+1]){
        printf("%d ",a[i+1]);
    }
    else{
        printf("%d ",-1);
    }
}

return 0;
}


----------------------------------------------------------------------------------------------------------------------------------------------

//write a c program to count all distinct pairs for a specific difference

#include<stdio.h>
int main(){
int a[5],dif;
printf("Enter the element in array:\n");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("The given  array is:\n");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}

printf("\nEnter the difference:\n");
scanf("%d",&dif);

for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if((a[i]-a[j]==dif)||(a[j]-a[i]==dif)){
            printf("\nThe difference of %d - %d =%d",a[i],a[j],dif);
        }
    }
}



return 0;

}


*/




