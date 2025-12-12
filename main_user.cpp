#include <iostream>
#include "header.h"

using namespace std;

extern list_ojol LO;

int main_user() {

    if (isEmptyOjol(LO)) {
        cout << "Belum ada driver.\n";
        return 0;
    }

    cout << "\n==== PESAN OJOL ====\n";
    viewParent(LO);

    string namaDriver;
    cout << "Pilih driver: ";
    cin >> namaDriver;

    address_ojol O = findElemenParent(LO, namaDriver);
    if (O == NULL) {
        cout << "Driver tidak ditemukan.\n";
        return 0;
    }

    infotype_penumpang P;

    cout << "Nama penumpang: ";
    cin >> P.nama_penumpang;
    cout << "No HP: ";
    cin >> P.noHP;
    cout << "Asal: ";
    cin >> P.daerah_asal;
    cout << "Tujuan: ";
    cin >> P.daerah_tujuan;
    cout << "Umur: ";
    cin >> P.umur_penumpang;

    address_penumpang C = createElemenChild(P);
    insertLastChild(O, C);

    cout << "\nPesanan berhasil!\n";
    cout << "Driver " << O->info_ojol.nama_ojol << " akan menjemput Anda.\n";

    return 0;
}
