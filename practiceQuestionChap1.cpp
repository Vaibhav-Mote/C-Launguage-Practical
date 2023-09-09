
/*
Chef has to travel to another place. For this, he can avail any one of two cab services.
•	The first cab service charges XX rupees.
•	The second cab service charges YY rupees.
Chef wants to spend the minimum amount of money. Which cab service should Chef take?
Input Format
•	The first line will contain TT - the number of test cases. Then the test cases follow.
•	The first and only line of each test case contains two integers XX and YY - the prices of first and second cab services respectively.
Output Format
For each test case, output FIRST if the first cab service is cheaper, output SECOND if the second cab service is cheaper, output ANY if both cab services have the same price.
You may print each character of FIRST, SECOND and ANY in uppercase or lowercase (for example, any, aNy, Any will be considered identical).
Constraints
1<=T<=100
1<X<Y<=100
Sample 1:
Input	Output:
3
30 65        First
42 42        Any
90  50        Second
Explanation:
Test case 11: The first cab service is cheaper than the second cab service.
Test case 22: Both the cab services have the same price.
Test case 33: The second cab service is cheaper than the first cab service.

ans=

#include<stdio.h>
int main(){
int xx ,yy;
printf("Enter the first cap service xx:");
scanf("%d",&xx);
printf("Enter the second cap service yy:");
scanf("%d",&yy);
if(xx==yy){

    printf("Any..");

}
else if(xx<yy){
    printf("First...");
}
else{
    printf("Second...");
}


return 0;
}





---------------------------------------------------------------------------------------------------------------------------------------------------------------


q=2


Chef is watching TV. The current volume of the TV is XX. Pressing the volume up button of the TV remote increases the volume by 1
 while pressing the volume down button decreases the volume by 1. Chef wants to change the volume from XX to YY. Find the minimum
    number of button presses required to do so.
Input Format
•	The first line contains a single integer TT - the number of test cases. Then the test cases follow.
•	The first and only line of each test case contains two integers XX and YY - the initial volume and final volume of the TV.
•
Output Format
For each test case, output the minimum number of times Chef has to press a button to change the volume from XX to YY.
Constraints
1<=T <=100
1<=X<=Y<=100

Sample1

Input		Output
2
50 54 		4
12 10		2

Explanation:
Test Case 1: Chef can press the volume up button 4 times to increase the volume from 50 to 54.
Test Case 2: Chef can press the volume down button  2 times to decrease the volume from 12 to 10.



#include<stdio.h>
int main(){

int xx,yy;
printf("Enter the value of xx and yy:");
scanf("%d %d",&xx,&yy);
if(xx<yy){

    printf("The valume button is pressed by %d times inceses valume... ",yy-xx );

}else{
     printf("The valume button is pressed by %d times decreses  valume... ",xx-yy );
}

return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------


q=3

Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's
 account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.
Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.
Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.
Output
Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money
in the account to complete the transaction, output the current bank balance.
Example - Successful Transaction
Input:
30 120.00
Output:
89.50
Example - Incorrect Withdrawal Amount (not multiple of 5)
Input:
42 120.00
Output:
120.00
Example - Insufficient Funds
Input:
300 120.00
Output:
120.00



#include<stdio.h>
int main(){

int available_amount,withdrwal_amount;
float current_balance;
printf("Enter the available amount:");
scanf("%d",&available_amount);
printf("Enter the withdrwal amount:");
scanf("%d",&withdrwal_amount);
current_balance=available_amount-withdrwal_amount-0.5;
if((withdrwal_amount%5==0)&&(withdrwal_amount<available_amount)&&(withdrwal_amount>0)){
    printf("%d withdrwal successfully....\n",withdrwal_amount);
    printf("available balance=%f",current_balance);
}
else{
    printf("Incorrect withdrwal amount...");
}


return 0;
}

------------------------------------------------------------------------------------------------------------------------------------------------


Ezio can manipulate at most XX number of guards with the apple of Eden.
Given that there are YY number of guards, predict if he can safely manipulate all of them.
Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers XX and YY.
Output Format
For each test case, print text {YES} YES if it is possible for Ezio to manipulate all the guards. Otherwise, print  text {NO} NO.

You may print each character of the string in uppercase or lowercase
(For example, the strings text {Yes} YeS, text {yEs} yEs, \text {yes}yes and \text {YES}YES will all be treated as identical).

Constraints
1<=T<=100
1<=X<=Y

Sample1
_______________
Input				Output
 3
5    7				NO
6    6				YES
9    1				YES

Explanation:
Test Case 11: Ezio can manipulate at most 55 guards. Since there are 77 guards, he cannot manipulate all of them.

Test Case 22: Ezio can manipulate at most 66 guards. Since there are 66 guards, he can manipulate all of them.

Test Case 33: Ezio can manipulate at most 99 guards. Since there is only 11 guard, he can manipulate the guard.



#include<stdio.h>
int main(){

int xx ,yy;
printf("Enter the numbers of guards :");
scanf("%d",&xx);
printf("Enter the numbers of guards manipulated in %d :",xx);
scanf("%d",&yy);
if(xx>=yy){
    printf("yes ");

}
else{
    printf("No");
}

return 0;

}

------------------------------------------------------------------------------------------------------------------------------------------

To access CRED programs, one needs to have a credit score of 750 or more.
Given that the present credit score is XX, determine if one can access CRED programs or not.
If it is possible to access CRED programs, output \text{YES}YES, otherwise output \text{NO}NO.
Input Format
The first and only line of input contains a single integer XX, the credit score.
Output Format
Print text{YES}YES if it is possible to access CRED programs. Otherwise, print \text{NO}NO.
You may print each character of the string in uppercase or lowercase (for example, the strings text{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).

Constraints
0<=X<=1000

Subtasks
•	Subtask 1 (100 points): Original constraints.
Sample1
Input					Output
823					YES

Explanation:
Since 823 > 750 , it is possible to access CRED programs.

Sample2
Input					Output
251					No

Explanation
Since 251 < 750	  it is not possible to access CRED Programs



#include<stdio.h>
int main(){

int xx;
printf("Enter the credit score:");
scanf("%d",&xx);
if(xx>750){
    printf("Yes..");
}
else{
    printf("No..");
}




return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------
There is a group of NN friends who wish to enroll in a course together. The course has a maximum capacity of MM students that
 can register for it. If there are KK other students who have already enrolled in the course, determine if it will still be
 possible for all the NN friends to do so or not.
Input Format
•	The first line contains a single integer TT - the number of test cases. Then the test cases follow.
•	Each test case consists of a single line containing three integers NN, MM and KK - the size of the friend group, the capacity
 of the course and the number of students already registered for the course.
•	Output Format
•	For each test case, output Yes if it will be possible for all the NN friends to register for the course. Otherwise output No.
•	You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

Constraints
1<=N<=M <=100
0<=K<=M
Sample1
Input				Output
2	50	27		Yes
5	40	38		NO
100	100	0		Yes

Explanation:
Test Case 1: The 22 friends can enroll in the course as it has enough seats to accommodate them and the  27  other students at the same time.

Test Case 2: The course does not have enough seats to accommodate the 55 friends and the 3838 other students at the same time.


#include<stdio.h>
int main(){
    int nn,mm,kk;
    printf("Enter the capacity of students of course:");
    scanf("%d",&mm);
    printf("Enter the  studnets no enroll in a course together:");
    scanf("%d",&nn);
    printf("Enter the already enrolled in the course:");
    scanf("%d",&kk);
    if(mm>=(nn+kk)){
        printf("Yes..");
    }
    else{
        printf("No");
    }

return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------
A study has shown that playing a musical instrument helps in increasing one's IQ by 7 points. Chef knows he can't beat Einstein

 in physics, but he wants to try to beat him in an IQ competition.
You know that Einstein had an IQ of 170, and Chef currently has an IQ of XX.
Determine if, after learning to play a musical instrument, Chef's IQ will become strictly greater than Einstein's.
Print "Yes" if it is possible for Chef to beat Einstein, else print "No" (without quotes).
You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will
                                                                             all be treated as identical).
Input Format
•	The first and only line of input will contain a single integer XX, the current IQ of Chef.

Output Format
•	For each testcase, output in a single line "Yes" or "No"
•	You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES
                                                                                 will all be treated as identical).

Constraints
100<=X<=169

Sample1
Input			Output
165			Yes

Explanation
After learning a musical instrument, Chef's final IQ will be 165+7=172. Since 172 >= 170 Chef can beat Einstein.
Sample2
Input			Output
120			No

Explanation:
After learning a musical instrument, Chef's final IQ will be 120+7=127120+7=127. Since 127    127<170, Chef cannot beat Einstein.



#include<stdio.h>
int main(){

int xx;
printf("Enter Chef currently has an IQ : ");
scanf("%d",&xx);
if(xx+7>=170){


    printf("Yes..");
}
else{


    printf("No...");
}

return 0;
}

*/










































