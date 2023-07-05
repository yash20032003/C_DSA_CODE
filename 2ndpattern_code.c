#include<stdio.h>
int main(){
	char ch='A';
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
			printf("%c ",ch);
			ch=ch+2;
		}
		printf("\n");
		
	}
	printf("\n");
	char ch1='A';
	int x,y;
	for(x=1;x<=3;x++){
		for(y=1;y<=x;y++){
			printf("%c ",ch1);
			ch1=ch1+1;
		}
		printf("\n");
		
	}
	return 0;
}
