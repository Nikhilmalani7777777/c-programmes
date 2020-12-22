#include <stdio.h>
int main()
{
        int a;
        printf("Enter your number:");
        scanf("%d", &a);
        switch (a){
                case 1:
                        printf("you have done");
                        break;
                case 3:
                        printf("you have done");
                        break;
                case 5:
                        printf("you have done");
                        break;
                case 7:
                        printf("you have done");
                        break;
                default:
                        printf("you lost it");
        }
        return 0;
}
