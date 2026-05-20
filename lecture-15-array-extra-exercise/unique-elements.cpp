#include<stdio.h>

int main(){
	
	int n,count=0;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter any value :");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(track!=arr[i]){
			printf("%d ",arr[i]);
		}
	}
}