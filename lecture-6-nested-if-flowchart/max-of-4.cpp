#include<stdio.h>

int main(){
	
	int a,b,c,d;
	
	printf("Enter the value of a :-");
	scanf("%d",&a);
	
	printf("Enter the value of b :-");
	scanf("%d",&b);
	
	printf("Enter the value of c :-");
	scanf("%d",&c);
	
	printf("Enter the value of d :-");
	scanf("%d",&d);
	
	if(a>=b){
		//a is max	
		if(a>=c){
			//a is max
			if(a>=d){
				//a is max
				printf("Meximum Value is a");
			}else{
				//d is max
				printf("Meximum value is d");	
			}
		}else{
			//c is max
			if(c>=d){
				printf("Meximum value is c");
			}else{
				//d is max
				printf("Meximum value is d");
			}
		}
	}else{
		//b is max
		if(b>=c){
			//b is max
			if(b>=d){
				//b is max
				printf("Meximum value is b");
			}else{
				//d is max
				printf("Meximum value is d");
			}
		}else{
			//c is max
			if(c>=d){
				printf("Meximum value is c");
			}else{
				//d is max
				printf("Meximum value is d");
			}
		}
	}	
}