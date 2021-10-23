/*
	Name : Mayer Reflino Sitorus
	NIM  : 1301204103
*/

#ifndef ATOK_H_INCLUDED
#define ATOK_H_INCLUDED
#include <iostream>
using namespace std;

#define Previous(P) (P)->Previous
#define Data(P) (P)->Data
#define Next(P) (P)->Next
#define First(L) ((L).First)
#define Last(L) ((L).Last)

struct student{
    string name;
    string nim;
    int age;
};

typedef student infotype;

typedef struct Node *address; // Pointer ke Node
struct Node{
    address Previous;
    infotype Data;
    address Next;
};

struct List{
    address First;
    address Last;
};

void createList(List &L);
infotype newStudent(string nama, string id, int umur);
address newElement(infotype Deta);
void show(List L);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address Req, address P);
void deleteFirst(List &L);
void deleteLast(List &L);
void deleteAfter(List &L, address Req);
void searchPerson(List L);
void select();

#endif // ATOK_H_INCLUDED
