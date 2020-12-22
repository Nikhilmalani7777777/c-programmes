#include <stdio.h>
int main()
{
        int Int;
        char Char;
        float Float;
        double Double;
        printf("Enter a integer:");
        scanf("%d", &Int);
        printf("integer is:%d\n", Int);
        printf("Enter a character:");
        scanf("%s", &Char);
        printf("character is :%c\n", Char);
        printf("Enter a floater:");
        scanf("%f", &Float);
        printf("floater is :%f\n", Float);
        printf("Enter a doubler:");
        scanf("%lf", &Double);
        printf("doubler is :%lf\n", Double);
        int value;
        printf("Enter your number:");
        value=getchar();
        value=getchar();
        printf("your number is :");
        putchar(value);
        char name[100];
        printf("Enter your name :");
        gets(name);
        printf("your name is :");
        puts(name);
    return 0;
}
