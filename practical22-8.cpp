
/*

//write a c program to input user and print add sub mul and div using switch case

#include<stdio.h>
int main()
{

    int a,b ,sr_no;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("Addition:1\n");
    printf("Substraction:2\n");
    printf("multipication:3\n");
    printf("Division:4\n");
    printf("Modula:5\n");
    printf("Enter the sr no:");
    scanf("%d",&sr_no);
    switch(sr_no){
case 9:
    printf("Addition is:%d",a+b);
    break;
case 2:
    printf("substraction  is:%d",a-b);
    break;
case 3:
    printf("multipication is:%d",a*b);
    break;
case 4:
    if(b==0){
        printf("Can't divisible by 0..");
    }
    else{
        printf("division is:%d",a/b);
    }

    break;
case 5:
    printf("Modula is:%d",a%b);
    break;
default:
    printf("invalid no...");
    }


    return 0;
}


#include<stdio.h>
int main(){
//write a program to menu driven program useing switch case check number is +ve,-ve and 0
//check no is even or odd
//find max num using 3 numbers
int check_op,no,a,b,c;
printf("which opration is perform for you\n");
printf("to check no is +ve,-ve or 0:1\n");
printf("to check no is even or odd:2\n");
printf("to find max no:3\n");
scanf("%d",&check_op);
switch(check_op){

case 1:
    printf("Enter the no:");
    scanf("%d",&no);
    if(no>0){
        printf("positive...");
    }
    else if(no==0){
        printf("zero...");
    }
    else{
        printf("negative...");
    }
    break;

case 2:
    printf("Enter the no:");
    scanf("%d",&no);
    if(no%2==0){
        printf("even...");
    }
    else{
        printf("odd...");
    }
    break;

case 3:
    printf("enter the value of a ,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is greather....");
    }
    else if( b<a&&b>c){
        printf("b is greather...");
    }
    else {
        printf("c is greather...");
    }
    break;
    default:
    printf("invaid input...");

}

return 0;
}


//write a c program input from user and print minimum numbers of notes (Rs 500,400,200,100,50,20,10,5,2,1)for the required amount
#include<stdio.h>
int main()
{
    int amount,note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,coin5=0,coin2=0,coin1=0;
    printf("Enter the amount:");
    scanf("%d",&amount);//1545
    if(amount>=500)
    {
        note500=amount/500;
        amount = amount -(note500*500);
    }
    if(amount>=200)
    {
        note200=amount/200;
        amount=amount-(note200*200);
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount = amount -(note100*100);
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount = amount -(note50*50);
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount = amount -(note20*20);
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount = amount -(note10*10);
    }
    if(amount>=5)
    {
        coin5 = amount/5;
        amount = amount-(coin5*5);
    }
    if(amount>=2)
    {
        coin2 = amount/2;
        amount = amount-(coin2*2);
    }
    if(amount>=1)
    {
        coin1 = amount/1;
        amount = amount -(coin1*1);
    }
    else
    {

    }
    printf("\n500--->%d",note500);
    printf("\n100--->%d",note100);
    printf("\n200--->%d",note200);
    printf("\n50---->%d",note50);
    printf("\n20---->%d",note20);
    printf("\n10---->%d",note10);
    printf("\n5----->%d",coin5);
    printf("\n2----->%d",coin2);
    printf("\n1----->%d",coin1);
    return 0;
}
*/



#include<stdio.h>
int main()
{
    int amount,note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,coin5=0,coin2=0,coin1=0;
    printf("Enter the amount:");
    scanf("%d",&amount);//1545
    if(amount>=500)
    {
        note500=amount/500;
        amount = amount%500;
    }
    if(amount>=200)
    {
        note200=amount/200;
        amount=amount%200;
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount = amount%100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount = amount%50;
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount = amount%20;
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount = amount%10;
    }
    if(amount>=5)
    {
        coin5 = amount/5;
        amount = amount%5;
    }
    if(amount>=2)
    {
        coin2 = amount/2;
        amount = amount%2;
    }
    if(amount>=1)
    {
        coin1 = amount/1;
        amount = amount%1;
    }
    else
    {

    }
    printf("\n500--->%d",note500);
    printf("\n100--->%d",note100);
    printf("\n200--->%d",note200);
    printf("\n50---->%d",note50);
    printf("\n20---->%d",note20);
    printf("\n10---->%d",note10);
    printf("\n5----->%d",coin5);
    printf("\n2----->%d",coin2);
    printf("\n1----->%d",coin1);
    return 0;
}





















