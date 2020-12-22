#include <stdio.h>
int main(){
        int a, b, c, d;
        printf("Enter a value of d:");
        scanf("%d", &d);
        for(a=1;a<=d;a++){
                for(b=a;b<=a;b++){
                        printf("  ");
                }
                for(c=1;c<=d;c++){
                        printf("* ");
                }
                printf("\n");
        }
        return 0;
}
