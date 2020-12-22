#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("test1.txt","wr");
    char a[]="This text is written";
    int aa=1;
    putw(aa,fp);/*
    int c=getw(fp); ->Because we can't do multi-operation in same time
    printf("%d", c);*/
    fclose(fp);
    
    fp=fopen("test1.txt","a+");
    int c=getw(fp);
    printf("%d", c);
    fclose(fp);
    return 0;
}
