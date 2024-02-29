/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:02 +0100
 * 1st author:  tony.yam - tony.yam
 * description: try_erreur_buffer
 */

#include "regroupe.h"

int try_erreur_buffer(char **argv, char *buffer, int compt)
{
    if (!buffer) {
        debug_erreur(argv, compt);
        return (1);
    }
    return (0);
}
