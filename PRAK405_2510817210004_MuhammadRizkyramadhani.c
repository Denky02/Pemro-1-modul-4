#include <stdio.h>

int main() {
    int n, kelipatan, total = 0;

    printf("Selamat datang di program Jumlah Kelipatan Angka!\n");
    printf("_________________________________________\n\n");

    printf("Masukkan banyaknya n : ");
    scanf("%d", &n);
    printf("Masukkan nilai kelipatan : ");
    scanf("%d", &kelipatan);

    printf("_________________________________________\n\n");
    printf("Berikut adalah hasilnya :\n");

    for (int i = 1; i <= n; i++) {
        int jumlah_baris = 0;
        printf("");
        for (int j = i; j >= 1; j--) {
            jumlah_baris += j * kelipatan;
            printf("(%d * %d)", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah_baris);
        total += jumlah_baris;
    }

    printf("Totalnya adalah %d\n", total);

    return 0;
}