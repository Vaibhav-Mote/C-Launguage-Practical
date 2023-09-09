
/*
#include<stdio.h>
int main(){
//wtire a c progream to print n numbres of natural numbres
int no,i=1;
printf("Enter the no to print natural numbers:");
scanf("%d",&no);
while(i<=no){
        printf("%d\n",i);

        i++;
}

return 0;
}

#include<stdio.h>
int main(){

int no,i,choice;
printf("Enter the no:");
scanf("%d",&no);
printf("Odd :1");
printf("Even :2");
printf("Enter the choice:");
scanf("%d",&choice);


    i=1;
switch(choice){
case 1:
    while(i<=no){
        if(i%2==1){
            printf("\nOdd %d",i);
        }

            i++;
        }
        break;

case 2:
    while(i<=no){
        if(i%2==0){
            printf("\nEven %d",i);
        }

            i++;
        }
            break;1
default:
    printf("invalid input....");

}


return 0;
}



//write a c program to print uppercase and lowercase character from A to Z using while loop


#include<stdio.h>
int main(){
    int choice,i;
printf("Uppercase;1\n");
printf("lowercase:2\n");
printf("Enter the choice:");
scanf("%d",&choice);
switch(choice){
case 1:
    i=65;
    while(i<=90){
        printf("%c\t",i);
        i++;
    }
    break;
case 2:
    i=97;
    while(i<=122){
        printf("%c\t",i);
        i++;
    }
    break;
default:
    printf("invalid input...");

}



return 0;
}

#include<stdio.h>
int main()


{
    char i='a';
    while(i<='z'){
             printf("%c-",i-32);
             printf("%c\n",i);

        i++;

    }

    return 0;
}




//write a c porogram to take a user input and print multipication table using while loop

#include<stdio.h>
int main(){
int no,i=1;
printf("Enter the no:");
scanf("%d",&no);
while(i<=10){
    printf("%d\n",no*i);
    i++;
}


return 0;
}

//write a c program to display the reverse the number
#include<stdio.h>
int main(){

int no;
int rem,rev=0;
printf("Enter the number:");
scanf("%d",&no);
while (no=!0){
    rem=no%10;    //547  7
    no=no/10;     //54    4 5
    rev=rev*10+rem;    //0*10+7=7 45

}
printf("%d",rev);



return 0;
}





*/





#include<stdio.h>
int main(){
int no,rem,i=0,count=0;
printf("Enter the number:");
scanf("%d",&no);
while(i<no){
    rem=no%10;//123412
    if(rem>=0){
        count=1;
    }

    if(count){
        count++;
    }
    no=no/10;
    i++;
}
printf("%d",i);

return 0;
}































































