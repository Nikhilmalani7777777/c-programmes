#include <stdio.h>
union DATA {
        int a;
        float b;
        char c[20];
};
int main()
{
        union DATA var;
        printf("Enter a value of a:");
        scanf("%d", &var.a);
        printf("Enter a value of b:");
        scanf("%f"), &var.b;
        printf("Entersa value of c:");
        scanf("%s", &var.c);
        printf("a is %d\n", var.a);
        printf("b is %f\n", var.b);
        printf("c is %s\n", var.c);
        getch();
        return 0;
}
