#include<stdio.h>
int main()
{
	int a;
	float b;
	char d;
	printf("Enter the integer number....\n");
	scanf("%d",&a);
	printf("Enter the float number....\n");
	scanf("%f",&b);
	printf("Enter the character value ....\n");
	scanf("%c",&d);
	printf("The size of the integer is %d\n",sizeof(a));
	printf("The size of the float is %f\n",sizeof(b));
	printf("The size of the chraacter is %c\n",sizeof(d));
	return 0;
}
