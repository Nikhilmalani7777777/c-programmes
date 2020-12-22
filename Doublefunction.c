#include <stdio.h>
double func(int a, int b){
    double result;
    result = a / b;
    return result;
}
int main()
{
    printf("a devide by b is %lf", func(11,5));
    return 0;
}
