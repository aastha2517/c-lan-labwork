#include<stdio.h>

int main(){
	
	char str[10];
	for(int i=0;i<10;i++){
		printf("Enter any string :");
		scanf("%s",&str[i]);
	}
	
	for(int i=0;i<10;i++){
		if(str[i]>='A' && str[i]<='Z'){
			char low=str[i]+32;
			printf("%c",low);
		}else if(str[i]>='a' && str[i]<='z'){
			char upp=str[i]-32;
			printf("%c",upp);
		}	
	}
}