//rotating by k elements
#include <stdio.h>
int main() {
    int size = 6, k = 2;
    int a[6] = {1, 2, 3, 4, 5, 6}, b[6];
    for (int i = 0; i < size; i++) {
        if (i < k) {
            b[i] = a[size - k + i]; 
        } else {
            b[i] = a[i - k];
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
