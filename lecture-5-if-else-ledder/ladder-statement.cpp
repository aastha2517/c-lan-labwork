#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Enter any Number :-");
	scanf("%d",&a);
	
	if(a==0){
		printf("The Number is a neture");
	}else if(a>0){
		printf("The Number is a Positive ");
	}else{
		printf("The Number is a Negative");
	}
}