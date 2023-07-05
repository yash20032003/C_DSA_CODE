#include<stdio.h>

void digit(int n){
	static int sum=0;
	if(n>0)
	{
		sum=sum+n;
	digit(n--);
	}
	printf("%d",sum);
}
void main(){
	digit(10);

}


