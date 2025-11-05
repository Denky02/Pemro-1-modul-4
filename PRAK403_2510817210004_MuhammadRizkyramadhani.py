# Program Client Pak Samson
print('Selamat datang di program Angka Bersilangan!')
print('_________________________________________\n')
a = int(input("Masukkan angka pertama : "))
b = int(input("Masukkan angka kedua : "))
print('_________________________________________\n')

print('Berikut adalah hasilnya :')
if a < b:
    for i in range(a, b + 1):
        print(f"{i} {a + b - i}", end=' - ' if i < b else '')
else:
    for i in range(a, b - 1, -1):
        print(f"{i} {a + b - i}", end=' - ' if i > b else '')