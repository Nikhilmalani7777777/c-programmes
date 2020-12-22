#include <stdio.h>
int main(){
        int no1, no2, a, b, c;
        char d = '%';
        printf("Enter number:");
        scanf("%d", &no1);
        printf("Enter second number:");
        scanf("%d", &no2);
        printf("________choises_______\n");
        printf("\n1.\t addition\n");
        printf("\n2.\t subtraction\n");
        printf("\n3.\t multiplication\n");
        printf("\n4.\t division\n");
        printf("\n5.\t modulation\n");
        printf("\nEnter your choise:");
        scanf("%d", &a);
        switch(a){
                case(1):
                        printf("%d + %d = %d", no1, no2, no1+no2);
                        break;
                case(2):
                        printf("%d - %d = %d", no1, no2, no1-no2);
                        break;
                case(3):
                        printf("%d x %d = %d", no1, no2, no1*no2);                            
                        break;
                case(4):
                        printf("%d // %d = %d", no1, no2, no1/no2);
                        break;
                case(5):
                        printf("%d %c %d = %d", no1, d, no2, no1%no2);
                        break;
                default:
                        printf("invalide choise");
                        break;
        }
        return 0;
}
