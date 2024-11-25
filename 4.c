#include<stdio.h>
int main(){
	
	/*Write a C program to count the number of digits in a number. Using for loop*/
	
	
	int num,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	if(num==0){
		count=1;
	}
	else{
		for(;num!=0;num/=10){
		count++;	
		}
		
	}
	printf("the number of digits is:%d\n",count);
}
