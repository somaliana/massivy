#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main() {
    int *a;
    int i,n,x;
    printf("Enter the quantity of array elements: "); 
    scanf("%d %d", &n, &x); 
    a = (int*)malloc(2*n*sizeof(int)); 

    for (int i = 0; i < 2*n; i++) {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    int maxNechet = -100000;
    for (int j = 0; j<2*n;j++) {
        
        if ((a[j]%2!=0)&&(a[j]>maxNechet)) {
            maxNechet = a[j];
            flag = 1;
        }
    }
    if (!flag) {
        printf("HOOOO");
        return 0;

    }
    for (int i=0;i<n-1;i++) {
        if (a[i]==maxNechet) {
            printf("firstHalf %d", a[i]);
            free(a);
            return 0;
        }
    }
    for (int i=n; i <2*n-1;i++) {
        if (a[i]==maxNechet) {
            printf("secondHalf %d", a[i]);
            free(a);
            return 0;
        }
    }
}