// Selection Sort
#include<stdio.h>
int main(){


    int arr[]={3,2,5,1,4};
    int mind=0;

    for(int i=0;i<5-1;i++){

            mind = i;
        for(int j=(i+1);j<5;j++)
        {
                if(arr[j]<arr[mind])
                {
                    mind=j;
                }
        }
        if(mind!=i)
        {
            int temp = arr[i];
                arr[i]=arr[mind];
                arr[mind]=temp;
        }
    }
    for(int i=0;i<5;i++)
    {
            printf("%d ",arr[i]);
    }


    return 0;
}
