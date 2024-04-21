#include <stdio.h>
int main() {
    int size = 6;
    int a[6] ={3,3,3,3,3,2};
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j]&&i!=j) {
                for (int k = j; k < size-1 ; k++) {
                    a[k] = a[k + 1];
                }
                size--;
                j--;
            } 
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
