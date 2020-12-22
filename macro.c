#include <stdio.h>
int main(){
    printf("name of file is:%s\n", __FILE__);
    printf("current time is:%s\n",__TIME__ );
    printf("current line is:%d\n",__LINE__);
    printf("version of ansi:%d\n",__STDC__);
}
