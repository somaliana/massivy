#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main() {
    int *a;
    int i,n;
    printf("Enter the quantity of array elements: "); 
    scanf("%d", &n); 
    a = (int*)malloc(n*sizeof(int)); 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i<n; i++) {
        if (i%2==0) {
            a[i] = a[i]*(-1);

        }
        if (a[i]%2!=0) {
            a[i] *= 2;
        }

    }
    for (int i = 0; i < n; i++) {
        printf("%d \n", a[i]);
    }
    free(a);

}