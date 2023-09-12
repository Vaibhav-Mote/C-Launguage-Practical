/*
    Q 1 //write a c program to enter the five element in array and show it
#include<stdio.h>
int main(){
int  a[5];
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}


return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------

Q2: sum of all element in array

#include<stdio.h>
int main(){
int  a[5],sum=0;
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
    sum=sum+a[i];
}
printf("\nSUM IS:%d",sum);


return 0;
}
-----------------------------------------------------------------------------------------------------------------------------------------------
//wirte a c program to find max and min no in array

#include<stdio.h>
int main(){
int  a[5];
printf("Enter the element in array:");
for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("The given array is :");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);

}
int max=a[0],min=a[0];
for(int i=1;i<5;i++){
        //max=max>a[i]?max:a[i];
        //min=min<a[i]?min:a[i];
if(max>a[i]){
    max=max;
}
else{
    max=a[i];
}

       //min=min<a[i]?min:a[i];
if(min<a[i]){
    min=min;
}
else{
    min=a[i];
}
}
printf("min=%d max=%d",min,max);



return 0;
}

--------------------------------------------------------------------------------------------------------------------------
  Q4   write a c program to arrange the element in asseding order


#include<stdio.h>
int main(){
int a[7];
printf("Enter the element:");
for(int i=0;i<5;i++){

    scanf("%d",&a[i]);
}
for(int i=0;i<4;i++){
    for(int j=i+1;j<5;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("After asending order:");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}



return 0;}


--------------------------------------------------------------------------------------------------------------------------------------------
Q 5: find missing element in shorted array


#include<stdio.h>
int main(){

int a[5];
int len=sizeof(a)/sizeof(a[0]);
printf("Enter the shored element in array:");
for(int i=0;i<5;i++){

    scanf("%d ",&a[i]);
}
printf("Missing element is :");
for(int i=0;i<len-1;i++){
    for(int j=a[i];j<a[i+1]-1;j++){
        printf("%d ",++j);
    }
}

return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
Q:6 Merge two array in desecnding order


#include<stdio.h>
int main()
{
    int a[5],b[5];
    int len1=sizeof(a)/sizeof(a[0]);
    int len2=sizeof(b)/sizeof(b[0]);
    printf("Enter the element in first array:");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element in second array:");
    for(int i=0; i<5; i++)
    {

        scanf("%d",&b[i]);
    }

//merge above two array
    int c[10];
    int count=0;
    for(int i=0;i<len1;i++){
        c[count]=a[i];
        count++;
    }

    for(int i=0;i<5;i++){
        c[count]=b[i];
        count++;
    }



    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++ ){
                if(c[i]<c[j]){
                    int temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }

        }
    }
    printf("merge array is:");
    for(int i=0;i<10;i++){
        printf("%d ",c[i]);
    }

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------

write a c program to separate the even and odd numbers in separate array

*/
#include<stdio.h>
int main(){

int a[6],e[6],o[6];
printf("Enter the element in array:\n");
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
}
int m=0;

for(int i=0;i<6;i++){
    if(a[i]%2==0){
            e[m]=a[i];
        m++;
    }
}
int n=0;

for(int i=0;i<6;i++){
    if(a[i]%2==1){
            o[n]=a[i];
    n++;

    }
}
printf("Even:");
for(int i=0;i<m;i++){
    printf("%d ",e[i]);
}
printf("\nodd:");
for(int i=0;i<n;i++){
    printf("%d ",o[i]);
}



return 0;
}

































