/*Write a C program to check whether an Alphabet is a vowel or Constant using switch case*/

#include<stdio.h>
int main(){
	char ch;
	printf("enter an alphabet:");
	scanf("%c",&ch);
	ch=tolower(ch);
	
	switch (ch){
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
			
		
		printf("%c is a vowel\n",ch);
		break;
		
		default:
			printf("%c is a consonant\n",ch);
			break;
	}
	
	
}
