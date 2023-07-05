#include <stdio.h>
int rev=0;
int reverse(int num){
	int reminder;
	if(num!=0){
		reminder=num%10;
		rev=rev*10+reminder;
		reverse(num=num/10);
	}
	return rev;
}
void main(){
	int ret=reverse(67);
	printf("%d",ret);
}
