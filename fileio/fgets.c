#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","a+");
    char a[100];
    fgets(a,100,fp);
        printf("%s", a);
    fclose(fp);
    return 0;
}
