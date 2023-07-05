#include<stdio.h>
int main()
{
	int a;
	printf("Enter the three digit number...\n");
	scanf(" %d\n",&a);
	int b=a+10;
	for(int i=a;i<=b;i++)
	{
		printf("%d\n",a);
		a++;
	}
	return 0;
}
