void primeNo(int no){
    int count=0;
    for(int i=1;i<=no;i++){
        if(no%i==0){
            count++;
        }
    }

    if(count==2){
printf(" %d  is prime Number ",no);
    }
    else{
       printf(" %d is Not prime Number ",no);
    }


}
