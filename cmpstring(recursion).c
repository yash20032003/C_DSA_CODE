#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
int i=0;
int len,len1;
char a[10],b[10];
int cmp(){
	if(len==len1){
		if(a[i]==b[i]){
		  count++;
		}
	i++;
    if(a[i]!='\0' && b[i]!='\0'){
	cmp();
    }
    if(count==len && count==len1)
    {
	   return 1;
    }else{
	   return 0;
    }
}else{
	return 0;
}
}
void main(){
	printf("Enter the first name:");
	scanf("%s",&a);
	len=strlen(a);
	printf("Enter the second name:");
	scanf("%s",&b);
	len1= strlen(b);
	int ret= cmp();
	if(ret==1){
	    printf("string are same \n");
	}else{
		printf("string are not same\n");
	}
}
