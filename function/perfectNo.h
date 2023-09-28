void perfectNo(int no){
    int sum=0;
    for(int i=1;i<=no/2;i++){


        if(no%i==0){
                sum=sum+i;

        }
    }
    if(no==sum)
{

    printf("The %d no is perfect no",no);
}
else{
     printf("The %d no not is perfect no",no);
}

}
