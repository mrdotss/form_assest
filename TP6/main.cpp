/*
	Name : Mayer Reflino Sitorus
	NIM  : 1301204103
*/

#include "atok.h"

int main(){
    
    List L;
    address P;
    infotype Person;
    int sentaku;
    bool r1, r2, r3;

    createList(L);

    // menggunakan swtich untuk menjalankan program.
    r1 = true; r2 = true; r3 = false;

    while ( (r1) && (r2) && (!r3)){
        select();
        cout << "Pilih Menu: ";
        cin >> sentaku;
        
        if ( sentaku == 1 ){
            int method;
            cout << "\nSelect method\n";
            cout << "|-*****************************************|\n";
            cout << "| 1) insertFirst                           |\n|------------------------------------------|\n";
            cout << "| 2) insertLast                            |\n|------------------------------------------|\n";
            cout << "| 3) insertAfter (Minimal sudah ada 1 data)|\n";
            cout << "|-*****************************************|\n";
            cout << "Pilih method: ";
            cin >> method;

            if ( method == 1 ){
                r1 = false;
                while ( (!r1) && (r2) && (!r3) ){
                    int n;
                    cout << "\nMasukkan jumlah data: ";
                    cin >> n;
                    if ( 0 < n ){
                        int i = 1;
                        while ( n > 0 ){
                            cout <<  "\nMasukkan data ke-" << "[" << i << "]: ";
                            cout << "\n  Nama: ";
                            cin >> Person.name;
                            cout << "  NIM: ";
                            cin >> Person.nim;
                            cout << "  Umur: ";
                            cin >> Person.age;
                            Person = newStudent(Person.name, Person.nim, Person.age);
                            P = newElement(Person);
                            insertFirst(L, P);
                            i++;
                            n--;
                        }
                        cout << "\nData berhasil ditambahkan\n";
                        cout << "\nKembali ke Menu Utama? (Y/N): ";
                        string joho;
                        cin  >> joho;
                        cout << endl;
                        if ( (joho == "Y") || (joho == "y") ){
                            r1 = true;
                        } else{
                            r1 = false; r2 = false; r3 = true; 
                        }
                    }else{
                        cout << "Jumlah tidak boleh 0!\n";
                        r1 = false; r2 = true;
                    }
                }
            }else if ( method == 2 ){
                r1 = false;
                while ( (!r1) && (r2) && (!r3) ){
                    int n;
                    cout << "\nMasukkan jumlah data: ";
                    cin >> n;
                    if ( 0 < n ){
                        int i = 1;
                        while ( n > 0 ){
                            cout <<  "\nMasukkan data ke-" << "[" << i << "]: ";
                            cout << "\n  Nama: ";
                            cin >> Person.name;
                            cout << "  NIM: ";
                            cin >> Person.nim;
                            cout << "  Umur: ";
                            cin >> Person.age;
                            Person = newStudent(Person.name, Person.nim, Person.age);
                            P = newElement(Person);
                            insertLast(L, P);
                            i++;
                            n--;
                        }
                        cout << "\nData berhasil ditambahkan\n";
                        cout << "\nKembali ke Menu Utama? (Y/N): ";
                        string joho;
                        cin  >> joho;
                        cout << endl;
                        if ( (joho == "Y") || (joho == "y") ){
                            r1 = true;
                        } else{
                            r1 = false; r2 = false; r3 = true; 
                        }
                    }else{
                        cout << "Jumlah tidak boleh 0!\n";
                        r1 = false; r2 = true;
                    }
                }
            }else if ( method == 3 ){
                r1 = false;
                while ( (!r1) && (r2) && (!r3) ){
                    int n;
                    cout << "\nMasukkan jumlah data: ";
                    cin >> n;
                    if ( 0 < n ){
                        int i = 1;
                        while ( n > 0 ){
                            cout <<  "\nMasukkan data ke-" << "[" << i << "]: ";
                            cout << "\n  Nama: ";
                            cin >> Person.name;
                            cout << "  NIM: ";
                            cin >> Person.nim;
                            cout << "  Umur: ";
                            cin >> Person.age;
                            Person = newStudent(Person.name, Person.nim, Person.age);
                            P = newElement(Person);
                            insertAfter(L, First(L), P);
                            i++;
                            n--;
                        }
                        cout << "\nData berhasil ditambahkan\n";
                        cout << "\nKembali ke Menu Utama? (Y/N): ";
                        string joho;
                        cin  >> joho;
                        cout << endl;
                        if ( (joho == "Y") || (joho == "y") ){
                            r1 = true;
                        } else{
                            r1 = false; r2 = false; r3 = true; 
                        }
                    }else{
                        cout << "Jumlah tidak boleh 0!\n";
                        r1 = false; r2 = true;
                    }
                }
            }
        }else if ( sentaku == 2 ){
            show(L);
            cout << "Kembali ke Menu Utama? (Y/N): ";
            string joho;
            cin  >> joho;
            cout << endl;
            if ( (joho == "Y") || (joho == "y") ){
                r1 = true;
            } else{
                r1 = false; r2 = false; r3 = true; 
            }
        }else if ( sentaku == 3 ){
            searchPerson(L);
            cout << "\nKembali ke Menu Utama? (Y/N): ";
            string joho;
            cin  >> joho;
            cout << endl;
             if ( (joho == "Y") || (joho == "y") ){
                r1 = true;
            } else{
                r1 = false; r2 = false; r3 = true; 
            }
        }else if ( sentaku == 4 ){
            int del;
            cout << "\nSelect method\n";
            cout << "|-****************************|\n";
            cout << "| 1) deleteFirst              |\n|-----------------------------|\n";
            cout << "| 2) deleteLast               |\n|-----------------------------|\n";
            cout << "| 3) deleteAfter (Min 3 data) |\n";
            cout << "|-****************************|\n";
            cout << "Pilih method: ";
            cin >> del;

            if ( del == 1 ){
                deleteFirst(L);
            }else if ( del == 2 ){
                deleteLast(L);
            }else if ( del == 3 ){
                deleteAfter(L, First(L));
            }
        }else if ( sentaku == 5 ){
            r1 = false; r2 = false; r3 = true;   
        }else{
            cout << "\nNomor menu tidak ditemukan!\nKeluar dari program\n";
            r1 = false; r2 = false; r3 = true;  
        }
    }
    return 0;
}
