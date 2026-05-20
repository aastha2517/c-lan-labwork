#include<stdio.h>
int main(){
	int n,n2,n3,i,temp=0;
	printf("Enter array size :");
	scanf("%d",&n);
	printf("Enter array size :");
	scanf("%d",&n2);
	//array 1 value insertion
	int arr[n],arr2[n2];
	for(int i=0;i<n;i++){
		printf("Enter the value of array 1 :");
		scanf("%d",&arr[i]);
	}
	//array 2 value insertion
	for(int i=0;i<n2;i++){
		printf("Enter the value of array 2 :");
		scanf("%d",&arr2[i]);
	}
	n3=n+n2;
	int arr3[n3];
	//array 1 value is inserted in array 3
	for(i=0;i<n;i++){
		arr3[i]=arr[i];
	}
	//array 2 value is inserted in array 3
	for(int j=0;j<n2;j++){
		arr3[i]=arr2[j];
		i++;	
	}
	//array 3 iteration
	for(int i=0;i<n3;i++){
		printf("%d ",arr3[i]);
	}
	printf("\n");
	//descending order
	for(int i=0;i<n3;i++){
		for(int j=0;j<n3-1;j++){
			if(arr3[j]<arr3[j+1]){
				temp=arr3[j+1];
				arr3[j+1]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	for(int i=0;i<n3;i++){
		printf("%d ",arr3[i]);
	}

}