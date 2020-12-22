#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","r");
    fseek(fp,7,SEEK_SET);
    char a;
    while(a!=EOF){
        a=fgetc(fp);
        printf("%c", a);
    }
    rewind(fp);
    fseek(fp,7,SEEK_CUR);
    int b = ftell(fp);
    printf("Position is:%d\n", b);
    fseek(fp,1,SEEK_END);
    b = ftell(fp);
    printf("Position is:%d", b);
    fclose(fp);
    return 0;
}
