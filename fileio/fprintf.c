#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test.txt","a+");
    char a[]="This text is written";
    fprintf(fp,"%s",a);
    fclose(fp);
    return 0;
}
