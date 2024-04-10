//
//  main.c
//  console4_char
//
//  Created by asap on 10/04/2024.
//

#include <stdio.h>
#include <string.h>

size_t strlen(const char* chaine);
int longueurChaine(const char* chaine);
char* strcpy(char* copieDeLaChaine, const char* chaineACopier);
int main(int argc, const char * argv[]) {
    char var1='A';
    //printf("Entrez un caractère :");
    //scanf("%c", &var1);
    //Affiche la lettre en str
    printf("Affichage en caractère : %c\n", var1);
    //Affiche décimale correspondante à la lettre
    printf("Valeur du caractère en décimale : %d\n", var1);
    
    //Initialisation d'une chaîne de caractère
    
    //Affichage de la chaine
    
    //Méthode plus simple pour initialiser une chaîne
    char chaine2[]="Bonsoir";
    
    printf("%s\n", chaine2);
    
    //Action utilisateurs avec des chaîne de caractères
    
    char prenom[100]; // On déclare la chaîne de caractère sufisament longue pour pouvoir accueillir le prénom de l'utilisateur
    printf("Veuillez renseigner votre prénom : ");
    //scanf("%s", prenom);
    printf("Bonjour %s, belle journée !\n", prenom);
    
    //Fonctions de la bibliothèque string.h utiles:
    // strlen pour calculer la longueur d'une chaîne.
    // strcpy pour copier une chaîne dans une autre.
    // strcat pour concaténer 2 chaînes.
    // strcmp pour comparer 2 chaînes.
    // strchr pour rechercher un caractère.
    // strpbrk pour rechercher le premier caractère de la liste.
    // strstr pour rechercher une chaîne dans une autre.
    // sprintf pour écrire dans une chaîne.
    
    //char chaine[]="Salut";
    //int longueurChaineVar=0;
    //longueurChaineVar=strlen(chaine);
    //printf("La chaine %s est de longueur %d\n", chaine, longueurChaineVar);
    
    char chaine[]="YOOOOOOO";
    int longueurChaineVar=0;
    longueurChaineVar=longueurChaine(chaine);
    printf("La chaine %s est de longueur %d\n", chaine, longueurChaineVar);
    
    //Copie de chaine
    char chaine1[]="John", copie[100]={0};
    strcpy(copie, chaine1);
    printf("chaine à copier : %s", chaine);
    printf("Chaine copié : %s", copie);
    return 0;
}

int longueurChaine(const char* chaine) {
    
    int longueurChaine=0;
    char caractereActuel=0;
    
    do 
    {
        caractereActuel=chaine[longueurChaine];
        longueurChaine++;
    }
    while(caractereActuel != '\0');
    longueurChaine--;
    return longueurChaine;
}
