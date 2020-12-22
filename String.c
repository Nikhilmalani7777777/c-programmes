#include <stdio.h>
#include <string.h>
char func(){
        char firstname[20];
        char secondname[20];
        char Firstname[20];
        char Secondname[20];
        char FIrstname[20];
        char SEcondname[20];
        printf("Enter your first name:");
        gets(firstname);
        printf("Enter your second name:");
        gets(secondname);
        printf("second name change in to first name. result is %s\n", strcpy(firstname,secondname));
        printf("first name change in to second name. result is %s\n", strcpy(secondname,firstname));
        printf("Enter your first name:");
        gets(Firstname);
        printf("Eneter your second name:");
        gets(Secondname);
        printf("compare first name with second name. result is %d\n", strcmp(Firstname,Secondname));
        printf("compare second name with first name. result is %d\n", strcmp(Secondname,Firstname));
        printf("Enter your first name:");
        gets(FIrstname);
        printf("Enetr your second name:");
        gets(SEcondname);
        printf("concatinate text in to first name. result is %s\n", strcat(FIrstname,"is a human"));
        printf("concatinate text in to second name. result is %s\n", strcat(SEcondname,"is a human"));
        return 0;
}
int main()
{
        char firstname[20];
        char secondname[20];
        printf("Enter your first name:");
        gets(firstname);
        printf("Enetr your second name:");
        gets(secondname);
        puts(firstname);
        puts(secondname);
        printf("lenth of first name is %d\n", strlen(firstname));
        printf("lenth of second name is %d\n", strlen(secondname));
        printf("lower case  of first name is %s\n", strlwr(firstname));
        printf("uper case  of first name is %s\n", strupr(firstname));
        printf("lower case  of second name is %s\n", strlwr(secondname));
        printf("uper case  of second name is %s\n", strupr(secondname));
        printf("reverse of first name is %s\n", strrev(firstname));
        printf("reverse of second name is %s\n", strrev(secondname));
        func();
        getch();
        return 0;
}
