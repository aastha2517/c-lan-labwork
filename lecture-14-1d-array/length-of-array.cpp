#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the value :");
		scanf("%d",&arr[i]);
	}
	
	int count=0;
	for(int i=0;i<n;i++){
		count++;
	}
	printf("Length of an array :%d",count);
}