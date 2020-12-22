#include <stdio.h>
int main ()
{
	int a, b, c, d;
	printf("Enter value of d:");
	scanf("%d", &d);
	for(a=1;a<=d;a++){
		for(b=a;b<=d;b++){
			printf(" ");
		}
		for(c=1;c<=a;c++){
			if(c==1 || c==a){
				printf("* ");
			}else{
				printf("  ");				
			}
		}
		printf("\n");
	}
	for(a=2;a<=d;a++){
		for(b=1;b<=a;b++){
			printf(" ");
		}
		for(c=a;c<=d;c++){
			if(c==1 || c==a || c==d){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}	
	return 0;
}
