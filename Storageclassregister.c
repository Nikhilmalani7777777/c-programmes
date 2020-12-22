#include <stdio.h>
int main()
{
        register int a = 2;
        printf("a + 1 is %d\n", a+1);
        printf("a x 1 is %d\n", a*1);
        printf("a - 1 is %d\n", a-1);
        printf("a // 1 is %d\n", a/1);
        printf("a is %d", a);
        getch();
        return 0;
}
