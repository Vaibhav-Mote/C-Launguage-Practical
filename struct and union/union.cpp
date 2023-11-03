/*
#include<stdio.h>
union ABC{
	int a;
	long int b;
};
union  ABC ab;
int main(){
	ab.a=100;
	ab.b=200;
	printf("\n\n\n");
	printf("A=%d\tB=%d\n",ab.a,ab.b);
	return 0;
}
---------------------------------------------------------------------------------------------------------------------------------------
//How to pass structure to function as parameter

#include<stdio.h>
struct abc{

int id;
char name[90];
int sallary;
};
struct abc xy;


void printdata(struct abc pq){
printf("The given data is :");
printf("%d\t%s\t%d",pq.id,pq.name,pq.sallary);
}
int main(){

printf("Enter the id name and sallary:");
scanf("%d%s%d",&xy.id,&xy.name,&xy.sallary);
    printdata(xy);


return 0;
}


*/

#include<stdio.h>
struct Employee{
	int id,sal;
	char name[90];
};
int main(){
  typedef struct Employee e ;

  e  emp1,emp2,emp3;
     emp1.id=1;
    emp1.name[0]=9;
  printf("%d\n",emp1.id);
  printf("%s",emp1.name);
	return 0;
}





















