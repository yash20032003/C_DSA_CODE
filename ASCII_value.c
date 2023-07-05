//5. Write a program to print ASCII values from 0 to 127.

#include<stdio.h>
int main()
{
	int itr;
	for( itr=0;itr<=127;itr++)
	{
		printf("%c = %d\n",itr,itr);
	}
	return 0;
}
