//2. WAP to print the character whose ASCII is even.
#include<stdio.h>
int main(){
	int num;
	for(num=0;num<=127;num++){
		if(num%2==0){
			printf("%c is the even ASCII value of number %d\n",num,num);
		}
	}
	return 0;
}
