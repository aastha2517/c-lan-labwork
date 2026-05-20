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
	
	int m;
	printf("Enter the size of array :");
	scanf("%d",&m);
	
	int arr2[m];
	for(int i=0;i<m;i++){
		printf("Enter the value :");
		scanf("%d",&arr2[i]);
	}
	
	int arr3[n];
	for(int i=0;i<n;i++){
		arr3[i]=arr[i]+arr2[i];
	}
	printf("The sum of array is :");
	for(int i=0;i<n;i++){
		printf("%d ",arr3[i]);
	}
	
}