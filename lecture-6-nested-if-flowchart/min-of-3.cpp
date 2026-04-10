#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Enter The Value Of a :-");
	scanf("%d",&a);
	
	printf("Enter The Value Of b :-");
	scanf("%d",&b);
	
	printf("Enter The Value Of c :-");
	scanf("%d",&c);
	
	if(a<=b){
		//a is min
		if(a<=c){
			printf("Minimum Value Is a");
		}else{
			printf("Minimum Value Is c");
		}
	}else{
		//b is min
		if(b<=c){
			printf("Minimum Value Is b");
		}else{
			printf("Minimum Value Is c");
		}
	}
	
}