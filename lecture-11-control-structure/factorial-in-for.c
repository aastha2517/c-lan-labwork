#include<stdio.h>

int main(){
	
	int a;
	int fact=1;
	printf("Enter the number to find fectorial :");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		
		fact = fact*i;
	}
	printf("The factorial is :%d",fact);
}