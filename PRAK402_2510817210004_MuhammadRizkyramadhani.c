#include <stdio.h>

int main() {
    int batas;

    printf("Selamat datang di program Ganjil & Genap!\n");
    printf("_________________________________________\n\n");

    printf("Masukkan batas bilangan : ");
    scanf("%d", &batas);

    printf("_________________________________________\n\n");

    printf("Berikut adalah hasilnya :\n");

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    for (int i = batas; i > 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}