//#include<math.h>
void armstrongNo(int no){
    int originalNo=no;
    int count=0;
    while(no!=0){
    no=no/10;
    count++;
    }
    no=originalNo;
    int sum=0;
    while(no!=0){
        int rem=no%10;
        no=no/10;
        int powerr=1;
        for(int i=1;i<=count;i++){
            powerr=powerr*rem;
        }

        sum=sum+powerr;

    }
    no=originalNo;
    if(no==sum){
        printf(" %d  is Armstrong Number ",no);
    }
else{
     printf(" %d  is not  Armstrong Number ",no);
}


}
