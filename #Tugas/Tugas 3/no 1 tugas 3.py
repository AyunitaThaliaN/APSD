print("PROGRAM HITUNG NILAI RATA-RATA")
nama_siswa = input("Nama Siswa: ")
nilai_pertandingan_1 = float(input("Nilai Pertandingan I: "))
nilai_pertandingan_2 = float(input("Nilai Pertandingan II: "))
nilai_pertandingan_3 = float(input("Nilai Pertandingan III: "))

rata_rata = (nilai_pertandingan_1 + nilai_pertandingan_2 + nilai_pertandingan_3) / 3

print("\nSiswa yang bernama", nama_siswa)
print("Memperoleh nilai rata-rata", rata_rata, "dan menjadi juara ke-")

if rata_rata > 80:
    print("I")
elif rata_rata > 75:
    print("II")
elif rata_rata > 65:
    print("III")
else:
    print("tidak juara")