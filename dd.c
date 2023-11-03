#include<stdio.h>
int main(){
    FILE *f;
    char ch[100];
    f = fopen("C:\\giri class\\C Launguage Practical\\file handling\\countWCNoofL.txt","r");
int wCount=1;
int cCount=1;
int lCount=0;
 int  i;
while(fscanf(f,"%s",&ch)!=-1)
{  
    i=0;
        printf(" %s\n",ch);
        ++wCount;
       
        while(ch[i]!='\0'){
            ++cCount;
             if(ch[i]=='.' || ch[i]=='\n'){
                ++lCount;
            }
            
            i++;
        }

       
}
printf("Words are %d ",wCount);
printf("\nCharacter are %d ",cCount);
printf("\nlines are %d ",lCount);
fclose(f);

    return 0;
}