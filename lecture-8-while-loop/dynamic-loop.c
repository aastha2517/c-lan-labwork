#include<stdio.h>

int main(){
	
	int a;
	printf("Enter The Value of a :");
	scanf("%d",&a);
	
	int i = 1;
	while(i<=a){
		printf("%d\n",i);
		i=i+1;
	}
}