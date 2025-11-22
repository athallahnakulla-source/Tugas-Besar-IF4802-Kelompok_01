#ifndef PENUMPANG_H_INCLUDED
#define PENUMPANG_H_INCLUDED
#include <iostream>

using namespace std;

struct elemen_ojol;
typedef elemen_ojol* address_ojol;

struct data_penumpang {
    string nama_penumpang;
    string noHP;
    string daerah_asal;
    string daerah_tujuan;
    int umur_penumpang;

};

typedef data_penumpang infotype_penumpang;

typedef struct elemen_penumpang *address_penumpang;

struct elemen_penumpang {
    infotype_penumpang info_penumpang;
    address_penumpang next;
    address_penumpang prev;
};
struct list_penumpang {
    address_penumpang first;
    address_penumpang last;
};

address_penumpang createElemenChild(infotype_penumpang P);
void insertFirstChild(address_ojol O, address_penumpang P);
void insertLastChild(address_ojol O, address_penumpang P);
void insertAfterChild(address_ojol O, address_penumpang prec, address_penumpang P);
void deleteFirstChild(address_ojol O, address_penumpang &P);
void deleteLastChild(address_ojol O, address_penumpang &P);
void deleteAfterChild(address_ojol O, address_penumpang prec, address_penumpang &P);
address_penumpang findElemenChild(address_ojol O, string infop);
void viewChild(address_ojol O);



#endif // PENUMPANG_H_INCLUDED
