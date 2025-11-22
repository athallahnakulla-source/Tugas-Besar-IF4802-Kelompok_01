#ifndef OJOL_H_INCLUDED
#define OJOL_H_INCLUDED
#include <iostream>
#include "Penumpang.h"

using namespace std;

struct data_ojol {
    string nama_ojol;
    string plat_nomor;
    string jenis_kendaraan;
    string noHP;
    string status;
    string daerah_operasi;
    int umur_ojol;
};

typedef data_ojol infotype_ojol;

typedef struct elemen_ojol *address_ojol;

struct elemen_ojol {
    infotype_ojol info_ojol;
    address_ojol next;
    address_penumpang first_penumpang;
};
struct list_ojol {
    address_ojol first;
};

void createListParent(list_ojol &LO);
address_ojol createElemenParent(infotype_ojol x);
void insertFirstParent(list_ojol &LO, address_ojol O);
void insertLastParent(list_ojol &LO, address_ojol O);
void insertAfterParent(list_ojol &LO address_ojol prec, address_ojol O);
void deleteFirstParent(list_ojol &LO, address_ojol &O);
void deleteLastParent(list_ojol &LO, address_ojol &O);
void deleteAfterParent(list_ojol &LO, address_ojol prec, address_ojol &O);
address_ojol findElemenParent(list_ojol &LO, string info);
void viewParent(list_ojol LO);



#endif // OJOL_H_INCLUDED
