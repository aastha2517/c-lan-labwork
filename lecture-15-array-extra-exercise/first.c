#include<stdio.h>
int main(){
	int n,n2,count,sum,avg;
	printf(" enter array row:");
	scanf("%d",&n);
	printf(" enter array column:");
	scanf("%d",&n2);
	int  a[n][n2],b[n][n2],c[n][n2];
	for(int i=0;i<n;i++){
		for(int j=0;j<n2;j++){
			printf(" enter value:");
	        scanf("%d",&a [i][j]);	
	     }
	   printf("\n");	
     }
	for(int i=0; i<n;i++){
		for(int j=0; j<n2;j++){
			printf(" enter value:");
	        scanf("%d",&b [i][j]);	
	      	
	    }
	    printf("\n");
    }
    	for(int i=0; i<n;i++){
		for(int j=0; j<n2;j++){
			printf("%d",a[i][j]);
	      	
	    }
	    printf("\n");
    }
    	for(int i=0; i<n;i++){
		for(int j=0; j<n2;j++){
			printf("%d",b[i][j]);
	      	
	    }
	    printf("\n");
    }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n2;j++){
       c[i][j]=a[i][j]+b[i][j];
    		
		}
	 printf("\n");	
	}
		for(int i=0; i<n;i++){
		for(int j=0; j<n2;j++){
			printf("%d",c[i][j]);
	      	
	    }
	    printf("\n");
    }
    
  }
