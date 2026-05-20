#include<stdio.h>

int main(){
	
	char str[10];
	for(int i=0;i<11;i++){
		printf("Enter any string :");
		scanf("%s",&str[i]);
	}
	for(int i=0;i<11;i++){
		char cap=str[i]-32;
			printf("%c",cap);
		
	}
}