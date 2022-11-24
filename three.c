#include <stdio.h>
#include <math.h>


int main() {
    int n;
    int x;
    scanf("%d %d", &n,&x);
    int array[n];
    int i = 0;
    while (i < n) {
        int element;
        scanf("%d", &element);
        array[i] = element;
        i++;
    }
    int j = 0;
    while(array[j]!=x) {
        printf("%d \n", array[j]);
        j++;
        if (j==n){
            printf("break");
            return 0;
        }
    }
}