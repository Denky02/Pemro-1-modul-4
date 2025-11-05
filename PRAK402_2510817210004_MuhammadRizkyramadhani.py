#Program Ganjil & Genap
print('Selamat datang di program Ganjil & Genap!')
print('_________________________________________\n')
batas = int(input("Masukkan batas bilangan : "))
print('_________________________________________\n')

print('Berikut adalah hasilnya :')
for i in range(1, batas + 1):
    if i % 2 == 1:
        print(i, end=' ')
print()
for i in range(batas, 1, -1):
    if i % 2 == 0:
        print(i, end=' ')