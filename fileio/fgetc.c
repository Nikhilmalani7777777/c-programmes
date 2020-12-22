#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","a+");
    char a;
    while(a!=EOF){
        a = fgetc(fp);
        printf("%c", a);
    }
    fclose(fp);
    return 0;
}
