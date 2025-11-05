#include <stdio.h>

int main() {
    int kelipatan;
    char simbol;

    printf("Selamat datang di program Kelipatan Angka!\n");
    printf("_________________________________________\n\n");

    printf("Masukkan kelipatan : ");
    scanf("%d", &kelipatan);

    printf("Masukkan simbol : ");
    scanf(" %c", &simbol); // spasi sebelum %c untuk menangkap karakter dengan benar

    printf("_________________________________________\n\n");

    printf("Berikut adalah hasilnya :\n");
    for (int i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%c ", simbol);
        } else {
            printf("%d ", i);
        }
    }

    return 0;
}