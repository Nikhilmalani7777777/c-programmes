#include <stdio.h>
int main(){
    printf("Enter a number:");
    int no, a, b, sum1, sum2;
    scanf("%d", &no);
    while(no>0){
        a = no%10;
        b = no/10;
        no = b;
        sum1=sum1+a;
        sum2=sum2*a;
    }
    if(sum1==sum2){
        printf("Number is correct");
    }else{
        printf("Number is not correct");
    }
    return 0;
}
