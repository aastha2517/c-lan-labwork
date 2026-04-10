#include<stdio.h>
 
 int main(){
 	
 	int a,b;
 	
 	printf("Value Of a Before Swapping :-");
 	scanf("%d",&a);
 	
 	printf("Value Of b Before Swapping :-");
 	scanf("%d",&b);
 	
 	a=a+b;
 	b=a-b;
 	a=b-a;
 	
 	printf("Value Of a After Swapping :-%d\n",a);
 	printf("Value Of b After Swapping :-%d",b);
 	
 	
 }