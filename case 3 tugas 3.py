print("PROGRAM HITUNG GAJI KARYAWAN KONTRAK")
nama_karyawan = input("Nama Karyawan: ")
golongan_jabatan = int(input("Golongan Jabatan (1/2/3): "))
pendidikan = input("Pendidikan (SMA/D1/D3/S1): ")
jumlah_jam_kerja = float(input("Jumlah jam kerja: "))

gaji_pokok = 300000

# Menghitung tunjangan jabatan
if golongan_jabatan == 3:
    tunjangan_jabatan = 0.15 * gaji_pokok
elif golongan_jabatan == 2:
    tunjangan_jabatan = 0.1 * gaji_pokok
else:
    tunjangan_jabatan = 0.05 * gaji_pokok

# Menghitung tunjangan pendidikan
if pendidikan == "SMA":
    tunjangan_pendidikan = 0.025 * gaji_pokok
elif pendidikan == "D1":
    tunjangan_pendidikan = 0.05 * gaji_pokok
elif pendidikan == "D3":
    tunjangan_pendidikan = 0.2 * gaji_pokok
else:
    tunjangan_pendidikan = 0.3 * gaji_pokok

# Menghitung honor lembur
jam_kerja_normal = 8
if jumlah_jam_kerja > jam_kerja_normal:
    kelebihan_jam_kerja = jumlah_jam_kerja - jam_kerja_normal
    honor_lembur = kelebihan_jam_kerja * 3500
else:
    honor_lembur = 0

# Menghitung total gaji
total_gaji = gaji_pokok + tunjangan_jabatan + tunjangan_pendidikan + honor_lembur

print("\nKaryawan yang bernama", nama_karyawan)
print("Tunjangan Jabatan Rp", tunjangan_jabatan)
print("Tunjangan Pendidikan Rp", tunjangan_pendidikan)
print("Honor Lembur Rp", honor_lembur)
print("Jadi karyawan yang bernama", nama_karyawan, "memperoleh gaji sebesar", total_gaji)

