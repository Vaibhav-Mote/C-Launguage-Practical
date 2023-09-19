/*
//write a c program to 2 dimention array and display it
#include<stdio.h>
int main(){

int a[3][3];
printf("Enter the value in array:");
for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("the given matrix is :\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}


return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------
//write a c program to addition of two matrix

#include<stdio.h>
int main(){

int a[3][3],b[3][3];
printf("Enter the element in  first matrix:");

for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element in  second  matrix:");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}

//sum
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%4d",a[i][j]+b[i][j]);
    }printf("\n");
}



}

-------------------------------------------------------------------------------------------------------------------------------------------------

//write a c program to subtraction of two matrix


#include<stdio.h>
int main(){

int a[3][3],b[3][3];
printf("Enter the element in  first matrix:");

for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}

printf("Enter the element in  second  matrix:");

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}

//substraction
printf("subdstraction:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%4d",a[i][j]-b[i][j]);
    }printf("\n");
}

}

---------------------------------------------------------------------------------------------------------------------------------------------
//write a c program to multipication of two square matrices of same size



#include<stdio.h>
int main(){

int a[3][3],b[3][3],c[3][3];
printf("Enter the first matrix element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the second matrix:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}

//print the  first matrix
printf("First matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}

//print the  second matrix
printf("Second matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",b[i][j]);
    }
    printf("\n");
}

//logic for resultant matrix

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            int sum=0;
        for(int k=0;k<3;k++){
            sum=sum+a[i][k]*b[k][j];

        }
    c[i][j]=sum;
    }
}


//print of resultant matix
printf("Resultant matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}


return 0;
}

/*

-----------------------------------------------------------------------------------------------------------------------------------
//WAP to transpose of given matix

#include<stdio.h>
int main(){

int a[3][3];
printf("Enter the matrix element:");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("Transpose matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",a[j][i]);
    }
    printf("\n");
}

return 0;
}

*/






















