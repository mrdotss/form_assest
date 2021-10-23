/*
	Name : Mayer Reflino Sitorus
	NIM  : 1301204103
*/

#include "atok.h"

void createList(List &L){
    First(L) = NULL;
    Last(L) = NULL;
}

infotype newStudent(string nama, string id, int umur){
	// NIM  : 1301204103

    infotype student;

    student.name = nama;
    student.nim = id;
    student.age = umur;

    return student;
}

address newElement(infotype Deta){
    // NIM  : 1301204103

    address P = new Node;

    Previous(P) = NULL;
    Data(P) = Deta;
    Next(P) = NULL;
    
    return P;
}

void show(List L){
    // NIM  : 1301204103

    address P;

    if ( First(L) == NULL ){
        cout << "List kosong!" << endl;
    } else{
        P = First(L);
        cout << endl;
        int i = 1;
        while ( P != NULL ){
            cout << "\nData ke - [" << i << "]"<<endl;
            cout << "  Nama: " << Data(P).name << endl;
            cout << "  NIM: " << Data(P).nim << endl;
            cout << "  Umur: " << Data(P).age << endl;
            P = Next(P);
            i++;
        }
        cout << endl;
    }
}

void insertFirst(List &L, address P){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        First(L) = P;
        Last(L) = P;
    } else{
        Next(P) = First(L);
        Previous(First(L)) = P;
        First(L) = P;
    }
}

void insertLast(List &L, address P){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        Last(L) = P;
        First(L) = P;
    }else{
        Next(Last(L)) = P;
        Previous(P) = Last(L);
        Last(L) = P;
    } 
}

void insertAfter(List &L, address Req, address P){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        cout << "insertLast hanya digunakan untuk input node baru diantara 2 node atau lebih.\n";
    }else{
        Next(P) = Next(Req);
        Previous(P) = Req;
        Next(Req) = P;
        Previous(Next(P)) = P;
    } 
}

void deleteFirst(List &L){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        cout << "List kosong!, tidak dapat melakukan deleteFirst.\n" << endl;
    }else{
        First(L) = Next(First(L));
        delete(Previous(First(L))); // delete object dari memory
        Previous(First(L)) = NULL;
    }
}

void deleteLast(List &L){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        cout << "List kosong!, tidak dapat melakukan deleteLast.\n" << endl;
    }else{
        Last(L) = Previous(Last(L));
        delete(Next(Last(L))); // delete object dari memory
        Next(Last(L)) = NULL;
    }    
}

void deleteAfter(List &L, address Req){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        cout << "List kosong!, tidak dapat melakukan deleteAfter.\n" << endl;
    }else if( Next(First(L)) ==  NULL ){ // kalau data tinggal 1 pakai deleteFirst
        deleteFirst(L);
    }else{
        address Temp;
        Temp = Next(Req);
        Previous(Next(Temp)) = Req;
        Next(Req) = Next(Next(Req));
        delete Temp; // delete object dari memory
    }  
}

void searchPerson(List L){
    // NIM  : 1301204103

    if ( First(L) == NULL ){
        cout << "List masih kosong!" << endl;
    } else{
        cout << "|-**************************-|\n";
        cout << "| 1) Nama                    |\n|----------------------------|\n";
        cout << "| 2) NIM                     |\n";
        cout << "|-**************************-|\n";
        cout << "\nData yang ingin dicari: ";
        int man;
        cin >> man;
        if ( man == 1 ){
            string cari;
            cout << "Input nama yang ingin dicari: ";
            cin >> cari;
            
            // Process of searching
            address P = First(L);
            bool found = false;
            while ( P != NULL ){
                if ( Data(P).name == cari ){
                    cout << "\nData ketemu\n";
                    cout << "  Nama: " << Data(P).name << endl;
                    cout << "  NIM: " << Data(P).nim << endl;
                    cout << "  Umur: " << Data(P).age << endl;
                    found = true;
                }
                P = Next(P);
            }
            if ( !found ){
                cout << "Data tidak ditemukan";
            }
        } else if (man == 2){
            string cari;
            cout << "Input NIM yang ingin dicari: ";
            cin >> cari;

            // Process of searching
            address P = First(L);
            bool found = false;
            cout << endl;
            while ( P != NULL ){
                if ( Data(P).nim == cari ){
                    cout << "Data ketemu\n";
                    cout << "  Nama: " << Data(P).name << endl;
                    cout << "  NIM: " << Data(P).nim << endl;
                    cout << "  Umur: " << Data(P).age << endl;
                    found = true;
                }
                P = Next(P);
            }
            if ( !found ){
                cout << "Data tidak ditemukan";
            }
        }else{
            cout << "Pilihan tidak valid\n\n";
        }
    }
}

void select(){
        // NIM  : 1301204103

    cout << "|-**************************-|\n|------------MENU------------|\n|-**************************-|\n";
    cout << "| 1) Menambah N data baru    |\n|----------------------------|\n";
    cout << "| 2) Menampilkan semua data  |\n|----------------------------|\n";
    cout << "| 3) Cari data spesifik      |\n|----------------------------|\n";
    cout << "| 4) Hapus data              |\n|----------------------------|\n";
    cout << "| 5) Exit                    |\n";
    cout << "|-**************************-|\n|-------------END------------|\n|-**************************-|\n\n";
}
