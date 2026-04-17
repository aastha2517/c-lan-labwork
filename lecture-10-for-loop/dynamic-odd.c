#include<stdio.h>

int main(){
	int a,i=1;
	printf("Enter the value of a:");
	scanf("%d",&a);
	for(a;a>=i;a--){
		if(a%2 == 1){
			printf("%d\n",a);
		}
		
	}
}