#Program Kelipatan
print('Selamat datang di program Kelipatan Angka!')
print('_________________________________________\n')
kelipatan = int(input("Masukkan kelipatan : "))
simbol = input("Masukkan simbol : ")
print('_________________________________________\n')

print('Berikut adalah hasilnya :')
for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=' ')
    else:
        print(i, end=' ')
