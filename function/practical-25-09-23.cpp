/*
//print factorial of any number
#include<stdio.h>
int factroal=1;
void fact (int no){
    if(no!=0){
        factroal=factroal*no;
        no--;
        fact(no);
    }
    else{

    }

}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
fact(no);
printf("factorial:%d",factroal);
return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
find the max and min no in array using recursion

#include<stdio.h>
int min=0,max=0,i=0;
void maxmin(int a[],int size){     //126547
    if(i<size)
    {

        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<a[min])
        {
            a[min]=a[i];
        }
        i++;
        maxmin(a,size);

    }
}

int main(){
int size;
printf("Enter the size:");
scanf("%d",&size);
int a[size];
printf("Enter element:");
for(int i=0;i<size;i++){

    scanf("%d",&a[i]);
}
maxmin(a,size);
printf("max:%d",max);
printf("\nmin:%d",a[min]);


return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------
print reverse array using recursion

#include<stdio.h>
int size=5;
int end=size-1;
int mid=size/2;
int i;

int reversearray(int a[]){
    if(i<mid){
        int temp=a[i];
        a[i]=a[end];
        a[end]=temp;
        i++;
        end--;
        reversearray(a);

    }
    }

int main(){


//scanf("%d",&size);
int a[size];


printf("Enter element:");
for(int j=0;j<size;j++){
  scanf("%d",&a[j]);
}
reversearray(a);
printf("\n After reverse element:");
for(int j=0;j<size;j++){
  printf("%d\t",a[j]);
}

return 0;

}

-----------------------------------------------------------------------------------------------------------------------------------------
find all even factors using recurstion

#include<stdio.h>
int i=2;
void evenfactr(int no){
    if(i<=no){
        if(i%2==0){
            if(no%i==0){
                    printf("%d\t",i);

            }
        }
        i++;
    evenfactr(no);
    }


}
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
evenfactr(no);


return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------
print all prime no up to 1 to n using recursion

#include<stdio.h>
int i=1,count=0,j=1;
void primeNo(int no)
{

    if(i<=no)
    {
        if(j<=i){

          if(i%j==0){
            count++;
          }
          j++;

        primeNo(no); // recursive call
        }else{
            if(count==2){
                printf("%d\t",i);
            }
        j=1;
        i++;
        count=0;
        primeNo(no); // recursive call
        }

    }

}
int main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    printf("Prime numbers\n");
    primeNo(n);


    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------


*/















