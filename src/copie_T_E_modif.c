/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-13 - 18:10 +0100
 * 1st author:  tony.yam - tony.yam
 * description: copie_T_E_modif
 */

#include <unistd.h>
#include <stdlib.h>
#include "regroupe.h"

int copie_T_E_modif(char *buffer, int compteur, int reader)
{
    while (buffer[compteur] != '\t') {
        compteur = compteur + 1;
    }
    if (reader > 1) {
        write(1, "^", 1);
        buffer[compteur] = 'I';
    }
    while (buffer[compteur] != '\n') {
        compteur = compteur + 1;
    }
    if (reader > 1) {
        buffer[compteur] = '$';
        write(1, buffer, reader);
        write(1, "\n", 1);
    }
    return (0);
}
