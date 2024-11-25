 /*WAP to find area of below formula using basic ways ( ans = a2 + 2*a*b + b2 )  */
    
#include<stdio.h>
int main(){
	int a,b,area;
	printf("enter the valus of a and b:");
	scanf("%d %d",&a,&b);
	area=a*a+2*a*b+b*b ;
	printf("the area is:%d\n",area);
	return 0;
}
