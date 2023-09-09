//write a c program to check wheter the number is positive or negative
/*
#include<stdio.h>
int main(){
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number<0){
    printf("%d is negetive number...",number);
}
else{
    printf("%d is a positive number...",number);
}

return 0;
}



#include<stdio.h>
int main(){
//write a c program to check whether the number is even or odd
int number;
printf("Enter the number:");
scanf("%d",&number);
if(number%2==0){
    printf("The given number is even...");
}
else{

    printf("The given number is odd");
}


return 0;
}


#include<stdio.h>
int main(){
//write a c program to check whether the number is divisible by 5 and 11


int number;
printf("Enter the number:");
scanf("%d",&number);
if(number%5==0&&number%11==0){
    printf("The given number is divisible by 5 and 11");
}
else{

    printf("The given number is not divisible by 5 and 11");
}



return 0;

}





#include<stdio.h>
int main(){

//write a c program to check whether the character is alphabate or not
char ch;
printf("Enter the character:");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
    printf("The given character is alphabate....");

}
else{
    printf("The given character is not alphabates...");
}

return 0;
}



#include<stdio.h>
int main(){

//write a c program to enter the input of cost price and selling price of the product and check it profit or loss
int cost_price,selling_price ,profit,loss;
printf("Enter the cost price:");
scanf("%d",&cost_price);
printf("Enter the selling price:");
scanf("%d",&selling_price);
profit=selling_price-cost_price;
loss=cost_price-selling_price;
if(profit>0){
    printf("Your profit is %d",profit);
}
else{
    printf("Your loss is %d",loss);
}

*/

#include<stdio.h>
int main(){
int vehicle,wheels ,tw ,fw;
printf("Enter the wheels:");
scanf("%d",&wheels);
printf("Enter the vehicle:");
scanf("%d",&vehicle);


if((wheels%2==0)&&(wheels>=2)&&(wheels>vehicle)){



    tw=wheels/2 ;   //540/2=270
    fw=tw-vehicle;   //270-200=70
    tw=vehicle-fw;    //200-70=130
    fw=vehicle-tw;
    printf("tw=%d fw=%d",tw,fw);

}
else {
        printf("invalid input");
}

return 0;
}


















































