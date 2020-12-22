#include <stdio.h>
int main()
{
        int a = 10;
        int *b;
        b = &a;
        printf("id of a is %x\n", b);
        printf("value of a ia %d\n", *b);

        getch();
        return 0;
}
