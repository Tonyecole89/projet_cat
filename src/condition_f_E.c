/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 22:35 +0100
 * 1st author:  tony.yam - tony.yam
 * description: condition_f_E
 */

#include <unistd.h>
#include "regroupe.h"

int condition_f_E(char *buffer)
{
    int compteur;
    int longueur_debut;
    int longueur_fin;
    int longue;

    compteur = 0;
    longueur_debut = 0;
    longueur_fin = 1;
    longue = 1;
    while (buffer[compteur] != '\0') {
        if (buffer[compteur] == '\n') {
            buffer[compteur] = '$';
            write(1, &buffer[longueur_debut], longueur_fin);
            write(1, "\n", 1);
            longueur_debut = longue;
            longueur_fin = 0;
        }
        longue = longue + 1;
        longueur_fin = longueur_fin + 1;
        compteur = compteur + 1;
    }
    return (0);
}
