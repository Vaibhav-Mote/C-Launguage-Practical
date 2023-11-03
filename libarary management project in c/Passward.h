#include<string.h>
#include"MainMenu.h"
void Password(){


    int filepass=12345;
    int passward;
    char ch[10];
    printf("\n<<============= Enter the Password ===============>>\n");
    do{

    scanf("%d",&passward);
    if(filepass==passward){
        printf("\n<<========= Password matched Successfully =========>>\n");
        char checkpass[9]="YES";
        printf("Your Want to Open the Application YES or NOT\n");
        scanf("%s",ch);
        if(strcmp(ch,checkpass)==0){
             mainmenu();
        }
        else{
            printf("\nOk Application are not Opened");
        }

break;

    }
    else{
        printf("\n<<============= Wrong Password =============>>\n");
        printf("\n<<================ Try Again ===============>>\n");
    }

    }while(passward<='a'&&passward>='z');





}
