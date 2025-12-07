#include <iostream>
#include "header.h"

using namespace std;

void createListParent(list_ojol &LO){
    LO.first = nullptr;
}

bool isEmptyOjol(list_ojol LO){
    return LO.first == nullptr;
}

address_ojol createElemenParent(infotype_ojol x){
    address_ojol P = new elemen_ojol;

    P->info_ojol.nama_ojol = x.nama_ojol;
    P->info_ojol.plat_nomor = x.plat_nomor;
    P->info_ojol.jenis_kendaraan = x.jenis_kendaraan;
    P->info_ojol.noHP = x.noHP;
    P->info_ojol.status = x.status;
    P->info_ojol.daerah_operasi = x.daerah_operasi;
    P->info_ojol.umur_ojol = x.umur_ojol;
    P->next = nullptr;
    P->first_penumpang = nullptr;

    return P;
}

void insertFirstParent(list_ojol &LO, address_ojol O){
    if(isEmptyOjol(LO)){
        LO.first = O;
    } else {
        O->next = LO.first;
        LO.first = O;
    }
}

void insertLastParent(list_ojol &LO, address_ojol O){
    address_ojol OP;

    if(isEmptyOjol(LO)){
        LO.first = O;
    } else {
        OP = LO.first;
        while(OP->next != nullptr){
            OP = OP->next;
        }
        OP->next = O;
    }
}

void insertAfterParent(list_ojol &LO, address_ojol prec, address_ojol O){
    O->next = prec->next;
    prec->next = O;
}

void viewParent(list_ojol L) {
    if (L.first == NULL) {
        cout << "List Ojol kosong." << endl;
    } else {
        address_ojol P = L.first;
        int i = 1;

        while (P != NULL) {
            cout << "==============================" << endl;
            cout << "Data Ojek ke-" << i << endl;
            cout << "Nama Ojek   : " << P->info_ojol.nama_ojol << endl;

            // Hitung jumlah penumpang
            int count = 0;
            address_penumpang C = P->first_penumpang;
            while (C != NULL) {
                count++;
                C = C->next;
            }
            cout << "Jumlah Penumpang: " << count << endl;

            cout << "==============================" << endl << endl;

            P = P->next;
            i++;
        }
    }
}



