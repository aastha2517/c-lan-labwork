#include<stdio.h>

int main(){
	
	int str[10];
	for(int i=0;i<10;i++){
		printf("Enter any string :");
		scanf("%s",&str[i]);
	}
	for(int i=0;i<10;i++){
		char low=str[i]+32;
		printf("%c",low);
	}
	
	
}