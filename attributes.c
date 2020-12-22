#include <stdio.h>
int __attribute__((constructor))str(){
    printf("This is str\n");
    return 0;
}
int __attribute__((destructor))ed(){
    printf("This is ed\n");
    return 0;
}
int main()
{
    printf("This is main\n");
    return 0;
}
