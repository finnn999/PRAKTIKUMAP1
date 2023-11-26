#include <iostream>
#include <string>

struct Barang {
    std::string kode;
    std::string nama;
    int jumlah;
    int hargaSatuan;
};

int calculateTotalHarga(Barang barang[], int jumlahBarang) {
    int totalHarga = 0;
    for (int i = 0; i < jumlahBarang; ++i) {
        totalHarga += barang[i].jumlah * barang[i].hargaSatuan;
    }
    return totalHarga;
}

double calculateKeuntungan(int totalHarga) {
    return 0.1 * totalHarga;
}

int main() {
    const int jumlahBarang = 20;
    Barang dataPenjualan[jumlahBarang];

    for (int i = 0; i < jumlahBarang; ++i) {
        std::cout << "Data Barang ke-" << i + 1 << ":" << std::endl;
        std::cout << "Kode Barang: ";
        std::cin >> dataPenjualan[i].kode;
        std::cout << "Nama Barang: ";
        std::cin >> dataPenjualan[i].nama;
        std::cout << "Jumlah: ";
        std::cin >> dataPenjualan[i].jumlah;
        std::cout << "Harga Satuan: Rp.";
        std::cin >> dataPenjualan[i].hargaSatuan;
        std::cout << std::endl;
    }

    int totalHarga = calculateTotalHarga(dataPenjualan, jumlahBarang);

    double keuntungan = calculateKeuntungan(totalHarga);

    std::cout << "Total Harga Penjualan: Rp." << totalHarga << std::endl;
    std::cout << "Keuntungan: Rp." << keuntungan << std::endl;

    return 0;
}