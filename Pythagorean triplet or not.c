//Write a Program that takes the angles of a triangle from the user and print whether that triangle is valid or not

#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the three angles of trangle :");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a+b+c)==180){
		printf("valid angles of trangles :%d %d %d \n",a,b,c);
	}
	else{
		printf("invalid angles of trangles:%d %d %d \n",a,b,c);
	}
	return 0;
}
