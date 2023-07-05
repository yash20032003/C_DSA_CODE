//: Write a program to check if a character is a vowel or consonant. Take all the values from the user

#include<stdio.h>
int main(){
	
    char ch;
	printf("Enter the character :\n");
	scanf("%c",&ch);
	
	if(ch=='A' || ch=='E'|| ch=='I'|| ch=='O'|| ch=='U' || ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
		printf("%c is a vowel",ch);
	}
	
	else{
		printf("%c is a consonant \n",ch);
	}
	return 0;
}
