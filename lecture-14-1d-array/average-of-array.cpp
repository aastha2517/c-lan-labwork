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
	
	float sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("Average of an array :%0.2f",sum/n);
}