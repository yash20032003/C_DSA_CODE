#include<stdio.h>
int main(){
	int num=1;
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d ",num*num);
			num++;
			
		}
		printf("\n");
	}
	return 0;
}
