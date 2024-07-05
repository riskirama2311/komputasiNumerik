#include <iostream>

int main() {
    // Deklarasi variabel
    double m = 10.0; // Massa dalam kilogram
    double g = 10.0; // Percepatan gravitasi dalam m/s^2
    double T;        // Tegangan dalam Newton
    double F;        // Gaya dalam Newton

    // Hitung tegangan (T)
    T = m * g;

    // Karena percepatan (a) adalah nol, maka gaya F yang dibutuhkan untuk mempertahankan kecepatan tetap adalah nol.
    F = 0;

    // Output hasil perhitungan
    std::cout << "Tegangan (T) : " << T << " Newton" << std::endl;
    std::cout << "Gaya (F) : " << F << " Newton" << std::endl;

    return 0;
}
