#include<stdio.h>
int main(){
int arr[]={3,5,4,1,2,4};
int mid = 6/2;
int *start=&arr[0];
int *end=&arr[5];

for(int i=0;i<mid;i++)
{
        int temp = *(start+i);
          *(start+i)=*(end);
          *(end)=temp;
    end--;
}   
for(int i=0;i<6;i++){
printf("%d ",arr[i]);
}

    return 0;
}