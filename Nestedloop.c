#include <stdio.h>

int main () {
   int i, j;

   for(i = 2; i<100; i++) {

      for(j = 2; j <= (i/j); j++)
      if(!(i%j)) break;
      if(j > (i/j)) printf("%d is prime\n", i);
   }

   return 0;
}
/*Nested for loop
for ( init; condition; increment ) {

   for ( init; condition; increment ) {
      statement(s);
   }
   statement(s);
}*/
/*Nested while loop
while(condition) {

   while(condition) {
      statement(s);
   }
   statement(s);
}*/
/*Nested do..while loop
do {
   statement(s);

   do {
      statement(s);
   }while( condition );

}while( condition );*/
