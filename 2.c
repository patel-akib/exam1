#include<stdio.h>
int main(){
	
	
	/*WAP to find lowest value from 3 numbers using nested if else*/
	
	
	 
	int num1,num2,num3;
	printf("enter three numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>=num2&&num1>=num3){
		printf("%d is the largesr number.\n",num1);
	}
	else if(num2>=num1&&num2>=num3){
		printf("%d is the largest number.\n",num2);
	}
	else{
		printf("%d is the largest number.\n",num3);
	}
	return 0;
}
