#include<stdio.h>

int main(){
	int a,i;
	printf("Enter the starting year :");
	scanf("%d",&a);
	printf("Enter the ending year :");
	scanf("%d",&i);
	
	for(i;a<=i;a+=4){
		printf("%d\n",a);
	}
}