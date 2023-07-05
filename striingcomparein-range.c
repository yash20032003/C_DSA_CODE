#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
int i=0;
int length;
int cmp(){
	char a[10];
	printf("Enter the first name:");
	scanf("%s",&a);
	char b[10];
	int len=strlen(a);
	printf("Enter the second name:");
	scanf("%s",&b);
	int len1= strlen(b);
	printf("How many words to do you want to compare:");
	scanf("%d",&length);
	while(a[i]!='\0'&& b[i]!='\0'){
		if(i<length){
		if(a[i]==b[i]){
		  count++;
		}
	}
		i++;
	}
if(count==length && count==length)
{
	return 1;
}else{
	return 0;
}
}
void main(){
	int ret= cmp();
	if(ret==1){
	    printf("string are same \n");
	}else{
		printf("string are not same\n");
	}
}
