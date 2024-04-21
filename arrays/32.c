#include<stdio.h>

int main() {
    int a[9] = { -1, 22, -3, 4, 88, 6, -7, 8, 9 }, temp = 0, c[9] = {0}, d[9] = {0}, e[9] = {0}, count = 0;

    for (int i = 0; i < 9; i++) {
        if (a[i] < 0) {
            c[temp] = a[i];
            temp++;
        } else {
            d[count] = a[i];
            count++;
        }
    }

    for (int i = 0; i < temp; i++) {
        e[i] = c[i];
    }

    for (int i = 0; i < count; i++) {
        e[i + temp] = d[i];
    }

    for (int i = 0; i < 9; i++) {
        printf("%d  ", e[i]);
    }
    
    return 0;
}
