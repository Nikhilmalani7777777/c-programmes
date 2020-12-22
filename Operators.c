#include <stdio.h>
int main()
{

        // airthmatic operators

        int a = 1 , A = 2;
                printf("adition is %d\n", a+A);
                printf("substraction is %d\n", a-A);
                printf("multiplication is %d\n", a*A);
                printf("devidation is %d\n", a/A);
                printf("modulation is %d\n", a%A);

        //increment and decremrnt operators

        int  b = 2, B = 3;
                printf("increment is %d\n", ++b);
                printf("decrement is %d\n", --B);

        //assignment  operators

        int c;
         a = 5;

                 c = a;      // c is 5
                printf("c = %d\n", c);
                c += a;     // c is 10
                printf("c = %d\n", c);
                c -= a;     // c is 5
                printf("c = %d\n", c);
                c *= a;     // c is 25
                printf("c = %d\n", c);
                c /= a;     // c is 5
                printf("c = %d\n", c);
                c %= a;     // c = 0
                printf("c = %d\n", c);

        //relational operators

         a = 5, b = 5, c = 10;

                printf("%d == %d is %d \n", a, b, a == b);
                printf("%d == %d is %d \n", a, c, a == c);
                printf("%d > %d is %d \n", a, b, a > b);
                printf("%d > %d is %d \n", a, c, a > c);
                printf("%d < %d is %d \n", a, b, a < b);
                printf("%d < %d is %d \n", a, c, a < c);
                printf("%d != %d is %d \n", a, b, a != b);
                printf("%d != %d is %d \n", a, c, a != c);
                printf("%d >= %d is %d \n", a, b, a >= b);
                printf("%d >= %d is %d \n", a, c, a >= c);
                printf("%d <= %d is %d \n", a, b, a <= b);
                printf("%d <= %d is %d \n", a, c, a <= c);

        //logical operators

         a = 5, b = 5, c = 10;
         int result;

            result = (a == b) && (c > b);
            printf("(a == b) && (c > b) is %d \n", result);
            result = (a == b) && (c < b);
            printf("(a == b) && (c < b) is %d \n", result);
            result = (a == b) || (c < b);
            printf("(a == b) || (c < b) is %d \n", result);
            result = (a != b) || (c < b);
            printf("(a != b) || (c < b) is %d \n", result);
            result = !(a != b);
            printf("!(a == b) is %d \n", result);
            result = !(a == b);
            printf("!(a == b) is %d \n", result);

        //bitwise operators

             a = 2 , b = 3;
                printf("a and b is %d\n", a&b);
                printf("a or b is %d\n", a|b);
                printf("a xor b is %d\n", a^b);
                printf("a complement is %d\n", ~a);
                printf("a right shift 2 is %d\n", a>>2);
                printf("a left shift 2 is %d\n", b<<2);

    return 0;
}
