#include <stdio.h>
int Integerarray(){

        int a[] = {0,1,2,3,4,5,6,7,8,9};
        printf("a is %d\n", a[0]);
        printf("a is %d\n", a[1]);
        printf("a is %d\n", a[2]);
        printf("a is %d\n", a[3]);
        printf("a is %d\n", a[4]);
        printf("a is %d\n", a[5]);
        printf("a is %d\n", a[6]);
        printf("a is %d\n", a[7]);
        printf("a is %d\n", a[8]);
        printf("a is %d\n", a[9]);
}
float Float(){

        float a[] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
        printf("a is %f\n", a[0]);
        printf("a is %f\n", a[1]);
        printf("a is %f\n", a[2]);
        printf("a is %f\n", a[3]);
        printf("a is %f\n", a[4]);
        printf("a is %f\n", a[5]);
        printf("a is %f\n", a[6]);
        printf("a is %f\n", a[7]);
        printf("a is %f\n", a[8]);
        printf("a is %f\n", a[9]);
}
double Double(){
        double a[] = {0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
        printf("a is %lf\n", a[0]);
        printf("a is %lf\n", a[1]);
        printf("a is %lf\n", a[2]);
        printf("a is %lf\n", a[3]);
        printf("a is %lf\n", a[4]);
        printf("a is %lf\n", a[5]);
        printf("a is %lf\n", a[6]);
        printf("a is %lf\n", a[7]);
        printf("a is %lf\n", a[8]);
        printf("a is %lf\n", a[9]);
}
char Char(){
        char a[] = {'a','b','c','d'};
        printf("a is %c\n", a[0]);
        printf("a is %c\n", a[1]);
        printf("a is %c\n", a[2]);
        printf("a is %c\n", a[3]);

}
int main()
{
        Integerarray();
        Float();
        Double();
        Char();
        getch();
        return 0;
}
