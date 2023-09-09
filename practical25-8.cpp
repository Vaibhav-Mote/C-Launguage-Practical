/*
#include<stdio.h>
int main(){
//write a c program to find sum of all natural no up n th number
int no,i=1,sum=0;
printf("enter the no to find sum of all numbers:");
scanf("%d",&no);
while(i<=no){
        sum=sum+i;
i++;

}
printf("%d",sum);


return 0;
}


/*
//write a c program to find sum of all even numbers up to nth numbers
#include<stdio.h>
int main(){
int no,i=1,sum=0;
printf("Enter the no to find sum of all even no :");
scanf("%d",&no);
while(i<=no){
    if(i%2==0){
        sum=sum+i;
    }
    i++;
}
printf("%d",sum);

return 0;
}




//write a c program to find sum of all odd numbers up to nth numbers
#include<stdio.h>
int main(){
int no,i=1,sum=0;
printf("Enter the no to find sum of all odd no :");
scanf("%d",&no);
while(i<=no){
    if(i%2==1){
        sum=sum+i;
    }
    i++;
}
printf("%d",sum);

return 0;
}


/*


//write a c program to sum of digit in the given number
#include<stdio.h>
int main(){
int no,sum=0,i=1,rem;
printf("Enter the no to find the sum of all digit in no:");
scanf("%d",&no);
while(no!=0){
        rem=no%10;
        no=no/10;
        sum=sum+rem;

}
printf("%d",sum);


return 0;
}



#include<stdio.h>
int main(){

    //write a c program to find all ASCII value of their charactor
    char i='a',j='A';
    while(i<='z'){
        printf("%c-->%d \n",i,i);
        i++;
        while(j<='Z'){
            printf("%c-->%d\n",j,j);
            j++;
        }
    }


return 0;
}

#include<stdio.h>
int main(){

    //write a c program to find all ASCII value of their charactor
    int i=0;
    while(i<=256){
        printf("%c-->%d \n",i,i);
        i++;

        }



return 0;
}




//write a c program to find fibonachi series
#include<stdio.h>
int main(){
int no;
printf("Enter the number to find fibonachi series:");
scanf("%d",&no);
int a=0,b=1,c;
printf("%d\t",0);
printf("%d\t",1);
while (c<=no){
    c=a+b;
    printf("%d\t",c); // 0+1=1
                  //  1+1=2
     a=b;
      b=c;


}


return 0;
}



//write a GCF number of two numbers
#include<stdio.h>
int main(){

int no1=50,no2=70,gcd,i=1;
while (i<=no1&&i<=no2){
        if(no1%i==0&&no2%i==0){
             gcd=i;

        }
i++;

}
printf("%d",gcd);
return 0;
}

*/





