#include <stdio.h>

int main() {
    int operasi, nilai1, nilai2;
    char nama_saya[] = "Muhammad Rizky Ramadhani";

    printf("Selamat datang di program Kalkulator Sederhana!\n");
    printf("_______________________________________________\n\n");

    while (1) {
        printf("Pilih program :\n");
        printf("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan pilihanmu : ");
        scanf("%d", &operasi);
        printf("_______________________________________________\n\n");

        if (operasi == 1) {
            printf("Masukkan nilai pertama : ");
            scanf("%d", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%d", &nilai2);
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", 
                   (float)nilai1, (float)nilai2, (float)(nilai1 + nilai2));
            printf("\nAda yang bisa saya bantu lagi?\n\n");
        } else if (operasi == 2) {
            printf("Masukkan nilai pertama : ");
            scanf("%d", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%d", &nilai2);
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", 
                   (float)nilai1, (float)nilai2, (float)(nilai1 - nilai2));
            printf("\nAda yang bisa saya bantu lagi?\n\n");
        } else if (operasi == 3) {
            printf("Masukkan nilai pertama : ");
            scanf("%d", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%d", &nilai2);
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", 
                   (float)nilai1, (float)nilai2, (float)(nilai1 * nilai2));
            printf("\nAda yang bisa saya bantu lagi?\n\n");
        } else if (operasi == 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%d", &nilai1);
            printf("Masukkan nilai kedua : ");
            scanf("%d", &nilai2);
            if (nilai2 == 0) {
                printf("\nPembagian dengan nol tidak diperbolehkan. Silakan masukkan nilai selain nol.\n\n");
            } else {
                printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", 
                       (float)nilai1, (float)nilai2, (float)nilai1 / nilai2);
                printf("\nAda yang bisa saya bantu lagi?\n\n");
            }
        } else if (operasi == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s\n", nama_saya);
            break;
        } else {
            printf("Input anda salah, silahkan coba lagi!\n\n");
        }
    }

    return 0;
}