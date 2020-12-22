#include <stdio.h>
int main ()
{
	int a, b, c, d;
	printf("Enter value of d:");
	scanf("%d", &d);
	for(a=1;a<=d;a++){
		for(c=1;c<=d;c++){
			if(c==1 || c==d){
				printf("*");
			}else{
				if(a==1 || a==d){
					printf("*");
				}else{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
