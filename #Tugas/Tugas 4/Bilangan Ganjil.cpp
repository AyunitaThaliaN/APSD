
#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 20; a += 2) {
        cout << a;
        if(a < 20) {
            cout << "+";
        }
    }     
    // Hasil
    int hasil = 100;
    cout << "=" << hasil;
  
    return 0;
}
