#include<stdio.h>

int main(){
	int a,b;
	printf("Enter a value of a :");
	scanf("%d",&a);
	printf("Enter a value of b :");
	scanf("%d",&b);
	
	printf("Befor Swapping:\na = %d\nb = %d\n",a,b);
	//a=a+b
	int *ptr;
	ptr=&a;
	*ptr=a+b;
	//b=a-b
	int *ptr2;
	ptr2=&b;
	*ptr2=a-b;
	//a=a-b
	*ptr=a-b;
	
	printf("%u",*ptr);
	printf("%u",*ptr2);
	
	printf("After Swapping:\na = %d\nb = %d",a,b);
}
	  
	