#include <iostream>
#include "header.h"
using namespace std;

list_ojol LO;

int main() {
    createListParent(LO);
    dataDump(LO);

    int pilih;
    do {
        cout << "\n=== SISTEM OJOL ===\n";
        cout << "1. Masuk sebagai Admin\n";
        cout << "2. Masuk sebagai User\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            main_admin();
        } else if (pilih == 2) {
            main_user();
        } else {
            cout << "silahkan isi dengan benar!";
        }

    } while (pilih != 0);

    cout << "Terima kasih!\n";
    return 0;
}
