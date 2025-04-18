#include <iostream>
#include <conio.h>
using namespace std;

class KedaiAyam {
private:
    int goreng, bakar;
    const int hargaGoreng = 17000;
    const int hargaBakar = 21000;
    int totalAwal;
    float diskon, totalAkhir;
public:
    void input() {
        cout << "Jumlah ayam goreng: ";
        cin >> goreng;
        cout << "Jumlah ayam bakar : ";
        cin >> bakar;
    }

    void hitung() {
        totalAwal = (goreng * hargaGoreng) + (bakar * hargaBakar);
        if (totalAwal > 45000) {
            diskon = totalAwal * 0.10;
        } else {
            diskon = 0;
        }
        totalAkhir = totalAwal - diskon;
    }

    void cetakStruk() {
        cout << "\n===== STRUK PEMBAYARAN KEDAI AYAM =====" << endl;
        cout << "Ayam Goreng       : " << goreng << " porsi" << endl;
        cout << "Ayam Bakar        : " << bakar << " porsi" << endl;
        cout << "Total Sebelum Diskon : Rp " << totalAwal << endl;
        cout << "Diskon               : Rp " << diskon << endl;
        cout << "Total Setelah Diskon : Rp " << totalAkhir << endl;
        cout << "=======================================" << endl;
    }
};

int main() {
    KedaiAyam pesanan;
    pesanan.input();
    pesanan.hitung();
    pesanan.cetakStruk();
    getch();
    return 0;
}
