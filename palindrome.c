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
	while(no<=no1){
		temp=no;
		while(no>0){
			a=no%10;
			sum=sum*10+a;
			no=no/10;
		}
		no=temp;
		if(temp==sum){
			printf("%d is  palindrome\n", no);
		}else{
			printf("%d is not palindrome\n", no);
		}
		sum=0;
		no=no+1;
	}
	getch();
}
