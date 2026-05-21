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
	
	int *ptr[n];
	for(int i=0;i<n;i++){
		ptr[i] = &arr[i];
	}
	
	int **ptr1[n];
	for(int i=0;i<n;i++){
		ptr1[i] = &ptr[i];
	}
	
	for(int i=n-1;i>=0;i--){
		printf("%d, ", **ptr1[i]* **ptr1[i]);
	}	
	
}