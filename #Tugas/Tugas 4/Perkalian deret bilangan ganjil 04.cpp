#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n = 5; // Jumlah baris segitiga (sesuaikan dengan kebutuhan)

  // Perulangan untuk setiap baris
  for (int i = 1; i <= n; i++) {
    int hasil_perkalian = 1; // Inisialisasi hasil perkalian dengan 1
    
    // Perulangan untuk setiap kolom dalam baris i
    for (int j = 1; j <= i; j++) {
      int ganjil = 2 * j - 1; // Menghitung bilangan ganjil
      cout << ganjil << " "; // Menampilkan bilangan ganjil
      hasil_perkalian *= ganjil; // Mengkalikan hasil perkalian dengan bilangan ganjil
    }
    
    cout << "= " << hasil_perkalian << endl; // Menampilkan hasil perkalian baris i
  }

  return 0;
}
