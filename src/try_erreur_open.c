/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:04 +0100
 * 1st author:  tony.yam - tony.yam
 * description: try_erreur_open
 */

#include "regroupe.h"

int try_erreur_open(char **argv, int test_open, int compt)
{
    if (test_open == -1) {
        debug_erreur(argv, compt);
        return (1);
    }
    return (0);
}
