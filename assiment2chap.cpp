/*
// write a program to input user and find it is is Armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{

    int no1,no2,rem,i=0,flag2=0,flag1=0;
    float res=0.0;
    printf("Enter the number:");
    scanf("%d",&no1);
    no2=no1;
    while (no2!=0)
    {
        no2=no2/10;
        i++;
        if(no2==0)
        {
            flag1=1;
            printf("index:%d\n",i);
            break;

        }

    }
    no2=no1;

    if(flag1)
    {
        while(no2!=0)
        {

            rem=no2%10;      //1   5   3
            res=res+pow(rem,i);
            no2=no2/10;

            if(no2==0)
            {
                flag2=1;
                break;
            }
        }
    }
    if(flag2)
    {
        if(res==no1)
        {
            printf("Armstrong :%f",res);

        }
        else
        {
            printf("not Armstrong :%f",res);
        }

    }
    return 0;
}





#include<stdio.h>
#include<math.h>
int main()
{

    int no1,no2,rem,i=0,res;
    printf("Enter the number:");
    scanf("%d",&no1);
    no2=no1;
    while (no2!=0)
    {
        no2=no2/10;
        i++;
    }
    no2=no1;
    while(no2!=0)
    {
        rem=no2%10;      //1   5   3
        res=res+pow(rem,i);
        no2=no2/10;
    }
    if(res==no1)
    {
        printf("Armstrong :%d",res);
    }
    else
    {
        printf("not Armstrong :%d",res);
    }


    return 0;
}





Example: WAP to input number and swap the first and last digit
Input :  1234567    //1234
Output: 7234561     //4231

#include<stdio.h>
int main ()
{
    int no1,no2,no3,i=1,f,l,g,h,k,swapno;
    printf("enter the number:");
    scanf("%d",&no1);
    no2=no1;
    if(no2!=0)
    {
        no3=no2%10;

    }
    no2=no1;
    no2=no2/10;
    while(no2!=0)
    {
        no2=no2/10;                        //7862

        i=10*i;
    }
    no2=no1;
    f=no2/i;
    l=no3;
    no2=f;      //1234  4234
    //f=d;
    no2=no2/10;
    g=no1+f;
    h=no1;
    swapno=l*i+(no1%i);
    swapno=swapno-l+f;


    printf("f:%d\n",f);
    printf("l:%d\n",l);
    printf("ori:%d\n",no1);
     printf("swap:%d\n",swapno);

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------

Example: WAP to input the number and find the repetitive digit in number
Input: 1234215
Output: 1 occur 2 times
	2 occur 2 times.

#include<stdio.h>
int main()
{
    int no,rem,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    printf("Enter the number:");
    scanf("%d",&no);
    while(no!=0)
    {
        rem=no%10;
        no=no/10;
        switch(rem)
        {
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seven++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
        default:
            printf("invalid\n");



        }
    }
    printf("1 occurs %d times\n",one);
    printf("2 occurs %d times\n",two);
    printf("3 occurs %d times\n",three);
    printf("4 occurs %d times\n",four);
    printf("5 occurs %d times\n",five);
    printf("6 occurs %d times\n",six);
    printf("7 occurs %d times\n",seven);
    printf("8 occurs %d times\n",eight);
    printf("9 occurs %d times\n",nine);


    return 0;
}
------------------------------------------------------------------------------------------------------------------------------
.	Write a C program to print all Perfect numbers between 1 to n.


#include<stdio.h>
int main(){
int no,per;
printf("enter no:");
scanf("%d",&no);
for (int i=1;i<=no;i++){

    for(int j=1;j<=i/2;j++){
    if(i%j==0){
        per=per+j;
    }

}
if(i==per){
    printf("%d\t",per);
}
per=0;


}



return 0;
}


--------------------------------------------------------------------------------------------------------------
.	Write a C program to check whether a number is Strong number or not.


#include<stdio.h>          // 1 4 5= 1!+ 2!+ 5!=13
int main(){
int no,rem,sum=0,fact,temp;
printf("Enter the no:");
scanf("%d",&no);
temp=no;
while(no!=0){
    rem=no%10;
     no=no/10;
     fact=1;
        for(int j=1;j<=rem;j++){
        fact=fact*j;

        }
       // printf("fact=%d\n",fact);

     sum=sum+fact;


}
//printf("sum=%d\n",sum);
no=temp;
if(sum==no){
    printf("stong");
}
else{
    printf("not strong");
}


return 0;
}
/*

----------------------------------------------------------------------------------------------------------------------------
35.	Write a C program to print all Strong numbers between 1 to n.



#include<stdio.h>
int main(){
int no,rem,sum=0,fact=1,m;
printf("Enter the no:");
scanf("%d",&no);
for (int i=1;i<=no;i++){
        m=i;
        while(i!=0){
            rem=i%10;
            i=i/10;                            //1 4 5
            for(int j=1;j<rem;j++){
                fact=fact*j;
            }
            sum=sum+fact;
        }
            //i=m;
            if(sum==i){
            printf("%d\n",i);
           }

        }



return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------

//write a c program to find hcf in two numbers

#include<stdio.h>
int main(){

int no1,no2,hcf;
printf("Enter the number1 and number2:");
scanf("%d%d",&no1,&no2);
for(int i=1;i<=no1&&i<=no2;i++){
    if(no1%i==0&&no2%i==0){
        hcf=i;
    }

}
printf("%d",hcf);


return 0;
}
/*
-----------------------------------------------------------------------------------------------------------------------------
//write a c program to find lcm of two no

#include<stdio.h>
int main(){

int no1,no2,hcf;
printf("Enter the number1 and number2:");
scanf("%d%d",&no1,&no2);//10,15
int max=(no1>no2)?no1:no2;
while(1)
{
    if((max%no1==0)&&(max%no2==0))
        {
                printf("max =%d",max);
                break;
        }
       ++max;
}




return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------
*/

#include<stdio.h>
int main(){
 for(int i = -1 ; i <= 10; i++)
{ if(i<5)
 continue;
 else
 break;
 printf ("Gets printed only once!!");
}




return 0;
}























