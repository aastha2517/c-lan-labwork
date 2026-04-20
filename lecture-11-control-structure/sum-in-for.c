#include<stdio.h>

int main(){
	
	int a;
	int sum = 0;
	printf("Enter the sum of number :");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		
		sum = sum+i;
	} 
	
	printf("The sum of all number is %d",sum);
}