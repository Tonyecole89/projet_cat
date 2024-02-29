/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2023-12-12 - 23:00 +0100
 * 1st author:  tony.yam - tony.yam
 * description: try_erreur_read_exept_lecture
 */

#include "regroupe.h"

int try_erreur_read_exept_lecture(int read)
{
    if (read == -1) {
        debug_erreur_exept_compt();
        return (1);
    }
    return (0);
}
