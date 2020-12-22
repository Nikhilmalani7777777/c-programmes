#include <stdio.h>
int main()
{
        int a, b;
        printf("Enter a startting value:");
        scanf("%d", &a);
        printf("Enter a ending value:");
        scanf("%d", &b);
        do{
                a = a+1;
                printf("value is %d\n", a);
        }while( a < b );
        return 0;
}
