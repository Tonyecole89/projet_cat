/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:04 +0100
 * 1st author:  tony.yam - tony.yam
 * description: debug_erreur
 */

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "regroupe.h"

int debug_erreur(char **argv, int compt)
{
    int longueur_prem_arg;
    int longueur_argument;
    int longueur_erreur;
    char *erreur;

    erreur = strerror(errno);
    longueur_prem_arg = longueur_arg(argv, 0);
    longueur_argument = longueur_arg(argv, compt);
    longueur_erreur = longueur_arg_erreur(erreur);
    write(1, argv[0], longueur_prem_arg);
    write(1, ": ", 2);
    write(1, argv[compt], longueur_argument);
    write(1, ": ", 2);
    write(1, erreur, longueur_erreur);
    write(1, "\n", 1);
    return (0);
}
