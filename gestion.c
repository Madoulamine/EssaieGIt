#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Etudiant {
    char nom[50];
    float notes[3];
    float moyenne;
    char mention[20];
};


void calculerMoyenne(struct Etudiant *etudiant) {
    float somme = 0;
    int i;
    for ( i = 0; i < 3; i++) {
        somme += etudiant->notes[i];
    }
    etudiant->moyenne = somme / 3;
    if (etudiant->moyenne >= 9) {
        printf(etudiant->mention, "Tres bien");
    } else if (etudiant->moyenne >= 7) {
        printf(etudiant->mention, "Bien");
    } else if (etudiant->moyenne >= 5.5) {
        printf(etudiant->mention, "Assez bien");
    } else if (etudiant->moyenne >= 4) {
        printf(etudiant->mention, "Passable");
    }
     else {
        printf(etudiant->mention, "Mention insuffisante");
    }
}

int main(void) {
	printf("\n\t-----------------------Gestion d'Un Etudiant-----------------------------\n");
    struct Etudiant etudiant1;
    int i;
    printf("\n\tEntrez le nom de l'Etudiant : \t");
    scanf("%s", etudiant1.nom);
    printf("\n\tEntrez les notes de l'Etudiant pour les 5 matieres du premier trimestre : \n\n");
    for (i = 0; i < 3; i++) {
        printf("\t\t Note %d :   ", i+1);
        scanf("%f", &etudiant1.notes[i]);
    }
    calculerMoyenne(&etudiant1);
    printf("\n\tLa moyenne de l'Etudiant %s est : %.2f\n\n", etudiant1.nom, etudiant1.moyenne);
    printf("\tMention : %c\n",etudiant1.mention);

    return 0;
}

