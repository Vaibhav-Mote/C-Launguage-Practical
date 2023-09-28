void palindromNo(int no){
    int sum=0;
    int originalno=no;
    while(no>0){

    int rem=no%10;   //12321
    no=no/10;
    sum=sum*10+rem;

    }

    if(originalno==sum){
        printf(" %d  is Pelindrom Number ",originalno);
    }
    else{
        printf(" %d  is not  Pelindrom Number ",originalno);
    }



}
