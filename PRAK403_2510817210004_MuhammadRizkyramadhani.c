#include <stdio.h>

int main() {
    int a, b;

    printf("Selamat datang di program Angka Bersilangan!\n");
    printf("_________________________________________\n\n");

    printf("Masukkan angka pertama : ");
    scanf("%d", &a);
    printf("Masukkan angka kedua : ");
    scanf("%d", &b);

    printf("_________________________________________\n\n");

    printf("Berikut adalah hasilnya :\n");

    if (a < b) {
        for (int i = a; i <= b; i++) {
            printf("%d %d", i, a + b - i);
            if (i < b) {
                printf(" - ");
            }
        }
    } else {
        for (int i = a; i >= b; i--) {
            printf("%d %d", i, a + b - i);
            if (i > b) {
                printf(" - ");
            }
        }
    }

    return 0;
}