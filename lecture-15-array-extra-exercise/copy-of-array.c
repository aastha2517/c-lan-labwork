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
	int arr2[n];
	printf("The copy array is :");
	for(int i=0;i<n;i++){
		arr2[i]=arr[i];
		printf("%d ",arr2[i]);
	}
}