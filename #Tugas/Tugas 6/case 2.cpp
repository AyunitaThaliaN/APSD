#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Deklarasi variabel
  vector<string> namaPegawai;
  vector<int> jamKerja;
  vector<int> honorLembur;
  vector<int> totalHonor;
  int jumlahData;

  // Menentukan banyak data
  cout << "Masukkan banyak data: ";
  cin >> jumlahData;

  // Memasukkan data pegawai
  for (int i = 0; i < jumlahData; i++) {
    string nama;
    int jam;

    cout << "\nData Pegawai ke-" << i + 1 << ":" << endl;
    cout << "Nama Pegawai: ";
    cin.ignore(); // Mengabaikan input newline sebelumnya
    getline(cin, nama);
    cout << "Jam Kerja: ";
    cin >> jam;

    namaPegawai.push_back(nama);
    jamKerja.push_back(jam);
  }

  // Menghitung honor lembur dan total honor
  for (int i = 0; i < jumlahData; i++) {
    int lembur = jamKerja[i] - 8;
    if (lembur > 0) {
      honorLembur.push_back(lembur * 5000);
    } else {
      honorLembur.push_back(0);
    }

    totalHonor.push_back(honorLembur[i] + 15000);
  }

  // Menampilkan hasil perhitungan
  cout << "\n\n| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |\n";
  cout << "|--15--|-----Loly---------|----8-------|------5000--------|----15000---------|\n";
  for (int i = 0; i < jumlahData; i++) {
    cout << "| " << i + 1 << " | " << namaPegawai[i] << " | " << jamKerja[i] << " | " << honorLembur[i] << " | " << totalHonor[i] << " |\n";
  }

  return 0;
}
