#include <stdio.h>
int main(){                                                    int no;
    printf("Enter a serial range number:");
    scanf("%d",&no);
    int a = 1;
    float c=0;
    while(a<=no){
        int temp = a;
        int b = a+1;
        c = c+(a-b);
        a=temp+2;
    }
    printf("Answer is: %f",c);
    return 0;
}
