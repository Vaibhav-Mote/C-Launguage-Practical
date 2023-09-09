#include<stdio.h>
int main()
{
    int arr[]={4,3,2,1,5};
        // 1,5,4,3,2
    int arr1[5];
    int count=0,index=3;
    for(int i=index;i<5;i++)
    {
            arr1[count]=arr[i];
            count++;
    }
    for(int i=0;i<5;i++)
    {
        arr1[count]=arr[i];
        count++;
    }
    for(int i=0;i<5;i++){


        printf("%d ",arr1[i]);
    }
    return 0;
}
