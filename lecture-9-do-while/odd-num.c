#include<stdio.h>

int main(){
	int a;
	printf("Enter The value of a :");
	scanf("%d",&a);
	int i=1;
	do{
		if(i%2==0){
			printf("%d\n",i);		
		}
		i++;
	}while(i<=a);
	
}
