#include <stdio.h>
void main()
{
	//for check pelindrome numer
	int no, no1, a, b, sum=0, temp;
	printf("Enter your starting range number:");
	scanf("%d", &no);
	printf("\n");
	printf("Enter your ending range number:");
	scanf("%d", &no1);
	for(no=no;no<=no1;no++){
		temp=no;
		while(no>0){
			a=no%10;
			sum=sum+(a*a*a);
			no=no/10;
		}
		no=temp;
		if(temp==sum){
			printf("%d is  armstrong\n", no);
		}else{
			printf("%d is not armstrong\n", no);
		}
		sum=0;
	}
	getch();
}
