#include<stdio.h>
 
 int main(){
 	
 	int a,b;
 	
 	printf("Enter The Value Of a :-");
 	scanf("%d",&a);
 	
 	printf("Enter The Value Of b :-");
 	scanf("%d",&b);
 	
 	int ans;
 	ans = (a*a*a) + (3*a*a*b) + (3*b*b*a) + (b*b*b);
 	
 	printf("Answer is %d",ans);
 }