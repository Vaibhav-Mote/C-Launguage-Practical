
/*

*****
 ****
   **
    *
 #include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
    	for(j=1; j<=5;j++){
    		if(i<=j){  printf("*");
			}
			else{printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}


or




 #include<stdio.h>
int main(){
    int i,j;
    for(i=1; i<=5; i++){
    	for(j=1; j<=5;j++){
    		if(j>=i+1){
                    printf("*");
			}
			else{printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}



------------------------------------------------------------------------------------------------------------------------------------
*****
****
***
**
*


#include<stdio.h>
int main(){

for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++){
        if(j=6-i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}


return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------
*   *
*  *
* *
**
*****




#include<stdio.h>
int main(){

for (int i=0;i<=5;i++){
    for(int j=1;j<=5;j++){

        if(j==1||i==5||j==6-i){
            printf("*");
        }
        else{


            printf(" ");
        }

    }
    printf("\n");
}

return 0;
}


----------------------------------------------------------------------------------------------------------------------------------------
1
12
123
1234
12345



#include<stdio.h>
int main(){

for (int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){

      if (j<=i){
            printf("%2d",j);
        }
    }
    printf("\n");
}



return 0;
}


or



#include<stdio.h>
int main()
{      int n;
printf("enter no:");
scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%4d",j);

        }
        printf("\n");
    }

    return 0;
}

----------------------------------------------------------------------------------------------------------------

     *
    ***
   *****
  *******
 *********




#include<stdio.h>
int main(){

for (int i=1;i<=5;i++){
    for (int j=1;j<=9;j++){
        if(j>5-i&&j<5+i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}



return 0;
}
----------------------------------------------------------------------------------------------------------------------------

*
**
***
****
*****
****
***
**
*



#include<stdio.h>
int main(){

for(int i=1;i<=9;i++){
    for(int j=1;j<=5;j++){
        if((i>=j&&i<=5)||(j<=10-i&&i>=6)){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}



return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------

*****
*****
*****
*****
*****


#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
            printf("  *  ");

    }
    printf("\n");
}


return 0;

}

----------------------------------------------------------------------------------------------------------------------------------------------
********
*      *
*      *
********


#include<stdio.h>
int main(){
for (int i=1;i<5;i++){

    for(int j=1;j<=8;j++){

if(j==1||i==4||j==8||i==1){
       printf("*");
}

    else{
        printf(" ");
    }
    }
    printf("\n");
}

return 0;

}

--------------------------------------------------------------------------------------------------------------------------------------------
*
**
***
****
*****


#include<stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i>=j){
                    printf("*");

            }
        }
        printf("\n");
    }


return 0;
}

-------------------------------------------------------------------------------------------------------------------------------------------


*****
*  *
* *
**
*


#include<stdio.h>
int main(){

for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++){
        if(j==1||i==1||j==6-i){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}


return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *


#include<stdio.h>
int main(){



    for (int i=1;i<=6;i++){
        for(int j=1;j<=11;j++){

            if(j>=7-i&&j<=5+i){

            if((i%2==1&&j%2==0)||(i%2==0&&j%2==1)){
                 printf("*");
            }
            else{
                printf(" ");
            }
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }


return 0;
}



#include<stdio.h>
int main(){



    for (int i=1;i<=6;i++){
        for(int j=1;j<=11;j++){

            if(j>=i&&j<=12-i){

           if((i%2==1&&j%2==1)||(i%2==0&&j%2==0)){
                printf("*");
            }
            else{
                printf(" ");
            }
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
        }



return 0;
}

--------------------------------------------------------------------------------------------------------------------------

      *
     * *
    *   *
   *     *
  *       *
 * * * * * *


#include<stdio.h>
int main(){



    for (int i=1;i<=6;i++){
        for(int j=1;j<=11;j++){

            if(j>=7-i&&j<=5+i){

            if((j<=4+i &&j>=8-i &&i<6) || (i==6&&j%2==0)){
                 printf(" ");
            }
            else{
                printf("*");
            }
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }


return 0;
}

*/


/*
#include <stdio.h>

int main() {


    for (int i = 1; i <= 5; i++) {
        // Print spaces for left pyramid
        for (int j = i; j < 5; j++) {
            printf(" ");
        }

        // Print stars for the current row
        for (int j = 1; j <= 2 * i - 1; j++) {
            // Print '*' for the first and last column, or if it's the top row (i == 1)
            if (j == 1 || j == 2 * i - 1 || (i == 5&&j%2==1) ){
                printf("*");
            } else {
                printf(" ");
            }
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}

==============================================================
1
12
123
1234
12345

#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(j<=i){
            printf("%d",j);
        }
    }
    printf("\n");
}




return 0;
}
==================================================================================================
12345
1234
123
12
1


#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(j<=6-i){
            printf("%d",j);
        }
    }
    printf("\n");
}



return 0;
}
--------------------------------------------------------------------------------------------------
1
12
1 3
1  4
12345


#include<stdio.h>
int main(){

for(int i=1;i<=10;i++){
    for(int j=1;j<=10;j++){
        if(j==1||i==10||j==i){
            printf("%d",j);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}



return 0;
}

--------------------------------------------------------------------------------------------------------------------
A
AB
ABC
ABCD
ABCDE


#include<stdio.h>
int main(){
char ch='A';
for(int i=1;i<=5;i++){

    for(int j=1;j<=5;j++){
        if(j<=i){
            printf("%c",ch);
            ch++;

        }
        else{
            printf(" ");
        }


    }
    printf("\n");
    ch='A';
}
return 0;
}

--------------------------------------------------------------------------------------------------------------------
     1
    1 2
   1   3
  1     4
 1 2 3 4 5

#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
    for(int j=1;j<=9;j++){
        if(j==6-i){
            printf("1");
        }
        else if(j==4+i){
                printf("%d",i);


        }
        else if(i==5&&j%2==1){
                printf("%d",j-1);

        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}



return 0;
}

------------------------------------------------------------------------------------------------------------------------------
12345
2  5
3 5
45
5


#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
   if(j==1){
    printf("%d ",i);
   }
   else if(i<=j&&i==1){
    printf("%d ",j);
   }
   else if(j==6-i){
    printf("5");
   }
   else{
    printf("  ");
   }

    }
    printf("\n");

    }
    return 0;


}
----------------------------------------------------------------------------------------------------------------

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5



#include<stdio.h>
int main(){

for(int i=1;i<=5;i++){
        int count =i;
    for(int j=1;j<=9;j++){
        if(j>=6-i&&j<=4+i){
            printf("%d ",count);

            if(j<5){
                ++count;

            }
            else{
                --count;
            }
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}


return 0;
}








------------------------------------------------------------------------------------------
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (j = i -1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

/*
-------------------------------------------------------------------------------------------------------------
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

*/
#include <stdio.h>
int main()
{
    int i,j;
    for (i = 1; i <= 5; i++)
    {
        char ch='A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        ch--;
        for (j = i -1; j >= 1; j--)
        {
            ch--;
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
/*
------------------------------------------------------------------------------------------------------------

*   *
 * *
  *
 * *
*   *



#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){

    for(j=1;j<=5;j++){

       if(i==j||j==6-i||i==1||j==1||i==5||j==5){
        printf("* ");


       }
    else{
        printf("  ");
        }


      }
      printf("\n");

    }
    return 0;


}


-------------------------------------------------------------------------------------------------------------------------
*****
 *****
  *****
   *****
    *****




#include<stdio.h>

int main(){

for (int i=1;i<=5;i++){

    for(int j=1;j<=9;j++){

        if(j>=i&&j<=4+i){
            printf("* ");
        }
        else{
            printf("  ");
        }

    }
    printf("\n");
}


return 0;
}
----------------------------------------------------------------------------------------------------------------------------------
*     *

   *


*     *



#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){

    for(j=1;j<=5;j++){

       if((i==1&&j==1)||(i==5&&j==5)||(i==1&&j==5)||(i==5&&j==1)||(i==3&&j==3)){
        printf("* ");


       }
    else{
        printf("  ");
        }


      }
      printf("\n");

    }
    return 0;


}
*/











