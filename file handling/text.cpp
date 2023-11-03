#include <stdio.h>

int main() {
    char n[90];
    scanf("%s", n);

    FILE *ptr;
    ptr = fopen("C:\\Users\\Vaibhav\\Desktop\\c\\vaibhav2222.txt", "w+");
    fputs(n, ptr);
    fclose(ptr);

     //Remove the old file
      remove("C:\\Users\\Vaibhav\\Desktop\\c\\vaibhav.txt");

    // Rename the file to "mote.txt"
    rename("C:\\Users\\Vaibhav\\Desktop\\c\\vaibhav2222.txt", "C:\\Users\\Vaibhav\\Desktop\\c\\vaibhav.txt");

    return 0;
}
