#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character :\n");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
		printf(" %c is in uppercase \n",ch);
	}
	
	else{
		printf(" %c is  in lowercase \n",ch);
	}
	return 0;
}

