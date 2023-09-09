#include<stdio.h>
int main(){
    int size,choice,top=-1,value;
    printf("Enter the size of stack:");
    scanf("%d",&size);
    int stack[size];
    do {
        printf("\nEnter the choice:\n");
        printf("1:Push\n");
        printf("2:Pop\n");
        printf("3:Display\n");
        scanf("%d",&choice);
        switch(choice){

    case 1:

        if(top==size-1){
                printf("Stack Overflow....\n");
            }
            else{
                    printf("\nEnter the Values in Stack:");
            scanf("%d",&value);
            top=top+1;
            stack[top]=value;

            }
            break;
    case 2:

        if(top==-1){
            printf("Stack Underfolw....");
        }
        else{
            while(top> -1){
                printf("The %d value is pop",stack[top]);
            top--;
            break;
            }

                break;
            }


        break;
    case 3:
        if(top==-1){
         printf("No Value in Stack...");
        }
        else{
        printf("display.....");
        for(int i=top;i> -1;i--){
            printf("\t%d",stack[i]);
        }
        }



    }
    } while(1);



return 0;
}
