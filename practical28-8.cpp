
//write a c program to find all prime no between up to nth no
#include<stdio.h>
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);

for(int i=2;i<=no;i++){
        int count=0;
    for(int j=1;j<=i;j++){

        if(i%j==0){
            count++;
        }

    }
    if(count ==2){
            printf("%d\n",i);

    }
}

return 0;
}

------------------------------------------------------------------------------------------------------------------------------
//write a c program to print all perfect no up to nth no

#include<stdio.h>
int main(){

int no,sum;
printf("Enter no:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
        sum=0;
    for(int j=1;j<=i/2;j++){
        if(i%j==0){
            sum=sum+j;
        }

    }
    if(sum==i){
        printf("%d\n",i);
    }
}


return 0;
}




-------------------------------------------------------------------------------------------------------
//write a c program to find duck no up nth number

#include<stdio.h>
int main(){

int no,rem;
printf("Enter no:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
        int m=i;
       int flag=0;
        while(m!=0){
       rem=m%10;

        if(rem==0){
           flag=1;
            break;

        }
        m=m/10;
    }
    if(flag){
             printf("%d\n",i);

    }

}
return 0;
}

----------------------------------------------------------------------------------------------------
//write a c program to find all strong numbers up to nth number

#include<stdio.h>
int main(){
int no;
printf("Enter the no:");
scanf("%d",&no);
for(int i=1;i<=no;i++){
        int m=i;
        int sum=0;

        while(i!=0){
        int last_digit=i%10;
        int fact=1;
        for(int j=1;j<=last_digit;j++){
             fact=fact*j;
        }

            sum=sum+fact;
            i=i/10;

        }
     i=m;
if (i==sum){
    printf("%d\n",i);
}

}

return 0;
}
------------------------------------------------------------------------------------------------------------------------------------
//write a c program to print all armstrong no up to nth
#include <stdio.h>
#include <math.h>
int main()
{    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Armstrong numbers up to %d:\n", n);
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int numDigits = 0;
        int temp = i;

        while (temp != 0)
        {
            temp /= 10;
            numDigits++;
        }
        int sum = 0;
        temp = i;
        while (temp != 0)
        {   int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }
        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}


*/

#include<stdio.h>
#include<math.h>
int main(){
int no,last_digit;
printf("Enter the no;");
scanf("%d",&no);
for(int i=1;i<=no;i++){

     int m=i;
     int n=i;
     int count =0;
    while (n!=0){
        n=n/10;
        count++;
    }

//printf("no:%d digit:%d\n",i,count);
  int sum=0;
   n=i;
while(n!=0){
    last_digit=n%10;
    sum=sum+pow(last_digit,count);
    n=n/10;

}
if(sum==m){
    printf("%d\n",m);
}

}

return 0;
}






