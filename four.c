#include <stdio.h>
#include <math.h>


int main() {
    int n;
    double x;
    scanf("%d",&n);
    int array[2*n];
    int i = 0;
    while (i < 2*n) {
        int element;
        scanf("%d", &element);
        array[i] = element;
        i++;
    }
    int flag = 0;
    int maxNechet = -100000;
    for (int j = 0; j<2*n;j++) {
        
        if ((array[j]%2!=0)&&(array[j]>maxNechet)) {
            maxNechet = array[j];
            flag = 1;
        }
    }
    if (!flag) {
        printf("HOOOO");
        return 0;

    }
    for (int i=0;i<n-1;i++) {
        if (array[i]==maxNechet) {
            printf("firstHalf %d", array[i]);
            return 0;
        }
    }
    for (int i=n; i <2*n-1;i++) {
        if (array[i]==maxNechet) {
            printf("secondHalf %d", array[i]);
            return 0;
        }
    }
}