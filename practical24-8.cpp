/*
#include<stdio.h>
int main(){
// write a program to check the given number is palindeom or not using while loop

int no,rem,rev,tem;
printf("Enter the number:");
scanf("%d",&no);
tem=no;
while(no!=0){

    rem=no%10;
    no=no/10;
    rev=rev*10+rem;
}
if(tem==rev){

    printf("palindeom number.");
}
else{
    printf("not");
}

printf("%d",rev);


return 0;
}



//write a c program to check whether the no is prime or not

#include<stdio.h>
int main(){
int no,count,i=1;
printf("Enter the number:");
scanf("%d",&no);
while(i<=no){
        if(no%i==0){
            count++;
        }
        i++;

}
if(count==2){
    printf("prime");
}
else{
    printf("not prime");
}
return 0;

}
*/
#include<stdio.h>
int main(){
int no,i=2,flag=0;
printf("Enter the number:");
scanf("%d",&no);
while(i<=no/2){
    if(no%i==0){
        flag=1;
        break;
    }
    i++;
}
if(flag){
   printf("no is prime");
   }
   else{
    printf("prime");


   }
return 0;
}


/*
//write a c program to check the no is perfect  or not
#include<stdio.h>
int main(){
int no,i=1,per=0;
printf("Enter the no:");  //6
scanf("%d",&no);
while(i<no){
    if(no%i==0){      //6
        per=i+per;   //33


    }
    i++;

}
if(per==no){
    printf("perfect");
}else{
printf("not perfect");
}




return 0;
}
*/














