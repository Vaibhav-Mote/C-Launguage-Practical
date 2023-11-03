/*
//convert first letter lowercase to uppercase

#include<stdio.h>
int main(){
char ch[90];
int m=0;
printf("Enter the string:");
gets(ch);

if (ch[0]==ch[0]-32){


}
for(int i=0;i<90;i++){

    if((ch[i]==' '&&ch[i+1]!=' ')&&(ch[i+1]>'a'&&ch[i+1]<'z')){
            ch[i+1]=ch[i+1]-32;

    }
    m++;

}
printf("%s",ch);
return 0;
}
/*
-----------------------------------------------------------------------------------------------------------------------------------------
write a c program to create a function name as findSubsting(chr ch[],char ch1[]) find the substring in sting and return it is
found 1 oterwise -1;

#include<stdio.h>
#include<string.h>
int len1,len2,c=0,flag=0;
int findSubsting(char ch1[],char ch2[])            //abcd cd
{
    for(int i=0; i<len2; i++)
    {
        for(int j=0; j<len1; j++)
        {
            if(ch2[i]==ch1[j])
            {
                c=0;
                break;
            }
            else
            {
                c=-1;
            }
        }
        if(c==-1)
        {
            flag=-1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    return flag;
}

int main()
{
    char ch1[90],ch2[90];
    printf("Enter the data:");
    gets(ch1);
    printf("Enter the data:");
    gets(ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);
    int r=findSubsting(ch1,ch2);
    if(r!=-1)
    {
        printf("found");

    }
    else
    {
        printf("not found");
    }
    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------
Write a c program to create the function name as checkAnagram (chr ch[],char ch1[])
 then string is anagram its return 1 otherwise -1;

#include <stdio.h>
#include <string.h>

int len1, len2, count = 0, flag = 0;

int checkAnagram(char ch[], char ch1[]) {
    // Check if the lengths of both strings are different
    if (len1 != len2) {
        return 0; // Not an anagram
    }

    for (int i = 0; i < len1; i++) {
        flag = 0; // Initialize flag for each character in ch1

        for (int j = 0; j < len2; j++) {
            if (ch1[i] == ch[j]) {
                count++;


                ch[j] = '\0';

                flag = 1; // Mark flag as 1 if a match is found
                break;
            }
        }

        // If no matching character is found in ch, return 0
        if (flag == 0) {
            return 0; // Not an anagram
        }
    }


    // If count equals the length of both strings, they are anagrams
    if (count == len1) {
        return 1; // Anagram
    } else {
        return 0; // Not an anagram
    }
}

int main() {
    char ch[90], ch1[90];

    printf("Enter the string 1: ");
    gets(ch);
    printf("Enter the string 2: ");
    gets(ch1);

    len1 = strlen(ch);
    len2 = strlen(ch1);

    int r = checkAnagram(ch, ch1);

    if (r == 1) {
        printf("\nAnagram");
    } else {
        printf("\nNot Anagram");
    }

    return 0;
}
-----------------------------------------------------------------------------------------------------
write a c program to create function name as checkIsogram(char [] then string is isogram its return value is 1 otherwise 0

#include<stdio.h>
#include<string.h>
int len;
int checkIsogram(char ch[]){
          for(int i=0;i<len-1;i++){
            for(int j=i+1;j<len;j++){
                if(ch[i]==ch[j]){
                    return 0;
                    break;
                }

            }
          }
          return 1;


}
int  main()
{
    char ch[90];
    printf("Enter the data:");
    gets(ch);
    len=strlen(ch);
    int r=checkIsogram(ch);
    if(r==1){
        printf("isogram");
    }
    else{
        printf("not isogram");
    }

    return 0;
}

-----------------------------------------------------------------------------------------------------------------------------------------------
write a c program to create a function name as checkIsomorphic chr ch[])then string is isomorphic its return 1 oterwise 0
*/

#include<stdio.h>
#include<string.h>
checkIsomorphic(char ch[],char ch1[]){
    int arr[256]={0};
    if(strlen(ch)!=strlen(ch1))
        return 0;
        for(int i=0;i<strlen(ch);i++){
    if(arr[ch[i]]!=0)
        arr[ch[i]]=ch1[i];
    else if(arr[ch[i]]==ch1[i])
        continue;
    else{
        return 0;
    }
}
    return 1;


}
int main(){
char ch[90],ch1[90];
printf("Enter data:");
gets(ch);
printf("Enter the data:");
gets(ch1);
int r=checkIsomorphic(ch,ch1);
if(r==1)
    printf("not isomarphic.");
else
    printf("isomarphic.");



return 0;
}





















