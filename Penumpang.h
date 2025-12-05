#ifndef PENUMPANG_H_INCLUDED
#define PENUMPANG_H_INCLUDED
#include <iostream>

using namespace std;


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

address_penumpang createElemenChild(infotype_penumpang P);




#endif // PENUMPANG_H_INCLUDED
