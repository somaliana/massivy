#include <stdio.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    int array[n];
    int i = 0;
    while (i < n) {
        int element;
        scanf("%d", &element);
        array[i] = element;
        i++;
    }
    for (int i = 0; i<n; i++) {
        if (i%2==0) {
            array[i] = array[i]*(-1);

        }
        if (array[i]%2!=0) {
            array[i] *= 2;
        }

    }
    for (int i = 0; i < n; i++) {
        printf("%d \n", array[i]);
    }


}