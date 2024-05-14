#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n = 5; // Jumlah baris segitiga (sesuaikan dengan kebutuhan)

  // Perulangan untuk setiap baris
  for (int i = 1; i <= n; i++) {
    int sum = 0; // Penjumlahan deret bilangan genap pada baris i
    
    // Perulangan untuk setiap kolom dalam baris i
    for (int j = 1; j <= i; j++) {
      int genap = 2 * j; // Menghitung bilangan genap
      cout << genap << " "; // Menampilkan bilangan genap
      sum += genap; // Menambahkan bilangan genap ke total
    }
    
    cout << "= " << sum << endl; // Menampilkan total penjumlahan baris i
  }

  return 0;
}
