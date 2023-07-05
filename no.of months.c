//Write a program, in which according to the month number print the no. of days in that month
#include<stdio.h>
int main(){
	int months;
	printf("Enter the number of month :");
	scanf("%d",&months);
	switch(months){
		case 1:
			printf("1st month january having 31 days\n");
			break;
		case 2:
			printf("2st month February having 28 days\n");
			break;
		case 3:
			printf("3st month March having 31 days\n");
			break;
		case 4:
			printf("4st month April having 30 days\n");
			break;
		case 5:
			printf("5st month May having 31 days\n");
			break;
		case 6:
			printf("6st month  June having 30 days\n");
			break;
		case 7:
			printf("7st month July having 31 days\n");
			break;
		case 8:
			printf("8st month August having 31 days\n");
			break;
		case 9:
			printf("9st month September having 30 days\n");
			break;
		case 10:
			printf("10st month October having 31 days\n");
			break;
		case 11:
			printf("11st month November having 30 days\n");
			break;
		case 12:
			printf("12st month December having 31 days\n");
			break;											
	}
	return 0;
}
