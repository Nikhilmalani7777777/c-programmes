#include <stdio.h>
int sum( a, b){
    int result;
    result = a+b;
    return result;
}
int main()
{
    int a, b;
    printf("enter a value of a:");
    scanf("%d", &a);
    printf("enter a value of b:");
    scanf("%d", &b);
    printf("sum of a and b is %d", sum(a,b));
    return 0;
}
