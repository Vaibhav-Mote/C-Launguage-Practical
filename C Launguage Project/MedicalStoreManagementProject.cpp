
#include"Coustomer_Information.h"

int main()
{

printf("\n====================Welcome to Apana Medical store==========================\n");
int choice;
do{

printf("\n1:Custormar Informarion");
printf("\n2:Medicine");
printf("\n3:Supplier Information");
printf("\n4:Bulling");
printf("\n5:About");
printf("\n6:Exit");
printf("\n\n%c %c %c ==>Enter the Choice<=== %c %c %c \n",1,1,1,1,1,1);
scanf("%d",&choice);


switch(choice){
case 1:
    customer();
break;
//case 2:
//     medicine();
//    break;
//case 3:
//    supplier();
//    break;
//case 4:
//     bill();
//    break;
//case 5:
//     about();
//    break;
//case 6:
//     Exit();
    default:
    printf("Invaid choice\n");
}
    }while(choice!=6);

return 0;
}
