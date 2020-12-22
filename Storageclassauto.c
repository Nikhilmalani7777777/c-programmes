#include <stdio.h>
int main()
{
        auto int a;
        a = 1;
        printf("%d\n", a);
        {
                int a = 2;
                printf("%d\n", a);
        }
        printf("%d", a);
        getch();
        return 0;
}
