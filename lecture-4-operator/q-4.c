#include<stdio.h>
 
 int main(){
 	
 	int a,b,c;
 	
 	printf("Value Of a Before Swapping :-");
 	scanf("%d",&a);
 	
 	printf("Value Of b Before Swapping :-");
 	scanf("%d",&b);
 	
 	c=a;
 	a=b;
 	b=c;
 	
 	printf("Value Of a After Swapping :-%d\n",a);
 	printf("Value Of b After Swapping :-%d",b);
 	
 	
 }