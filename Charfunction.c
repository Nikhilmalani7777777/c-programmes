#include <stdio.h>
char func(char a){
    printf("%c", a);
    return a;
}
int main()
{
    func('N');
    return 0;
}
