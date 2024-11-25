#include<stdio.h>
int main(){
	
	/*Write a C program to print all natural numbers in reverse using while loop (from n to 1)*/
	
	
	
	int n;
	printf("enter a positive integer:");
	scanf("%d",&n);
	if(n<=0){
		printf("please enter a positive integer\n");
		
	}
	else{
		while(n>=1){
			printf("%d\n",n);
			n--;
		}
		
	}
}
