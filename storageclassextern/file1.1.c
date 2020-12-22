#include <stdio.h>
#include "file1.c"
void func();
int main()
{
        extern int a;
        printf("a is %d\n", a);
        func();
        printf("a ia %d\n", a);
        getch();
        return 0;
}
void func()
{
        extern int a;
        a =a+2;
        printf("a is %d\n", a);
}
