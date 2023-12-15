#include <iostream>
#include <string>

using namespace std;

struct Barang {
    string nama;
    int hargaPerItem;
    int jumlahTerjual;
    int totalPenjualan;
};

int main() {
    const int jumlahBarang = 3; 

    Barang daftarBarang[jumlahBarang];

    for (int i = 0; i < jumlahBarang; ++i) {
        cout << "Masukkan harga per item untuk Barang " << i + 1 << ": Rp. ";
        cin >> daftarBarang[i].hargaPerItem;
    }

    for (int i = 0; i < jumlahBarang; ++i) {
        cout << "Masukkan jumlah terjual untuk Barang " << i + 1 << ": ";
        cin >> daftarBarang[i].jumlahTerjual;

        daftarBarang[i].totalPenjualan = daftarBarang[i].hargaPerItem * daftarBarang[i].jumlahTerjual;
    }

    int totalPenjualanHarian = 0;
    for (int i = 0; i < jumlahBarang; ++i) {
        totalPenjualanHarian += daftarBarang[i].totalPenjualan;
    }

    int indexItemLaku = 0;
    for (int i = 1; i < jumlahBarang; ++i) {
        if (daftarBarang[i].jumlahTerjual > daftarBarang[indexItemLaku].jumlahTerjual) {
            indexItemLaku = i;
        }
    }

    cout << "\nTotal penjualan Minimarket hari ini: Rp. " << totalPenjualanHarian << endl;
    cout << "Item yang paling laku adalah Barang " << indexItemLaku + 1 << endl;

    return 0;
}