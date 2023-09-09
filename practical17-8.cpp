
/*
//q=1
#include<stdio.h>
int main(){
//write a c program to input marks of five subjects physics,chemistry,bio,math and computer calulate percentage and grade  according to give codition
float physics,chemistry,bio,math,computer,percentage;
printf("Enter the physics marks:");
scanf("%f",&physics);
printf("Enter the chemistry marks:");
scanf("%f",&chemistry);
printf("Enter the bio marks:");
scanf("%f",&bio);
printf("Enter the math marks:");
scanf("%f",&math);
printf("Enter the computer marks:");
scanf("%f",&computer);
percentage=((physics+chemistry+bio+math+computer)/500)*100;
printf("percetage is %f\n",percentage);
percentage>=90?printf("Gread A"):
percentage>=80?printf("Gread B"):
percentage>=70?printf("Gread C"):
percentage>=60?printf("Gread D"):
percentage>=40?printf("Gread E"):printf("Gread F");

return 0;
}

*/


//q=2
//write a c program to input basic salary of emploay and find its grass salary according to following conditon
//basic salary<=10000:HRA=20%.DA=80%
//basic salary<=20000:HRA=25%.DA=90%
//basic salary>20000:HRA=30%.DA=95%



#include<stdio.h>
int main(){
float basic_salary,grass_salary,HRA1 ,DA1,HRA2,DA2,HRA3,DA3;
printf("Enter the basic salary :");
scanf("%f",&basic_salary);
HRA1=(((20/basic_salary)*100)*basic_salary);
DA1=(((80/basic_salary)*100)*basic_salary);
HRA2=(((25/basic_salary)*100)*basic_salary);
DA2=(((90/basic_salary)*100)*basic_salary);
HRA3=(((30/basic_salary)*100)*basic_salary);
DA3=(((95/basic_salary)*100)*basic_salary);

basic_salary<=10000?printf("HRA1=%f  DA1=%f Grass salary1 =%f \n",HRA1,DA1,basic_salary+HRA1+DA1):
basic_salary<=20000?printf("HRA2=%f DA2=%f Grass salary2 =%f \n",HRA2,DA2,basic_salary+HRA2+DA2):
    printf("HRA3=%f DA3=%f Grass salary3 =%f \n",HRA3,DA3,basic_salary+HRA3+DA3);





return 0;
}
