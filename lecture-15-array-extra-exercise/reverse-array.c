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
	printf("Element of array:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nElement of array in reverse order:");
	for(int i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
}