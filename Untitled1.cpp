#include <iostream>
#include <conio.h>

using namespace std;

class SPBU {
private:
    string namaPelanggan;
    string jenisBensin;
    float totalLiter;
    int hargaPerLiter;

public:
    void inputData() {
        cout << "Masukkan nama pelanggan: ";
        getline(cin, namaPelanggan);
        cout << "Masukkan jenis bensin (pertalite/pertamax): ";
        getline(cin, jenisBensin);
        cout << "Masukkan total liter yang dibeli: ";
        cin >> totalLiter;

        if (jenisBensin == "pertalite") {
            hargaPerLiter = 7000;
        } else if (jenisBensin == "pertamax") {
            hargaPerLiter = 9000;
        } else {
            cout << "Jenis bensin tidak valid!" << endl;
            hargaPerLiter = 0;
        }
    }

    void cetakStruk() {
        int totalHarga = hargaPerLiter * totalLiter;
        cout << "\n===== STRUK PEMBELIAN BENSIN =====" << endl;
        cout << "Nama Pelanggan : " << namaPelanggan << endl;
        cout << "Jenis Bensin   : " << jenisBensin << endl;
        cout << "Total Liter    : " << totalLiter << " liter" << endl;
        cout << "Total Harga    : Rp " << totalHarga << endl;
        cout << "===================================" << endl;
    }
};

int main(){
    SPBU pembeli;
    pembeli.inputData();
    pembeli.cetakStruk();
    getch();
    return 0;
}
