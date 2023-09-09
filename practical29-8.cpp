#include<stdio.h>
int main()
{
//write a c program swap first two and last two digit   123438  833421
    int no;
    int last_digit;
    int x=1;
    printf("Enter number:");
    scanf("%d",&no);
    int originl_no=no;
    int count=0;
    while(no!=0)
    {
        no=no/10;
        count++;
    }
    no=originl_no;
    last_digit=no%100;
//first_digit=no;
    printf("last=%d\n",last_digit);

    for(int i=2; i<count; i++)
    {
        x=x*10;
    }
    int first_digit=no/x;
    printf(" first=%d\n",first_digit);                 //12345 67   56  00
    int mid=no/100;
    int j=1;
    for(int m=1;m<(count-3);m++){
         j=j*10;
    }
    mid=mid%j;
    printf("mid=%d\n",mid);
    int sum=last_digit*(x)+mid*100+first_digit;
    printf("after swapping=%d",sum);

    return 0;
}


/*
-------------------------------------------------------------------------------------------------------------------------
pattern 3
*****
12345
*****
678910
*****


#include<stdio.h>
int main(){
    int no=1;
for(int i=1;i<=5;i++){


    for(int j=1;j<=5;j++){
        if(i%2==1){
            printf(" *");
        }
        else if(i%2==0){
            printf(" %d",no++);
        }
    }
    printf("\n");
}
return 0;
}
-----------------------------------------------------------------------------------------------------------------------
pattern 4
12345
ABCD
678
EF
9

#include<stdio.h>
int main(){
int no=1;
char ch='A';
for (int i=1;i<=5;i++){

    for(int j=1;j<=6-i;j++){
        if (i%2==1){
            printf("%4d",no);
            no++;
        }
        else{
            printf("%4c",ch);
            ch++;
        }
    }
    printf("\n");
}


return 0;
}

------------------------------------------------------------------------------------------------------------------
pattern 5
1
4  9
16 25 36
49 64 81 100

#include<stdio.h>
#include<math.h>
int main(){
int no=1;
for(int i=1;i<=4;i++){

    for(int j=1;j<=4;j++){
        if(j<=i){

                int fact=pow(no,2);
                printf("%4d",fact);
                no++;

        }
    }
    printf("\n");
}




return 0;
}
/*
-----------------------------------------------------------------------------------------------------------------------------------------------
A
BC
CDE
EFGH
HIJKL

#include<stdio.h>
int main(){

char ch ='A';
 for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
    if(i>=6-j){
        printf("%4c",ch++);
    }
}
printf("\n");

}



return 0;
}





*/






































