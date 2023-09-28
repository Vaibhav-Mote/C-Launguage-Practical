//Q:2 power function
void power(int e,int ind){
    int powerrr=1;
 for(int i=1;i<=ind;i++){
        powerrr=powerrr*e;

 }
 printf("%d",powerrr);
}




//Q:3 square function
int getSquare(int a){
return a*a;
}




//Q:4 factorial function
int getfactorial(int no){   //1 2 3 4 5
int fact=1;
for(int i=1;i<=no;i++){
        fact=fact*i;
}
return fact;
}



//Q:5 getdigitsum
int getDigitSum(int no){
int sum=0,rem;
while(no!=0){
    rem=no%10;
    no=no/10;
    sum=sum+rem;

}
return sum;

}

//Q:5 getpercenteage
int getper(int s1,int s2,int s3,int s4,int s5){
int per;
per=(s1+s2+s3+s4+s5)/5;
return per;
}
