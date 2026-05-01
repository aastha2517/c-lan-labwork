#include<stdio.h>

int main(){
	
	int n,sum;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the value :");
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	
	printf("The Sum of array elements are :%d",sum);
}