#include <stdio.h>

int main()
{
	int c;
	float a,b;
	do {
		printf("Calc...");
		printf("\nEnter a element:");
		scanf("%f",&a);
		printf("Enter a element:");
		scanf("%f",&b);
		printf("Choose operation...");
		printf("\n 1. Add\n 2. Substract\n 3. Multiply\n 4. Divide\nChoice code: ");
		scanf("%d",&c);
		switch(c) {
			case 1 :	printf("\nAddition : %f + %f is %f",a,b,a+b);
						break;
			case 2 :	printf("\nSubstraction : %f - %f is %f",a,b,a-b);
						break;
			case 3 :	printf("\nMultiplication : %f * %f is %f",a,b,a*b);
						break;
			case 4 :	printf("\nDivision : %f / %f is %f",a,b,a/b);
						break;
			default:	printf("\nInvalid choice code !");
		}
		printf("\n To continue enter 1 : ");
		scanf("%d",&c);
	}while(c==1);
	return 0;
}

