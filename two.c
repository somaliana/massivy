#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main() {
    int *a;
    int i,n;
    double x;
    printf("Enter the quantity of array elements: "); 
    scanf("%d %lf", &n,&x); 
    a = (int*)malloc(n*sizeof(int)); 

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = 0;

    for (int j =0; j<n;j++) {
        int flag = 1;

        int k = 2;
        while (k<n) {
            if (a[j]%k==0) {
                flag = 0;
                break;

            }
            k++;
        }
        if (flag) {
            if (a[j] > x) {
                max = a[j];
                break;
            }
        }
        
    }
    printf("%d", max);
}