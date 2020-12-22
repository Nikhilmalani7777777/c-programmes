#include <stdio.h>
int main()
{
        int a;
        printf("Enter value of a:");
        scanf("%d", &a);
        if (a==0){
                goto end;
        }else{
                printf("a is %d", a);
        }
end:
        return 0;
}
