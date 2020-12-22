#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","a+");
    char a[100];
    fscanf(fp,"%s",a);
    printf("%s", a);
    fclose(fp);
    return 0;
}
