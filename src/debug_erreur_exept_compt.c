/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:04 +0100
 * 1st author:  tony.yam - tony.yam
 * description: debug_erreur_exept_compt
 */

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "regroupe.h"

int debug_erreur_exept_compt()
{
    int longueur_erreur;
    char *erreur;

    erreur = strerror(errno);
    longueur_erreur = longueur_arg_erreur(erreur);
    write(1, erreur, longueur_erreur);
    write(1, "\n", 1);
    return (0);
}
