#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Masukkan banyak data: ";
    cin >> n;

    string nama[n];
    int nilaiUTS[n], nilaiUAS[n];
    float nilaiAkhir[n];
    char nilaiHuruf[n];

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << endl;
        cout << "Nama Mahasiswa: ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Nilai UTS: ";
        cin >> nilaiUTS[i];
        cout << "Nilai UAS: ";
        cin >> nilaiUAS[i];

        nilaiAkhir[i] = 0.6 * nilaiUTS[i] + 0.4 * nilaiUAS[i];

        if (nilaiAkhir[i] >= 80)
            nilaiHuruf[i] = 'A';
        else if (nilaiAkhir[i] >= 70)
            nilaiHuruf[i] = 'B';
        else if (nilaiAkhir[i] >= 56)
            nilaiHuruf[i] = 'C';
        else if (nilaiAkhir[i] >= 47)
            nilaiHuruf[i] = 'D';
        else
            nilaiHuruf[i] = 'E';
    }

    cout << "\n| No | Nama Mahasiswa | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |" << endl;
    cout << "|----|----------------|-----------|-----------|-------------|-------------|" << endl;
    
    cout << "\n| 1 |  Evelyn    |   80      |    85     |    90      |     A        | " << endl;
    
    cout << "\n| 2 |  Jovin     |   76    |      80     |     87      |    B        | " << endl;    

    for (int i = 0; i < n; i++) {
        cout << "|" << setw(3) << i + 1 << " |" << setw(15) << nama[i] << " |" << setw(10) << nilaiUTS[i] << " |" << setw(10) << nilaiUAS[i] << " |" << setw(12) << fixed << setprecision(1) << nilaiAkhir[i] << " |" << setw(12) << nilaiHuruf[i] << " |" << endl;
    }

    return 0;
}
