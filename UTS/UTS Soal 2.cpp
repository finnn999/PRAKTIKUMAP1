#include <iostream>
#include <iomanip> 

int main() {
    double tabunganDollar = 12.000;
    double tabunganEuro = 20.000;

    double usdKeRupiahKurs = 15.000;
    double euroKeUSDKurs = 0.997;

    double hargaMobilRupiah = 425.000000;

    double euroKeUSD = tabunganEuro * euroKeUSDKurs;

    double totalUSD = tabunganDollar + euroKeUSD;

    double totalRupiah = totalUSD * usdKeRupiahKurs;

    double sisaUang = totalRupiah - hargaMobilRupiah;

    std::cout << "Total tabungan Pak Anto dalam Rupiah: " << std::fixed << std::setprecision(2) << totalRupiah << " Rp" << std::endl;
    std::cout << "Sisa uang Pak Anto setelah membeli mobil: " << std::fixed << std::setprecision(2) << sisaUang << " Rp" << std::endl;

    return 0;
}