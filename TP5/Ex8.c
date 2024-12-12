#include <stdio.h>
#define MAX_LIMIT 100

typedef struct Person person;
typedef struct date date;

struct date {
    int jours;
    int mois;
    int annee;
};

struct Person {
    char nom[MAX_LIMIT];
    char prenom[MAX_LIMIT];
    date dateDeNaissance;
    char matricule[MAX_LIMIT];
};

void lirePersonInfos(person *personPtr)
{
    printf("Nom: ");
    fgets(personPtr->nom, MAX_LIMIT, stdin);
    printf("Prenom: ");
    fgets(personPtr->prenom, MAX_LIMIT, stdin);
    printf("matricule: ");
    fgets(personPtr->matricule, MAX_LIMIT, stdin);
    printf("Date de naissance: (jj/mm/aaaa)\n");
    scanf("%d/%d/%d", 
        &(personPtr->dateDeNaissance.jours), 
        &(personPtr->dateDeNaissance.mois), 
        &(personPtr->dateDeNaissance.annee));
}

void ecrirePersonInfos(person *personPtr)
{
    printf("Nom: %s", personPtr->nom);
    printf("Prenom: %s", personPtr->prenom);
    printf("Matricule: %s", personPtr->matricule);
    printf("Date de naissance: %02d/%02d/%04d\n",
        personPtr->dateDeNaissance.jours,
        personPtr->dateDeNaissance.mois, 
        personPtr->dateDeNaissance.annee);
}

int main(void)
{
    person *person;

    printf("------ Lecture des infos ----------\n");
    lirePersonInfos(person);
    printf("\n------ Affichage des infos ----------\n");
    ecrirePersonInfos(person);
    printf("\n-- Infos Enregistred Successfully --\n");

    return (0);
}