#include<stdio.h>

int main(){
	
	int start,end;
	printf("Enter The first leap year :");
	scanf("%d",&start);
	printf("Enter the second leap year :");
	scanf("%d",&end);
	
	while(start<=end){
		printf("%d\n",start);
		start+=4;
	}
}