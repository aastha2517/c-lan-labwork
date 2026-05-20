#include<stdio.h>

int main(){
	int n;
	printf("Enter a array size:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter a value :");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		int*ptr;
		ptr=&arr[i];
		*ptr=arr[i]*arr[i];
		printf("%u\n",*ptr);
	}
	
}