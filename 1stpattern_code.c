#include<stdio.h>
int main(){
	char ch ='A';
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
		ch='A';
	}
	printf("\n");
	int x,y;
	for(x=1;x<=5;x++){
		for(y=1;y<=x;y++){
			printf("* ");
			
		}
		printf("\n");
		
	}
	return 0;
}
