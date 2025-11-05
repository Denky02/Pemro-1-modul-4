#Program Kalkulator Sederhana
print('Selamat datang di program Kalkulator Sederhana!')
print('_______________________________________________\n')

while True:
    print("Pilih program :")
    print("1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    operasi = int(input("Masukkan pilihanmu : "))
    print('_______________________________________________\n')
    nama_saya = ("Muhammad Rizky Ramadhani")

    if operasi == 1:
        nilai1 = int(input("Masukkan nilai pertama : "))
        nilai2 = int(input("Masukkan nilai kedua : "))
        print(f'Hasil Penjumlahan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1+nilai2:.2f}')
        print("\n🤔 Ada yang bisa saya bantu lagi❓\n")
    elif operasi == 2:
        nilai1 = int(input("Masukkan nilai pertama : "))
        nilai2 = int(input("Masukkan nilai kedua : "))
        print(f'Hasil Pengurangan antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1-nilai2:.2f}')
        print("\n🤔 Ada yang bisa saya bantu lagi❓\n")
    elif operasi == 3:
        nilai1 = int(input("Masukkan nilai pertama : "))
        nilai2 = int(input("Masukkan nilai kedua : "))
        print(f'Hasil Perkalian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1*nilai2:.2f}')
        print("\n🤔 Ada yang bisa saya bantu lagi❓\n")
    elif operasi == 4:
        nilai1 = int(input("Masukkan nilai pertama : "))
        nilai2 = int(input("Masukkan nilai kedua : "))
        if nilai2 == 0:
            print("\n❗ Pembagian dengan nol tidak diperbolehkan. Silakan masukkan nilai selain nol.\n")
        else:
            print(f'Hasil Pembagian antara {nilai1:.2f} dengan {nilai2:.2f} adalah {nilai1/nilai2:.2f}')
            print("\n🤔 Ada yang bisa saya bantu lagi❓\n")
    elif operasi == 5:
        print(f"Terimakasih, telah menggunakan kalkulator {nama_saya} 😊🙏")
        break
    else:
        print('❗ Input anda salah, silahkan coba lagi\n')