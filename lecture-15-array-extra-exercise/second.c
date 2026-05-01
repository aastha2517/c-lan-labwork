#include <stdio.h>

int main() {
    int size,k;
    printf("Enter row size: ");
    scanf("%d", &size);
    printf("Enter column size: ");
    scanf("%d", &k);

    int a[size][k], b[size][k], c[size][k];
    printf("\nEnter array A's elements:\n");
    for (int i = 0; i < size; i++) {
    	for(int j=0; j<k;j++){
        printf("a[%d][%d] = ", i,j);
        scanf("%d", &a[i]);
    }
  }
    printf("\nEnter array B's elements:\n");
    for (int i = 0; i < size; i++) {
    	for(int j=0; j<k;j++){
        printf("b[%d][%d] = ", i,j);
        scanf("%d", &b[i]);
    }
}
    for (int i = 0; i < size; i++) {
    	for(int j=0; j<k;j++){
        c[i][k] = a[i][k] + b[i][k];
    } 
    
}
    printf("\nOutput:\nArray C is: ");
    for (int i = 0; i < size; i++) {
        printf("%d", c[i][k]);
        if (i < size - 1) {
            printf(", ");
        }
    }

 }



