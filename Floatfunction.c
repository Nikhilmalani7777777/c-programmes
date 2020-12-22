#include <stdio.h>
float func(int a, int b){
    float result;
    result = a / b;
    return result;
}
int main()
{
    printf("a devide by b is %f", func(11,5));
    return 0;
}
