#include <stdio.h>
typedef struct marks{
    int a;
    int b;
    int c;
}Nik;
int main(){
    //typedef with variable
    typedef int nik;
    nik a,b;
    a=10;
    b=20;
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
    //typedef with structure
    Nik ravi;
    ravi.a=78;
    printf("raj's english mark is :%d\n", ravi.a);
    ravi.b=84;
    printf("ravi's maths mark is :%d\n", ravi.b);
    ravi.c=79;
    printf("ravi's science marks is :%d\n", ravi.c);
}
