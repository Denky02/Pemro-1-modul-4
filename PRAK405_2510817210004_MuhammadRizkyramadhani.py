# Program Jumlah Kelipatan
print('Selamat datang di program Jumlah Kelipatan Angka!')
print('_________________________________________\n')
n = int(input("Masukkan banyaknya n : "))
kelipatan = int(input("Masukkan nilai kelipatan : "))
print('_________________________________________\n')
print('Berikut adalah hasilnya :')

total = 0

for i in range(1, n + 1):
    jumlah_baris = 0
    ekspresi = ""
    for j in range(i, 0, -1):
        jumlah_baris += j * kelipatan
        ekspresi += f"({j} * {kelipatan})"
        if j > 1:
            ekspresi += " + "
    print(ekspresi, "=", jumlah_baris)
    total += jumlah_baris

print(f'Totalnya adalah {total}')