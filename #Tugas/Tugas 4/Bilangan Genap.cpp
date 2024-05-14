#include <iostream>
using namespace std;

int main() {
    for (int a = 2; a <= 20; a += 2) {
        cout << a;
        if(a < 20) {
            cout << "+";
        }
    }     
    // Hasil
    int hasil = 110;
    cout << "=" << hasil;
  
    return 0;
}
