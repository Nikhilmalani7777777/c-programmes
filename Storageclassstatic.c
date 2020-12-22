#include <stdio.h>
int main()
{
        static int a = 1;
        printf("%d\n", a);
        {
                printf("%d\n", a);
        }
        getch();
        return 0;
}
