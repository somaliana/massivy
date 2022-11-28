#include <stdio.h>
#include <math.h>


int main() {
    int n;
    double x;
    scanf("%d %lf", &n,&x);
    int array[n];
    int i = 0;
    while (i < n) {
        int element;
        scanf("%d", &element);
        array[i] = element;
        i++;
    }
    int max = 0;

    for (int j =0; j<n;j++) {
        int flag = 1;

        int k = 2;
        while (k<n) {
            if (array[j]%k==0) {
                flag = 0;
                break;

            }
            k++;
        }
        if (flag) {
            if (array[j] > x) {
                max = array[j];
                break;
            }
        }
        
    }
    printf("%d", max);
}