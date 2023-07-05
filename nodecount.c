#include<stdio.h>
#include<stdlib.h>
int count=0;
long nodecount(long num){
	if(num%10==0 ){
		count++;
	}
	num=num/10;
	if(num!=0){
	nodecount(num);
    }
    if(num==0){
	return count;
}
}
void main(){
long ret=nodecount(10);
printf("number of zero are :%ld",ret);
}
