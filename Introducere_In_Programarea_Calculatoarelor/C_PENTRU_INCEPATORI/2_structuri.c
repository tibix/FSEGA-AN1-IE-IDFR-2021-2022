#include<stdio.h>

struct data_calendaristica {
    int zi, luna, an;
} d;

struct ora_exacta {
    int ora, minute, secunde;
} o;

typedef struct {
    int id;
    char nume[50];
    char prenume[50];
    char gen[10];
    struct data_calendaristica data_nasterii;
    struct data_calendaristica data_angajarii;
} angajat;

void print_angajat(angajat angajat){
    printf("### Datele angajatului %s %s ###\n ID:%d\n Nume: %s\n Prenume: %s\n Genul: %s\n Data nasterii: %d-%d-%d\n Data angajarii: %d-%d-%d\n", angajat.nume, angajat.prenume, angajat.id, angajat.nume, angajat.prenume, angajat.gen, angajat.data_nasterii.zi, angajat.data_nasterii.luna, angajat.data_nasterii.an, angajat.data_angajarii.zi, angajat.data_angajarii.luna, angajat.data_angajarii.an);
}

int main(){
    angajat Tibi;
    printf("###  INREGISTRARE ANGAJAT NOU ###\n");
    Tibi.id = 1;
    printf("Nume: ");
    scanf("%s", Tibi.nume);
    printf("Prenume: ");
    scanf("%s", Tibi.prenume);
    printf("Identificat ca (Masculin/Feminin/Neutru): ");
    scanf("%s", Tibi.gen);
    printf("Data nasterii (Zi-Luna-An): ");
    scanf("%d-%d-%d", &Tibi.data_nasterii.zi, &Tibi.data_nasterii.luna, &Tibi.data_nasterii.an);
    printf("Data angajarii (Zi-Luna-An): ");
    scanf("%d-%d-%d", &Tibi.data_angajarii.zi, &Tibi.data_angajarii.luna, &Tibi.data_angajarii.an);

    print_angajat(Tibi);
    return 0;
}

