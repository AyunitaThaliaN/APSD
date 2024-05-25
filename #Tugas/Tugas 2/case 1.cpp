#include <iostream>
#include <string>
using namespace std;

class Siswa {
private:
    string nama;
    int nim;
    int nilaiTugas1, nilaiTugas2, nilaiTugas3;

public:
    // Konstruktor
    Siswa(string _nama, int _nim) {
        nama = _nama;
        nim = _nim;
    }

    // Menampilkan data siswa
    void tampilkanData() {
        cout << "Nama siswa: " << nama << endl;
        cout << "NIM: " << nim << endl;
    }

    // Input nilai tugas
    void inputNilaiTugas() {
        cout << "Masukkan nilai Tugas 1: ";
        cin >> nilaiTugas1;
        cout << "Masukkan nilai Tugas 2: ";
        cin >> nilaiTugas2;
        cout << "Masukkan nilai Tugas 3: ";
        cin >> nilaiTugas3;
    }

    // Menghitung rata-rata nilai tugas
    void hitungRataRata() {
        float rataRata = (nilaiTugas1 + nilaiTugas2 + nilaiTugas3) / 3.0;
        cout << "Rata-rata nilai tugas: " << rataRata << endl;
    }
};

int main() {
    string namaSiswa;
    int nimSiswa;

    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan NIM siswa: ";
    cin >> nimSiswa;

    // Membuat objek siswa
    Siswa siswa(namaSiswa, nimSiswa);

    cout << "Data siswa: " << endl;
    siswa.tampilkanData();

    // Input nilai tugas
    siswa.inputNilaiTugas();

    // Menghitung rata-rata nilai tugas
    siswa.hitungRataRata();

    return 0;
}
