#include <stdio.h>
#include <math.h>
#include <malloc.h>


int main() {
    int *a;
    int i,n,x;
    
    printf("Enter the quantity of array elements: "); 
    scanf("%d %d", &n, &x); 
    a = (int*)malloc(n*sizeof(int)); 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int j = 0;
    while(a[j]!=x) {
        printf("%d \n", a[j]);
        j++;
        if (j==n){
            printf("break");
            free(a);
            return 0;
        }
    }
    free(a);
}