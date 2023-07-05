#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int arr[5]={1,2,3,4,5};
bool  fun(int size,int index){
if(index==size-1){
	return true;
}
return arr[index]<arr[index+1] && fun(size,index+1);

}

void main(){
bool ret=fun(5,0);
	printf("%d",ret);
}
