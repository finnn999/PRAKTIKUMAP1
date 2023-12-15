#include <iostream>

int main() {
    int ac = 800;
    int kulkas = 200;
    int setrika = 150;
    int mesincuci = 250;
    int lampu = 250;
    int lainnya = 100;

    int kapasitaspower= 2200;

    double tariff;
    if (kapasitaspower == 900) {
        tariff = 1350;
    } else if (kapasitaspower == 1300) {
        tariff = 1440;
    } else if (kapasitaspower == 2200) {
        tariff = 1450;
    } else if (kapasitaspower == 3500) {
        tariff = 1500;
    } else {
        std::cout << "Daya listrik tidak valid." << std::endl;
        return 1; 
    }
    int totalpemakaianharian = ac + kulkas + setrika + mesincuci + lampu + lainnya;

    double pengeluaranperbulan = (double)totalpemakaianharian / 1000 * tariff * 30;
    std::cout << "Biaya listrik bulanan: Rp. " << pengeluaranperbulan << std::endl;

    return 0;
}