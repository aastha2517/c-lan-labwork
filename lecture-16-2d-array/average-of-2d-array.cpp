#include<stdio.h>

int main(){
	
	int n,m;
	printf("Enter the size of row :");
	scanf("%d",&n);
	printf("Enter the size of colum :");
	scanf("%d",&m);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the value :");
		scanf("%d",&arr[i]);
	}
	int arr2[m];
	for(int i=0;i<m;i++){
		printf("Enter the value :");
		scanf("%d",&arr2[i]);
	}
	
	float sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("Average of an array :%0.2f",sum/n);
}