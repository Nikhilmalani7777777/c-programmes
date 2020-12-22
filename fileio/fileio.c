#include <stdio.h>
int main(){
                //file writing
                FILE *fp;
                fp=fopen("nik.txt", "w+");
                fprintf(fp, "nikman");
                fputs("nikman",fp);
                fclose(fp);
                //file reading
                char buff[100];
                fp=fopen("nik.txt", "r");
                fscanf(fp,"%s",buff);
                printf("\nusing fscanf : %s\n", buff);
                fgets(buff, 255, fp);
                printf("\nusing fgets :%s\n", buff);
                fclose(fp);
}
