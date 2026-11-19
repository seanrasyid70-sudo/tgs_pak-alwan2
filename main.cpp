
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int pilihan, jumlah;
    int harga, total;

    cout << "====== MENU MAKANAN ======" << endl;
    cout << "1. Soto  : Rp15000" << endl;
    cout << "2. Rawon : Rp20000" << endl;

    cout << "Pilih menu (1/2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        harga = 15000;
        cout << "Anda memilih Soto" << endl;
    }
    else if (pilihan == 2) {
        harga = 20000;
        cout << "Anda memilih Rawon" << endl;
    }
    else {
        cout << "Pilihan tidak tersedia!" << endl;
        system("pause");
        return 0;
    }

    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    total = harga * jumlah;

    cout << "Total pembayaran: Rp" << total << endl;
    cout << "Terima kasih sudah memesan!" << endl;

    system("pause");
    return 0;
}
