/*
//write  a c program to short the array in ascending and descending order using calloc function
#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr,size;
printf("Enter the size of array:");
scanf("%d",&size);
ptr=(int*)calloc(sizeof(int),size);
for(int i=0;i<size;i++){
    scanf("%d",&ptr[i]);
}
printf("The given value is:");
for(int i=0;i<size;i++){
    printf("%u\t",*(ptr+i));
}

for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){


if(ptr[i]> ptr[j]){
    int temp= ptr[i];
   ptr[i]= ptr[j];
    ptr[j]=temp;
}
}
}
printf("\nAfter assending  is:");
for(int i=0;i<size;i++){
    printf("%d\t",ptr[i]);
}



return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------------
//write a c program to count all distinct pair for a specific different using calloc function

#include<stdio.h>
#include<stdlib.h>
int main(){

int *ptr,size,diff;
printf("Enter the size:");
scanf("%d",&size);
ptr=(int*)calloc(sizeof(int),size);
printf("Enter the value :");
for(int i=0;i<size;i++){
    scanf("%d",&ptr[i]);
}
printf("The given value is:");
for(int i=0;i<size;i++){
    printf("%d\t",ptr[i]);
}
printf("\nEnter the difference:");
scanf("%d",&diff);
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if(abs(ptr[i]-ptr[j])==diff){
                if(ptr[i]>ptr[j]){
                    printf("%d - %d=%d\n",ptr[i],ptr[j],diff);
                }
                else{
                    printf("%d - %d=%d\n",ptr[j],ptr[i],diff);
                }

                }

        }
    }


return 0;
}

-----------------------------------------------------------------------------------------------------------
//find armstrong number in pointer of array using malloc
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
int *p,size,count;
printf("Enter the size:");
scanf("%d",&size);
p=(int*)malloc(sizeof(int)*size);
printf("Enter the element:");
for(int i=0;i<size;i++){
    scanf("%d",&p[i]);
}
//find armstrong no

for(int i=0;i<size;i++){
         count=0;
int j=p[i];
       while(p[i]>0){

        p[i]=p[i]/10;
        count++;
       }
       p[i]=j;
       int fact=0;
       while(p[i]>0){
        int rem=p[i]%10;
        p[i]=p[i]/10;
        fact=fact+ pow(rem,count);

       }
       p[i]=j;
       if(fact==p[i]){
        printf("\n The %d is Armostrong number",p[i]);
       }
       else{
        printf("\n The %d is not Armostrong number",p[i]);
       }

}



return 0;
}

/*
-------------------------------------------------------------------------------------------------------------------------------------
find the occurence in each element in array using malloc.

#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,size;
printf("Enter the size:");
scanf("%d",&size);
p=(int*)malloc(sizeof(int)*size);
printf("Enter the value:");
for(int i=0;i<size;i++){
    scanf("%d",&p[i]);
}


//short the element
for(int i=0;i<size;i++){
    int point =i;
    for(int j=i+1;j<size;j++){
        if(p[i]>p[j]){
            point=j;
        }
    }
    if(point!=i){
        int temp=p[i];
        p[i]=p[point];
        p[point]=temp;
    }

}

printf("The given value is :\n");
for(int i=0;i<size;i++){
    printf("%d\t",p[i]);
}
int count =1;
for(int i=0;i<size;i++){
    if(p[i]==p[i+1]){
        count++;
    }else{
    printf("\n%d occures %d times ",p[i],count);
    count=1;

    }
    }


return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------
WAP to add the element in specific index of array using malloc


#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,size,index,element;
printf("Enter the size :\n");
scanf("%d",&size);
p=(int*)malloc(sizeof(int)*size);
printf("Enter the element :\n");
for(int i=0;i<size-1;i++){
    scanf("%d",&p[i]);
}
printf("The given element is:");
for(int i=0;i<size-1;i++){
    printf("%d\t",p[i]);
}
//take index and element from user
printf("\nEnter the index and element:\n");
scanf("%d %d",&index,&element);

for(int i=size;i>index;i--){
        p[i]=p[i-1];
}
p[index]=element;
printf("\nThe given element is:\n");
//after inserting value
for(int i=0;i<size;i++){
    printf("%d\t",p[i]);
}

return 0;
}


-----------------------------------------------------------------------------------------------------------------------------
above question using realloc function

#include<stdio.h>
#include<stdlib.h>
int main(){
int *p,size,index,element;
printf("Enter the size :\n");
scanf("%d",&size);
p=(int*)malloc(sizeof(int)*size);
printf("Enter the element :\n");
for(int i=0;i<size;i++){
    scanf("%d",&p[i]);
}
printf("The given element is:");
for(int i=0;i<size;i++){
    printf("%d\t",p[i]);
}
//take index and element from user
p=(int*)realloc(p,1);
size=size+1;
printf("\nEnter the index and element:\n");
scanf("%d %d",&index,&element);

for(int i=size;i>index;i--){
        p[i]=p[i-1];
}
p[index]=element;
printf("\nThe given element is:\n");
//after inserting value
for(int i=0;i<size;i++){
    printf("%d\t",p[i]);
}

return 0;
}


*/


















