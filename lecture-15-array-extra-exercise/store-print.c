#include<stdio.h>

int main(){
	
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the value of array :");
		scanf("%d",&arr[i]);
	}
	printf("Element of array :");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}