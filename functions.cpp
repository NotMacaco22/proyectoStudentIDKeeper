#include <iostream>
#include <string.h>
#include "struct.h"
#define MAX 40

using namespace std;

studentsUAM students[MAX];
int pos = 0;
//Funcion de informacion estudiantil
void add(int cif, char nam[], char lnam[], char fac[], char maj[], char em[] );
//Funcion de estado de entrega de carnet
void status(bool delivered = true, bool notDelivered = false);

void add(int cif, char nam[], char lnam[], char fac[], char maj[], char em[] )
{
    students[pos].cif = cif;
    strcpy(students[pos].lastname, lnam);
    strcpy(students[pos].name, nam);
    strcpy(students[pos].major, maj);
    strcpy(students[pos].faculty, fac);
    strcpy(students[pos].email, em);
}

