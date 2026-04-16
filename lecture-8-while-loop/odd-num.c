#include<stdio.h>

int main(){
	
	int a;
	printf("Enter The value of a :");
	scanf("%d",&a);
	
	int i=1;
	while(a>=i){
		printf("%d\n",a);
		a = a-2;
	}
}