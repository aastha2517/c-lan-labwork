#include<stdio.h>

int main(){
	
	int a,b,c;
	float total;
	printf("Enter a marks of first subject :-");
	scanf("%d",&a);
	printf("Enter a marks of second subject :-");
	scanf("%d",&b);
	printf("Enter a marks of third subject :-");
	scanf("%d",&c);
	
	if(a<=100 && b<=100 && c<=100){
		total = (a+b+c)/3;
		printf("The average of total marks is :-%f",total);
		
	}else{
		printf("Not valid");
	}
}