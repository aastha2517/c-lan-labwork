#include<stdio.h>

int main(){
	
	int a,b,c;
	
	printf("Enter The Value Of a :-");
	scanf("%d",&a);
	
	printf("Enter The Value Of b :-");
	scanf("%d",&b);
	
	printf("Enter The Value Of c :-");
	scanf("%d",&c);
	
	(a<=b)
	//a is min
	//True Statement
	?(a<=c)
		//a is min
		?printf("Minimum Value is a")
		//c is min
		:printf("Minimum Value is c")
	//False Statement
	//b is min
	:(b<=c)
		//b is min
		?printf("Miminum Value is b")
		//c is min
		:printf("Minimum Value is c");
			
	
	
}