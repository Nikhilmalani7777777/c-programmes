#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","r");
    int a = ftell(fp);
    printf("Position of cursor:%d\n", a);
    fseek(fp,5,SEEK_SET);
    a = ftell(fp);
    printf("Positione of cursor:%d\n", a);
    fseek(fp,1,SEEK_END);
    a = ftell(fp);
    printf("Position of cursor:%d\n", a);
    rewind(fp);
    a = ftell(fp);
    printf("POsition of cursor:%d", a);
    fclose(fp);
    return 0;
}
