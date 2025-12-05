#include <iostream>
#include "Penumpang.h"
#include "Ojol.h"

using namespace std;

bool isEmptyPenumpang(address_ojol O){
    return O->first_penumpang == nullptr;
}

void deleteFirstChild(address_ojol O, address_penumpang &P){
    if(isEmptyPenumpang(O)){
        cout << "List Kosong";
    } else if(O->first_penumpang->next == nullptr){
        P = O->first_penumpang;
        O->first_penumpang = nullptr;
    } else {
        P = O->first_penumpang;
        O->first_penumpang = P->next;
        O->first_penumpang->prev = nullptr;
    }
}

void deleteLastChild(address_ojol O, address_penumpang &P){
    address_penumpang PP;

    if(isEmptyPenumpang(O)){
        cout << "List Kosong";
    } else if(O->first_penumpang->next == nullptr){
        P = O->first_penumpang;
        O->first_penumpang = nullptr;
    } else {
        PP = O->first_penumpang;
        while(PP->next->next != nullptr){
            PP = PP->next;
        }
        P = PP->next;
        PP->next = nullptr;
    }
}

void deleteAfterChild(address_ojol O, address_penumpang prec, address_penumpang &P){
    P = prec->next;
    prec->next = P->next;
    P->next->prev = prec;
    P->next = nullptr;
    P->prev = nullptr;
}

void viewChild(address_ojol O) {
    if (O == nullptr) {
        cout << "Data ojol tidak ditemukan." << endl;
        return;
    }

    if (O->first_penumpang == nullptr) {
        cout << "Ojol " << O->info_ojol.nama_ojol
             << " belum memiliki penumpang." << endl;
        return;
    }

    cout << "Daftar Penumpang dari Ojol: " << O->info_ojol.nama_ojol << endl;
    cout << "==========================================" << endl;

    address_penumpang P = O->first_penumpang;
    int i = 1;

    while (P != nullptr) {
        cout << i << ". Nama Penumpang : " << P->info_penumpang.nama_penumpang << endl;
        cout << "   No HP         : " << P->info_penumpang.noHP << endl;
        cout << "   Daerah Asal   : " << P->info_penumpang.daerah_asal << endl;
        cout << "   Daerah Tujuan : " << P->info_penumpang.daerah_tujuan << endl;
        cout << "   Umur          : " << P->info_penumpang.umur_penumpang << " tahun" << endl;
        cout << "------------------------------------------" << endl;

        P = P->next;
        i++;
    }
}





